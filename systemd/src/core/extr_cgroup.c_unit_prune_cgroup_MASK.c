
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int cgroup_realized; int bpf_device_control_installed; scalar_t__ cgroup_enabled_mask; scalar_t__ cgroup_realized_mask; int cgroup_path; TYPE_1__* manager; } ;
typedef TYPE_2__ Unit ;
struct TYPE_9__ {int cgroup_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_2__*,int ,int,char*,int ) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;

void FUNC_7(Unit *VAR_4) {
        int VAR_5;
        bool VAR_6;

        FUNC_0(VAR_4);



        if (!VAR_4->cgroup_path)
                return;

        (void) FUNC_4(VAR_4, ((void*)0));

        VAR_6 = FUNC_5(VAR_4, VAR_3);

        VAR_5 = FUNC_2(VAR_4->manager->cgroup_supported, VAR_4->cgroup_path, !VAR_6);
        if (VAR_5 < 0)





                FUNC_3(VAR_4, VAR_5 == -VAR_0 ? VAR_1 : VAR_2, VAR_5, "Failed to destroy cgroup %s, ignoring: %m", VAR_4->cgroup_path);

        if (VAR_6)
                return;

        FUNC_6(VAR_4);

        VAR_4->cgroup_realized = 0;
        VAR_4->cgroup_realized_mask = 0;
        VAR_4->cgroup_enabled_mask = 0;

        VAR_4->bpf_device_control_installed = FUNC_1(VAR_4->bpf_device_control_installed);
}
