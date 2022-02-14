
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct devlink_trap {int metadata_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4,
         const struct devlink_trap *VAR_5)
{
 struct nlattr *VAR_6;

 VAR_6 = FUNC_2(VAR_4, VAR_0);
 if (!VAR_6)
  return -VAR_3;

 if ((VAR_5->metadata_cap & VAR_2) &&
     FUNC_3(VAR_4, VAR_1))
  goto nla_put_failure;

 FUNC_1(VAR_4, VAR_6);

 return 0;

nla_put_failure:
 FUNC_0(VAR_4, VAR_6);
 return -VAR_3;
}
