
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ngx_int_t ;
struct TYPE_4__ {int log; } ;
typedef TYPE_1__ ngx_cycle_t ;
struct TYPE_5__ {int reopen_event; int reopen; int * handle; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ,int ,int ,char*,int ) ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static void
FUNC_2(ngx_cycle_t *VAR_4)
{
    ngx_int_t VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {

        if (VAR_3[VAR_5].handle == ((void*)0)) {
            continue;
        }

        if (FUNC_0(VAR_3[VAR_5].reopen) == 0) {
            FUNC_1(VAR_0, VAR_4->log, VAR_1,
                          "SetEvent(\"%s\") failed",
                          VAR_3[VAR_5].reopen_event);
        }
    }
}
