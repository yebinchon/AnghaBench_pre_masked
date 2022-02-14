
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
typedef int ngx_uint_t ;
typedef size_t ngx_int_t ;
struct TYPE_5__ {int log; } ;
typedef TYPE_1__ ngx_cycle_t ;
struct TYPE_6__ {int * handle; int just_spawn; int exiting; int * pid; int * name; int * reopen; int * quit; int * term; } ;
typedef int * HANDLE ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (int ,int ,int ,char*,size_t,int *,int *,int ,int ) ;
 int FUNC_3 (int ,int ,int ,char*,int *,...) ;
 TYPE_4__* VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *,size_t) ;
 int VAR_8 ;

__attribute__((used)) static ngx_uint_t
FUNC_5(ngx_cycle_t *VAR_9, HANDLE VAR_10)
{
    u_long VAR_11;
    ngx_int_t VAR_12;

    for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {

        if (VAR_6[VAR_12].handle != VAR_10) {
            continue;
        }

        if (FUNC_0(VAR_10, &VAR_11) == 0) {
            FUNC_3(VAR_1, VAR_9->log, VAR_4,
                          "GetExitCodeProcess(%P) failed",
                          VAR_6[VAR_12].pid);
        }

        FUNC_3(VAR_3, VAR_9->log, 0,
                      "%s process %P exited with code %Xl",
                      VAR_6[VAR_12].name, VAR_6[VAR_12].pid, VAR_11);

        FUNC_1(VAR_6[VAR_12].reopen);
        FUNC_1(VAR_6[VAR_12].quit);
        FUNC_1(VAR_6[VAR_12].term);
        FUNC_1(VAR_10);

        VAR_6[VAR_12].handle = ((void*)0);
        VAR_6[VAR_12].term = ((void*)0);
        VAR_6[VAR_12].quit = ((void*)0);
        VAR_6[VAR_12].reopen = ((void*)0);

        if (!VAR_6[VAR_12].exiting && !VAR_8 && !VAR_7) {

            if (FUNC_4(VAR_9, VAR_6[VAR_12].name, VAR_12)
                == VAR_0)
            {
                FUNC_3(VAR_1, VAR_9->log, 0,
                              "could not respawn %s", VAR_6[VAR_12].name);

                if (VAR_12 == VAR_5 - 1) {
                    VAR_5--;
                }
            }
        }

        goto found;
    }

    FUNC_3(VAR_1, VAR_9->log, 0, "unknown process handle %p", VAR_10);

found:

    for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {

        FUNC_2(VAR_2, VAR_9->log, 0,
                       "process: %d %P %p e:%d j:%d",
                       VAR_12,
                       VAR_6[VAR_12].pid,
                       VAR_6[VAR_12].handle,
                       VAR_6[VAR_12].exiting,
                       VAR_6[VAR_12].just_spawn);

        if (VAR_6[VAR_12].handle) {
            return 1;
        }
    }

    return 0;
}
