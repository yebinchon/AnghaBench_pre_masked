
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ovs_header {int dummy; } ;
struct nlattr {int dummy; } ;
struct genl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_9 ;
 int FUNC_2 (struct sk_buff*,struct ovs_header*) ;
 int FUNC_3 (struct sk_buff*,struct genl_info*) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (struct genl_info*,int ,struct ovs_header**) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_10, struct genl_info *VAR_11)
{
 struct sk_buff *VAR_12;
 struct ovs_header *VAR_13;
 struct nlattr *VAR_14, *VAR_15;
 int VAR_16;

 VAR_12 = FUNC_8(VAR_11, VAR_8,
       &VAR_13);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 if (FUNC_6(VAR_12, VAR_6, VAR_9) ||
     FUNC_6(VAR_12, VAR_5, VAR_0))
  goto nla_put_failure;

 VAR_14 = FUNC_5(VAR_12, VAR_4);
 if (!VAR_14)
  goto nla_put_failure;

 VAR_15 = FUNC_5(VAR_12, VAR_3);
 if (!VAR_15)
  goto nla_put_failure;

 if (FUNC_6(VAR_12, VAR_2, VAR_7))
  goto nla_put_failure;
 FUNC_4(VAR_12, VAR_15);
 FUNC_4(VAR_12, VAR_14);

 FUNC_2(VAR_12, VAR_13);
 return FUNC_3(VAR_12, VAR_11);

nla_put_failure:
 FUNC_7(VAR_12);
 VAR_16 = -VAR_1;
 return VAR_16;
}
