
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {scalar_t__ nlmsg_len; int nlmsg_seq; } ;
struct nlmsgerr {int error; int msg; } ;
struct nlattr {int dummy; } ;
struct nfgenmsg {int dummy; } ;
struct ip_set {int lock; TYPE_1__* variant; } ;
typedef enum ipset_adt { ____Placeholder_ipset_adt } ipset_adt ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int (* resize ) (struct ip_set*,int) ;int (* uadt ) (struct ip_set*,struct nlattr**,int,int*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__ FUNC_0 (struct sk_buff*) ;
 int VAR_9 ;
 int VAR_10 ;
 struct nlmsghdr* FUNC_1 (struct sk_buff*,int ,int ,int ,size_t,int ) ;
 int VAR_11 ;
 int FUNC_2 (int *,struct nlmsghdr*,scalar_t__) ;
 size_t FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct sock*,struct sk_buff*,int ,int ) ;
 int* FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct nlattr**,int ,struct nlattr*,scalar_t__,int ,int *) ;
 struct nlmsgerr* FUNC_7 (struct nlmsghdr*) ;
 int FUNC_8 (struct sk_buff*) ;
 struct nlmsghdr* FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct nlmsghdr*) ;
 struct sk_buff* FUNC_11 (size_t,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct ip_set*,int) ;
 int FUNC_16 (struct ip_set*,struct nlattr**,int,int*,int,int) ;

__attribute__((used)) static int
FUNC_17(struct sock *VAR_12, struct sk_buff *VAR_13, struct ip_set *VAR_14,
 struct nlattr *VAR_15[], enum ipset_adt VAR_16,
 u32 VAR_17, bool VAR_18)
{
 int VAR_19;
 u32 VAR_20 = 0;
 bool VAR_21 = VAR_17 & VAR_7, VAR_22 = 0;

 do {
  FUNC_13(&VAR_14->lock);
  VAR_19 = VAR_14->variant->uadt(VAR_14, VAR_15, VAR_16, &VAR_20, VAR_17, VAR_22);
  FUNC_14(&VAR_14->lock);
  VAR_22 = 1;
 } while (VAR_19 == -VAR_0 &&
   VAR_14->variant->resize &&
   (VAR_19 = VAR_14->variant->resize(VAR_14, VAR_22)) == 0);

 if (!VAR_19 || (VAR_19 == -VAR_6 && VAR_21))
  return 0;
 if (VAR_20 && VAR_18) {

  struct nlmsghdr *VAR_23, *VAR_24 = FUNC_9(VAR_13);
  struct sk_buff *VAR_25;
  struct nlmsgerr *VAR_26;
  size_t VAR_27 = FUNC_3(VAR_10,
         sizeof(*VAR_26) + FUNC_10(VAR_24));
  int VAR_28 = FUNC_12(sizeof(struct nfgenmsg));
  struct nlattr *VAR_29[VAR_4 + 1];
  struct nlattr *VAR_30;
  u32 *VAR_31;

  VAR_25 = FUNC_11(VAR_27, VAR_3);
  if (!VAR_25)
   return -VAR_2;
  VAR_23 = FUNC_1(VAR_25, FUNC_0(VAR_13).portid,
      VAR_24->nlmsg_seq, VAR_9, VAR_27, 0);
  VAR_26 = FUNC_7(VAR_23);
  VAR_26->error = VAR_19;
  FUNC_2(&VAR_26->msg, VAR_24, VAR_24->nlmsg_len);
  VAR_30 = (void *)&VAR_26->msg + VAR_28;

  VAR_19 = FUNC_6(VAR_29, VAR_4, VAR_30,
    VAR_24->nlmsg_len - VAR_28, VAR_11,
    ((void*)0));

  if (VAR_19) {
   FUNC_8(VAR_25);
   return VAR_19;
  }
  VAR_31 = FUNC_5(VAR_29[VAR_5]);

  *VAR_31 = VAR_20;

  FUNC_4(VAR_12, VAR_25, FUNC_0(VAR_13).portid,
    VAR_8);

  return -VAR_1;
 }

 return VAR_19;
}
