
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct rtgenmsg {int rtgen_family; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct mrt6msg {int im6_dst; int im6_src; int im6_mif; int im6_msgtype; } ;
struct mr_table {int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nlattr*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int *) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ,int) ;
 int FUNC_7 (struct sk_buff*,struct nlmsghdr*) ;
 struct rtgenmsg* FUNC_8 (struct nlmsghdr*) ;
 int FUNC_9 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_10 (int ,int ) ;
 struct nlmsghdr* FUNC_11 (struct sk_buff*,int ,int ,int ,int,int ) ;
 struct net* FUNC_12 (int *) ;
 int FUNC_13 (struct sk_buff*,struct net*,int ,int ,int *,int ) ;
 int FUNC_14 (struct net*,int ,int ) ;
 scalar_t__ FUNC_15 (struct sk_buff*,int,int ,int) ;
 scalar_t__ FUNC_16 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_17(struct mr_table *VAR_10, struct sk_buff *VAR_11)
{
 struct net *VAR_12 = FUNC_12(&VAR_10->net);
 struct nlmsghdr *VAR_13;
 struct rtgenmsg *VAR_14;
 struct mrt6msg *VAR_15;
 struct sk_buff *VAR_16;
 struct nlattr *VAR_17;
 int VAR_18;

 VAR_18 = VAR_11->len - sizeof(struct mrt6msg);
 VAR_15 = (struct mrt6msg *)FUNC_16(VAR_11);

 VAR_16 = FUNC_10(FUNC_1(VAR_18), VAR_1);
 if (!VAR_16)
  goto errout;

 VAR_13 = FUNC_11(VAR_16, 0, 0, VAR_7,
   sizeof(struct rtgenmsg), 0);
 if (!VAR_13)
  goto errout;
 VAR_14 = FUNC_8(VAR_13);
 VAR_14->rtgen_family = VAR_9;
 if (FUNC_5(VAR_16, VAR_4, VAR_15->im6_msgtype) ||
     FUNC_4(VAR_16, VAR_3, VAR_15->im6_mif) ||
     FUNC_3(VAR_16, VAR_6,
        &VAR_15->im6_src) ||
     FUNC_3(VAR_16, VAR_2,
        &VAR_15->im6_dst))
  goto nla_put_failure;

 VAR_17 = FUNC_6(VAR_16, VAR_5, VAR_18);
 if (!VAR_17 || FUNC_15(VAR_11, sizeof(struct mrt6msg),
      FUNC_2(VAR_17), VAR_18))
  goto nla_put_failure;

 FUNC_9(VAR_16, VAR_13);

 FUNC_13(VAR_16, VAR_12, 0, VAR_8, ((void*)0), VAR_1);
 return;

nla_put_failure:
 FUNC_7(VAR_16, VAR_13);
errout:
 FUNC_0(VAR_16);
 FUNC_14(VAR_12, VAR_8, -VAR_0);
}
