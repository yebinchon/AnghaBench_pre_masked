
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct devlink {int reload_failed; } ;
typedef enum devlink_command { ____Placeholder_devlink_command } devlink_command ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct devlink*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_3, struct devlink *VAR_4,
      enum devlink_command VAR_5, u32 VAR_6,
      u32 VAR_7, int VAR_8)
{
 void *VAR_9;

 VAR_9 = FUNC_3(VAR_3, VAR_6, VAR_7, &VAR_2, VAR_8, VAR_5);
 if (!VAR_9)
  return -VAR_1;

 if (FUNC_0(VAR_3, VAR_4))
  goto nla_put_failure;
 if (FUNC_4(VAR_3, VAR_0, VAR_4->reload_failed))
  goto nla_put_failure;

 FUNC_2(VAR_3, VAR_9);
 return 0;

nla_put_failure:
 FUNC_1(VAR_3, VAR_9);
 return -VAR_1;
}
