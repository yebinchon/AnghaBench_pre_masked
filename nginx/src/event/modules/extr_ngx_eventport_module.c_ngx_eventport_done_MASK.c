
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ timer_t ;
struct TYPE_3__ {int log; } ;
typedef TYPE_1__ ngx_cycle_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(ngx_cycle_t *VAR_6)
{
    if (VAR_3 != (timer_t) -1) {
        if (FUNC_3(VAR_3) == -1) {
            FUNC_2(VAR_0, VAR_6->log, VAR_5,
                          "timer_delete() failed");
        }

        VAR_3 = (timer_t) -1;
    }

    if (FUNC_0(VAR_1) == -1) {
        FUNC_2(VAR_0, VAR_6->log, VAR_5,
                      "close() event port failed");
    }

    VAR_1 = -1;

    FUNC_1(VAR_2);

    VAR_2 = ((void*)0);
    VAR_4 = 0;
}
