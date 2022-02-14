
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct devlink {int dummy; } ;
typedef enum devlink_command { ____Placeholder_devlink_command } devlink_command ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct devlink*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,char const*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,unsigned long,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_8,
     struct devlink *VAR_9,
     enum devlink_command VAR_10,
     const char *VAR_11,
     const char *VAR_12,
     unsigned long VAR_13, unsigned long VAR_14)
{
 void *VAR_15;

 VAR_15 = FUNC_3(VAR_8, 0, 0, &VAR_7, 0, VAR_10);
 if (!VAR_15)
  return -VAR_6;

 if (FUNC_0(VAR_8, VAR_9))
  goto nla_put_failure;

 if (VAR_10 != VAR_5)
  goto out;

 if (VAR_11 &&
     FUNC_4(VAR_8, VAR_2,
      VAR_11))
  goto nla_put_failure;
 if (VAR_12 &&
     FUNC_4(VAR_8, VAR_0,
      VAR_12))
  goto nla_put_failure;
 if (FUNC_5(VAR_8, VAR_1,
         VAR_13, VAR_4))
  goto nla_put_failure;
 if (FUNC_5(VAR_8, VAR_3,
         VAR_14, VAR_4))
  goto nla_put_failure;

out:
 FUNC_2(VAR_8, VAR_15);
 return 0;

nla_put_failure:
 FUNC_1(VAR_8, VAR_15);
 return -VAR_6;
}
