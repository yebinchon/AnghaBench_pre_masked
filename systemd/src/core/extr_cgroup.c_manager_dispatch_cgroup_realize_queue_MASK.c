
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int id; TYPE_2__* in_cgroup_realize_queue; } ;
typedef TYPE_1__ Unit ;
struct TYPE_10__ {TYPE_1__* cgroup_realize_queue; } ;
typedef int ManagerState ;
typedef TYPE_2__ Manager ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;

unsigned FUNC_7(Manager *VAR_0) {
        ManagerState VAR_1;
        unsigned VAR_2 = 0;
        Unit *VAR_3;
        int VAR_4;

        FUNC_1(VAR_0);

        VAR_1 = FUNC_3(VAR_0);

        while ((VAR_3 = VAR_0->cgroup_realize_queue)) {
                FUNC_1(VAR_3->in_cgroup_realize_queue);

                if (FUNC_0(FUNC_4(VAR_3))) {

                        FUNC_6(VAR_3);
                        continue;
                }

                VAR_4 = FUNC_5(VAR_3, VAR_1);
                if (VAR_4 < 0)
                        FUNC_2(VAR_4, "Failed to realize cgroups for queued unit %s, ignoring: %m", VAR_3->id);

                VAR_2++;
        }

        return VAR_2;
}
