
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cgroup_path; int invocation_id; int manager; } ;
typedef TYPE_1__ Unit ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,char*,int ,int,int ) ;
 int FUNC_3 (TYPE_1__*,int,char*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(Unit *VAR_2) {
        char VAR_3[VAR_0];
        int VAR_4;

        FUNC_1(VAR_2);

        if (!FUNC_0(VAR_2->manager))
                return;

        if (FUNC_4(VAR_2->invocation_id))
                return;

        VAR_4 = FUNC_2(VAR_1, VAR_2->cgroup_path,
                         "trusted.invocation_id",
                         FUNC_5(VAR_2->invocation_id, VAR_3), 32,
                         0);
        if (VAR_4 < 0)
                FUNC_3(VAR_2, VAR_4, "Failed to set invocation ID on control group %s, ignoring: %m", VAR_2->cgroup_path);
}
