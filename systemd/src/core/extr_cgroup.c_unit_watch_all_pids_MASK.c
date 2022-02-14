
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cgroup_path; } ;
typedef TYPE_1__ Unit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

int FUNC_3(Unit *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_2);






        if (!VAR_2->cgroup_path)
                return -VAR_0;

        VAR_3 = FUNC_1(VAR_1);
        if (VAR_3 < 0)
                return VAR_3;
        if (VAR_3 > 0)
                return 0;

        return FUNC_2(VAR_2, VAR_2->cgroup_path);
}
