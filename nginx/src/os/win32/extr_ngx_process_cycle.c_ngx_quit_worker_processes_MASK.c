
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
typedef size_t ngx_int_t ;
struct TYPE_4__ {int log; } ;
typedef TYPE_1__ ngx_cycle_t ;
struct TYPE_5__ {int exiting; int quit_event; int quit; int * handle; scalar_t__ just_spawn; int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int ,int ,int ,char*,size_t,int ,int *,int,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,char*,int ) ;
 TYPE_3__* VAR_4 ;

__attribute__((used)) static void
FUNC_3(ngx_cycle_t *VAR_5, ngx_uint_t VAR_6)
{
    ngx_int_t VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {

        FUNC_1(VAR_1, VAR_5->log, 0,
                       "process: %d %P %p e:%d j:%d",
                       VAR_7,
                       VAR_4[VAR_7].pid,
                       VAR_4[VAR_7].handle,
                       VAR_4[VAR_7].exiting,
                       VAR_4[VAR_7].just_spawn);

        if (VAR_6 && VAR_4[VAR_7].just_spawn) {
            VAR_4[VAR_7].just_spawn = 0;
            continue;
        }

        if (VAR_4[VAR_7].handle == ((void*)0)) {
            continue;
        }

        if (FUNC_0(VAR_4[VAR_7].quit) == 0) {
            FUNC_2(VAR_0, VAR_5->log, VAR_2,
                          "SetEvent(\"%s\") failed",
                          VAR_4[VAR_7].quit_event);
        }

        VAR_4[VAR_7].exiting = 1;
    }
}
