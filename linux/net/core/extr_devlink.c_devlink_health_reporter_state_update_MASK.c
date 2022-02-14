
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devlink_health_reporter {int health_state; TYPE_1__* ops; int devlink; } ;
typedef enum devlink_health_reporter_state { ____Placeholder_devlink_health_reporter_state } devlink_health_reporter_state ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

void
FUNC_2(struct devlink_health_reporter *VAR_2,
         enum devlink_health_reporter_state VAR_3)
{
 if (FUNC_0(VAR_3 != VAR_1 &&
      VAR_3 != VAR_0))
  return;

 if (VAR_2->health_state == VAR_3)
  return;

 VAR_2->health_state = VAR_3;
 FUNC_1(VAR_2->devlink,
         VAR_2->ops->name, VAR_3);
}
