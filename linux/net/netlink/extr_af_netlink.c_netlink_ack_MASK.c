
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int len; int sk; int * data; } ;
struct nlmsghdr {int nlmsg_len; int nlmsg_seq; } ;
struct nlmsgerr {int error; int msg; } ;
struct netlink_sock {int flags; } ;
struct netlink_ext_ack {int cookie_len; int cookie; scalar_t__ bad_attr; scalar_t__ _msg; } ;
struct TYPE_5__ {int portid; TYPE_1__* sk; } ;
struct TYPE_4__ {int (* sk_error_report ) (TYPE_1__*) ;int sk_err; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_1 (int) ;
 struct nlmsghdr* FUNC_2 (struct sk_buff*,int ,int ,int ,size_t,unsigned int) ;
 int FUNC_3 (int *,struct nlmsghdr*,int) ;
 int FUNC_4 (int ,struct sk_buff*,int ,int ) ;
 int FUNC_5 (struct sk_buff*,int ,int,int ) ;
 int FUNC_6 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_8 (int) ;
 struct netlink_sock* FUNC_9 (TYPE_1__*) ;
 struct nlmsgerr* FUNC_10 (struct nlmsghdr*) ;
 int FUNC_11 (struct sk_buff*,struct nlmsghdr*) ;
 scalar_t__ FUNC_12 (struct nlmsghdr*) ;
 struct sk_buff* FUNC_13 (size_t,int ) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (TYPE_1__*) ;

void FUNC_16(struct sk_buff *VAR_11, struct nlmsghdr *VAR_12, int VAR_13,
   const struct netlink_ext_ack *VAR_14)
{
 struct sk_buff *VAR_15;
 struct nlmsghdr *VAR_16;
 struct nlmsgerr *VAR_17;
 size_t VAR_18 = sizeof(*VAR_17);
 size_t VAR_19 = 0;
 struct netlink_sock *VAR_20 = FUNC_9(FUNC_0(VAR_11).sk);
 unsigned int VAR_21 = 0;
 bool VAR_22 = VAR_20->flags & VAR_4;





 if (VAR_22 && VAR_14 && VAR_14->_msg)
  VAR_19 += FUNC_8(FUNC_14(VAR_14->_msg) + 1);

 if (VAR_13) {
  if (!(VAR_20->flags & VAR_3))
   VAR_18 += FUNC_12(VAR_12);
  else
   VAR_21 |= VAR_10;
  if (VAR_22 && VAR_14 && VAR_14->bad_attr)
   VAR_19 += FUNC_8(sizeof(u32));
 } else {
  VAR_21 |= VAR_10;

  if (VAR_22 && VAR_14 && VAR_14->cookie_len)
   VAR_19 += FUNC_8(VAR_14->cookie_len);
 }

 if (VAR_19)
  VAR_21 |= VAR_9;

 VAR_15 = FUNC_13(VAR_18 + VAR_19, VAR_1);
 if (!VAR_15) {
  FUNC_0(VAR_11).sk->sk_err = VAR_0;
  FUNC_0(VAR_11).sk->sk_error_report(FUNC_0(VAR_11).sk);
  return;
 }

 VAR_16 = FUNC_2(VAR_15, FUNC_0(VAR_11).portid, VAR_12->nlmsg_seq,
     VAR_8, VAR_18, VAR_21);
 VAR_17 = FUNC_10(VAR_16);
 VAR_17->error = VAR_13;
 FUNC_3(&VAR_17->msg, VAR_12, VAR_18 > sizeof(*VAR_17) ? VAR_12->nlmsg_len : sizeof(*VAR_12));

 if (VAR_22 && VAR_14) {
  if (VAR_14->_msg) {
   FUNC_1(FUNC_6(VAR_15, VAR_6,
            VAR_14->_msg));
  }
  if (VAR_13) {
   if (VAR_14->bad_attr &&
       !FUNC_1((u8 *)VAR_14->bad_attr < VAR_11->data ||
         (u8 *)VAR_14->bad_attr >= VAR_11->data +
              VAR_11->len))
    FUNC_1(FUNC_7(VAR_15, VAR_7,
          (u8 *)VAR_14->bad_attr -
          VAR_11->data));
  } else {
   if (VAR_14->cookie_len)
    FUNC_1(FUNC_5(VAR_15, VAR_5,
      VAR_14->cookie_len,
      VAR_14->cookie));
  }
 }

 FUNC_11(VAR_15, VAR_16);

 FUNC_4(VAR_11->sk, VAR_15, FUNC_0(VAR_11).portid, VAR_2);
}
