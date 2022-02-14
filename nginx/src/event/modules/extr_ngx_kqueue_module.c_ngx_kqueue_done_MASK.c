
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int log; } ;
typedef TYPE_1__ ngx_cycle_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_3(ngx_cycle_t *VAR_8)
{
    if (FUNC_0(VAR_7) == -1) {
        FUNC_2(VAR_0, VAR_8->log, VAR_6,
                      "kqueue close() failed");
    }

    VAR_7 = -1;

    FUNC_1(VAR_1);
    FUNC_1(VAR_2);

    VAR_1 = ((void*)0);
    VAR_2 = ((void*)0);
    VAR_3 = 0;
    VAR_4 = 0;
    VAR_5 = 0;
}
