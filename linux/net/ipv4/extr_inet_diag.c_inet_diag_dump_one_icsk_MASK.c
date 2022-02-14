
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct net {int diag_nlsk; } ;
struct inet_hashinfo {int dummy; } ;
struct inet_diag_req_v2 {int dummy; } ;
struct TYPE_2__ {int portid; int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 int VAR_4 ;
 TYPE_1__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int) ;
 struct sock* FUNC_4 (struct net*,struct inet_hashinfo*,struct inet_diag_req_v2 const*) ;
 int FUNC_5 (struct sock*,struct inet_diag_req_v2 const*,int) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (int ,struct sk_buff*,int ,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct sock*,struct sk_buff*,struct inet_diag_req_v2 const*,int ,int ,int ,int ,struct nlmsghdr const*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct sock*) ;
 struct net* FUNC_13 (int ) ;

int FUNC_14(struct inet_hashinfo *VAR_5,
       struct sk_buff *VAR_6,
       const struct nlmsghdr *VAR_7,
       const struct inet_diag_req_v2 *VAR_8)
{
 bool VAR_9 = FUNC_6(VAR_6, VAR_0);
 struct net *VAR_10 = FUNC_13(VAR_6->sk);
 struct sk_buff *VAR_11;
 struct sock *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_4(VAR_10, VAR_5, VAR_8);
 if (FUNC_0(VAR_12))
  return FUNC_2(VAR_12);

 VAR_11 = FUNC_9(FUNC_5(VAR_12, VAR_8, VAR_9), VAR_3);
 if (!VAR_11) {
  VAR_13 = -VAR_2;
  goto out;
 }

 VAR_13 = FUNC_10(VAR_12, VAR_11, VAR_8,
      FUNC_11(FUNC_1(VAR_6).sk),
      FUNC_1(VAR_6).portid,
      VAR_7->nlmsg_seq, 0, VAR_7, VAR_9);
 if (VAR_13 < 0) {
  FUNC_3(VAR_13 == -VAR_1);
  FUNC_8(VAR_11);
  goto out;
 }
 VAR_13 = FUNC_7(VAR_10->diag_nlsk, VAR_11, FUNC_1(VAR_6).portid,
         VAR_4);
 if (VAR_13 > 0)
  VAR_13 = 0;

out:
 if (VAR_12)
  FUNC_12(VAR_12);

 return VAR_13;
}
