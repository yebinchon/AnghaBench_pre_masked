
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int in_cgroup_empty_queue; TYPE_1__* manager; int cgroup_path; } ;
typedef TYPE_2__ Unit ;
struct TYPE_7__ {int cgroup_empty_event_source; int cgroup_empty_queue; } ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (TYPE_2__*,int,char*,int ) ;
 int FUNC_5 (int ,int ) ;

void FUNC_6(Unit *VAR_3) {
        int VAR_4;

        FUNC_1(VAR_3);
        if (VAR_3->in_cgroup_empty_queue)
                return;


        if (!VAR_3->cgroup_path)
                return;
        VAR_4 = FUNC_2(VAR_1, VAR_3->cgroup_path);
        if (VAR_4 < 0) {
                FUNC_4(VAR_3, VAR_4, "Failed to determine whether cgroup %s is empty: %m", VAR_3->cgroup_path);
                return;
        }
        if (VAR_4 == 0)
                return;

        FUNC_0(VAR_2, VAR_3->manager->cgroup_empty_queue, VAR_3);
        VAR_3->in_cgroup_empty_queue = 1;


        VAR_4 = FUNC_5(VAR_3->manager->cgroup_empty_event_source, VAR_0);
        if (VAR_4 < 0)
                FUNC_3(VAR_4, "Failed to enable cgroup empty event source: %m");
}
