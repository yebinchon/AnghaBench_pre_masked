
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct devlink_snapshot {int id; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_3,
          struct devlink *VAR_4,
          struct devlink_snapshot *VAR_5)
{
 struct nlattr *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_3, VAR_0);
 if (!VAR_6)
  return -VAR_2;

 VAR_7 = FUNC_3(VAR_3, VAR_1, VAR_5->id);
 if (VAR_7)
  goto nla_put_failure;

 FUNC_1(VAR_3, VAR_6);
 return 0;

nla_put_failure:
 FUNC_0(VAR_3, VAR_6);
 return VAR_7;
}
