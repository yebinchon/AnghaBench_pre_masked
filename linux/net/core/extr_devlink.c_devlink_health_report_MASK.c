
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devlink_health_reporter {int health_state; scalar_t__ last_recovery_ts; scalar_t__ auto_recover; int dump_lock; TYPE_1__* ops; int graceful_period; int error_count; struct devlink* devlink; } ;
struct devlink {int dummy; } ;
typedef enum devlink_health_reporter_state { ____Placeholder_devlink_health_reporter_state } devlink_health_reporter_state ;
struct TYPE_2__ {int name; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct devlink_health_reporter*,void*) ;
 int FUNC_2 (struct devlink_health_reporter*,void*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct devlink*,int ,int,scalar_t__) ;
 int FUNC_7 (struct devlink*,int ,char const*) ;

int FUNC_8(struct devlink_health_reporter *VAR_4,
     const char *VAR_5, void *VAR_6)
{
 enum devlink_health_reporter_state VAR_7;
 struct devlink *VAR_8 = VAR_4->devlink;


 FUNC_0(!VAR_5);
 FUNC_7(VAR_8, VAR_4->ops->name, VAR_5);
 VAR_4->error_count++;
 VAR_7 = VAR_4->health_state;
 VAR_4->health_state = VAR_0;


 if (VAR_4->auto_recover &&
     (VAR_7 != VAR_1 ||
      VAR_3 - VAR_4->last_recovery_ts <
      FUNC_3(VAR_4->graceful_period))) {
  FUNC_6(VAR_8,
           VAR_4->ops->name,
           VAR_4->health_state,
           VAR_3 -
           VAR_4->last_recovery_ts);
  return -VAR_2;
 }

 VAR_4->health_state = VAR_0;

 FUNC_4(&VAR_4->dump_lock);

 FUNC_1(VAR_4, VAR_6);
 FUNC_5(&VAR_4->dump_lock);

 if (VAR_4->auto_recover)
  return FUNC_2(VAR_4, VAR_6);

 return 0;
}
