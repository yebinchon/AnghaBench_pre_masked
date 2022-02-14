
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct devlink_dpipe_header {int global; int id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,struct devlink_dpipe_header*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_6,
        struct devlink_dpipe_header *VAR_7)
{
 struct nlattr *VAR_8, *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_6, VAR_0);
 if (!VAR_9)
  return -VAR_5;

 if (FUNC_4(VAR_6, VAR_4, VAR_7->name) ||
     FUNC_5(VAR_6, VAR_3, VAR_7->id) ||
     FUNC_6(VAR_6, VAR_2, VAR_7->global))
  goto nla_put_failure;

 VAR_8 = FUNC_3(VAR_6,
         VAR_1);
 if (!VAR_8)
  goto nla_put_failure;

 VAR_10 = FUNC_0(VAR_6, VAR_7);
 if (VAR_10) {
  FUNC_1(VAR_6, VAR_8);
  goto nla_put_failure;
 }
 FUNC_2(VAR_6, VAR_8);
 FUNC_2(VAR_6, VAR_9);
 return 0;

nla_put_failure:
 VAR_10 = -VAR_5;
 FUNC_1(VAR_6, VAR_9);
 return VAR_10;
}
