
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct genl_info {struct devlink** user_ptr; } ;
struct devlink_health_reporter {TYPE_1__* ops; } ;
struct devlink_fmsg {int dummy; } ;
struct devlink {int dummy; } ;
struct TYPE_2__ {int (* diagnose ) (struct devlink_health_reporter*,struct devlink_fmsg*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct devlink_fmsg* FUNC_0 () ;
 int FUNC_1 (struct devlink_fmsg*) ;
 int FUNC_2 (struct devlink_fmsg*) ;
 int FUNC_3 (struct devlink_fmsg*) ;
 int FUNC_4 (struct devlink_fmsg*,struct genl_info*,int ,int ) ;
 struct devlink_health_reporter* FUNC_5 (struct devlink*,struct genl_info*) ;
 int FUNC_6 (struct devlink_health_reporter*) ;
 int FUNC_7 (struct devlink_health_reporter*,struct devlink_fmsg*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_4,
       struct genl_info *VAR_5)
{
 struct devlink *VAR_6 = VAR_5->user_ptr[0];
 struct devlink_health_reporter *VAR_7;
 struct devlink_fmsg *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_5(VAR_6, VAR_5);
 if (!VAR_7)
  return -VAR_1;

 if (!VAR_7->ops->diagnose) {
  FUNC_6(VAR_7);
  return -VAR_3;
 }

 VAR_8 = FUNC_0();
 if (!VAR_8) {
  FUNC_6(VAR_7);
  return -VAR_2;
 }

 VAR_9 = FUNC_3(VAR_8);
 if (VAR_9)
  goto out;

 VAR_9 = VAR_7->ops->diagnose(VAR_7, VAR_8);
 if (VAR_9)
  goto out;

 VAR_9 = FUNC_2(VAR_8);
 if (VAR_9)
  goto out;

 VAR_9 = FUNC_4(VAR_8, VAR_5,
          VAR_0, 0);

out:
 FUNC_1(VAR_8);
 FUNC_6(VAR_7);
 return VAR_9;
}
