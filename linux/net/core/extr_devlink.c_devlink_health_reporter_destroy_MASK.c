
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devlink_health_reporter {scalar_t__ dump_fmsg; int dump_lock; int refcount; TYPE_1__* devlink; int list; } ;
struct TYPE_2__ {int reporters_lock; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct devlink_health_reporter*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(struct devlink_health_reporter *VAR_0)
{
 FUNC_5(&VAR_0->devlink->reporters_lock);
 FUNC_2(&VAR_0->list);
 FUNC_6(&VAR_0->devlink->reporters_lock);
 while (FUNC_7(&VAR_0->refcount) > 1)
  FUNC_3(100);
 FUNC_4(&VAR_0->dump_lock);
 if (VAR_0->dump_fmsg)
  FUNC_0(VAR_0->dump_fmsg);
 FUNC_1(VAR_0);
}
