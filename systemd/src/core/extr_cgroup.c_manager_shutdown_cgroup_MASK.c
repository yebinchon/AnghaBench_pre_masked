
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ test_run_flags; scalar_t__ cgroup_root; void* pin_cgroupfs_fd; void* cgroup_inotify_fd; void* cgroup_inotify_event_source; void* cgroup_memory_inotify_wd_unit; void* cgroup_control_inotify_wd_unit; void* cgroup_empty_event_source; } ;
typedef TYPE_1__ Manager ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 void* FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 void* FUNC_4 (void*) ;
 void* FUNC_5 (void*) ;

void FUNC_6(Manager *VAR_2, bool VAR_3) {
        FUNC_0(VAR_2);



        if (VAR_3 && VAR_2->cgroup_root && VAR_2->test_run_flags != VAR_0)
                (void) FUNC_1(VAR_1, VAR_2->cgroup_root, 0);

        VAR_2->cgroup_empty_event_source = FUNC_5(VAR_2->cgroup_empty_event_source);

        VAR_2->cgroup_control_inotify_wd_unit = FUNC_2(VAR_2->cgroup_control_inotify_wd_unit);
        VAR_2->cgroup_memory_inotify_wd_unit = FUNC_2(VAR_2->cgroup_memory_inotify_wd_unit);

        VAR_2->cgroup_inotify_event_source = FUNC_5(VAR_2->cgroup_inotify_event_source);
        VAR_2->cgroup_inotify_fd = FUNC_4(VAR_2->cgroup_inotify_fd);

        VAR_2->pin_cgroupfs_fd = FUNC_4(VAR_2->pin_cgroupfs_fd);

        VAR_2->cgroup_root = FUNC_3(VAR_2->cgroup_root);
}
