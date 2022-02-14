
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int cgroup_control_inotify_wd; int cgroup_memory_inotify_wd; TYPE_1__* manager; int id; scalar_t__ cgroup_path; } ;
typedef TYPE_2__ Unit ;
struct TYPE_6__ {int cgroup_memory_inotify_wd_unit; int cgroup_inotify_fd; int cgroup_control_inotify_wd_unit; int cgroup_unit; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_2__*,int ,char*,int,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

void FUNC_6(Unit *VAR_1) {
        FUNC_1(VAR_1);




        if (VAR_1->cgroup_path) {
                (void) FUNC_2(VAR_1->manager->cgroup_unit, VAR_1->cgroup_path);
                VAR_1->cgroup_path = FUNC_5(VAR_1->cgroup_path);
        }

        if (VAR_1->cgroup_control_inotify_wd >= 0) {
                if (FUNC_3(VAR_1->manager->cgroup_inotify_fd, VAR_1->cgroup_control_inotify_wd) < 0)
                        FUNC_4(VAR_1, VAR_0, "Failed to remove cgroup control inotify watch %i for %s, ignoring: %m", VAR_1->cgroup_control_inotify_wd, VAR_1->id);

                (void) FUNC_2(VAR_1->manager->cgroup_control_inotify_wd_unit, FUNC_0(VAR_1->cgroup_control_inotify_wd));
                VAR_1->cgroup_control_inotify_wd = -1;
        }

        if (VAR_1->cgroup_memory_inotify_wd >= 0) {
                if (FUNC_3(VAR_1->manager->cgroup_inotify_fd, VAR_1->cgroup_memory_inotify_wd) < 0)
                        FUNC_4(VAR_1, VAR_0, "Failed to remove cgroup memory inotify watch %i for %s, ignoring: %m", VAR_1->cgroup_memory_inotify_wd, VAR_1->id);

                (void) FUNC_2(VAR_1->manager->cgroup_memory_inotify_wd_unit, FUNC_0(VAR_1->cgroup_memory_inotify_wd));
                VAR_1->cgroup_memory_inotify_wd = -1;
        }
}
