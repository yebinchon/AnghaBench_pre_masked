
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct devlink_region {int size; int name; } ;
struct devlink {int dummy; } ;
typedef enum devlink_command { ____Placeholder_devlink_command } devlink_command ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,struct devlink*) ;
 int FUNC_1 (struct sk_buff*,struct devlink*,struct devlink_region*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int *,int,int) ;
 int FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sk_buff*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_5, struct devlink *VAR_6,
      enum devlink_command VAR_7, u32 VAR_8,
      u32 VAR_9, int VAR_10,
      struct devlink_region *VAR_11)
{
 void *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_4(VAR_5, VAR_8, VAR_9, &VAR_4, VAR_10, VAR_7);
 if (!VAR_12)
  return -VAR_3;

 VAR_13 = FUNC_0(VAR_5, VAR_6);
 if (VAR_13)
  goto nla_put_failure;

 VAR_13 = FUNC_5(VAR_5, VAR_1, VAR_11->name);
 if (VAR_13)
  goto nla_put_failure;

 VAR_13 = FUNC_6(VAR_5, VAR_2,
    VAR_11->size,
    VAR_0);
 if (VAR_13)
  goto nla_put_failure;

 VAR_13 = FUNC_1(VAR_5, VAR_6, VAR_11);
 if (VAR_13)
  goto nla_put_failure;

 FUNC_3(VAR_5, VAR_12);
 return 0;

nla_put_failure:
 FUNC_2(VAR_5, VAR_12);
 return VAR_13;
}
