
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pid_t ;
typedef int **** Unit ;
struct TYPE_5__ {int watch_pids; int units; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int ***** FUNC_3 (int ,int ) ;
 int ***** FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ) ;

Unit *FUNC_6(Manager *VAR_1, pid_t VAR_2) {
        Unit *VAR_3, **VAR_4;

        FUNC_1(VAR_1);





        if (!FUNC_5(VAR_2))
                return ((void*)0);

        if (VAR_2 == FUNC_2())
                return FUNC_3(VAR_1->units, VAR_0);

        VAR_3 = FUNC_4(VAR_1, VAR_2);
        if (VAR_3)
                return VAR_3;

        VAR_3 = FUNC_3(VAR_1->watch_pids, FUNC_0(VAR_2));
        if (VAR_3)
                return VAR_3;

        VAR_4 = FUNC_3(VAR_1->watch_pids, FUNC_0(-VAR_2));
        if (VAR_4)
                return VAR_4[0];

        return ((void*)0);
}
