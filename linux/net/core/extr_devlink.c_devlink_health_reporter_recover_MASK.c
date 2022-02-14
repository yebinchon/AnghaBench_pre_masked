
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devlink_health_reporter {int last_recovery_ts; int health_state; int recovery_count; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* recover ) (struct devlink_health_reporter*,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct devlink_health_reporter*,void*) ;

__attribute__((used)) static int
FUNC_1(struct devlink_health_reporter *VAR_3,
    void *VAR_4)
{
 int VAR_5;

 if (!VAR_3->ops->recover)
  return -VAR_1;

 VAR_5 = VAR_3->ops->recover(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_3->recovery_count++;
 VAR_3->health_state = VAR_0;
 VAR_3->last_recovery_ts = VAR_2;

 return 0;
}
