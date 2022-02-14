
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int log; int conf_ctx; } ;
typedef TYPE_1__ ngx_cycle_t ;
struct TYPE_5__ {scalar_t__ daemon; } ;
typedef TYPE_2__ ngx_core_conf_t ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_4(ngx_cycle_t *VAR_4)
{
    ngx_core_conf_t *VAR_5;

    VAR_5 = (ngx_core_conf_t *) FUNC_2(VAR_4->conf_ctx, VAR_2);

    if (VAR_5->daemon) {
        if (FUNC_0() == 0) {
            FUNC_3(VAR_0, VAR_4->log, VAR_3,
                          "FreeConsole() failed");
        }

        return;
    }

    if (FUNC_1(VAR_1, 1) == 0) {
        FUNC_3(VAR_0, VAR_4->log, VAR_3,
                      "SetConsoleCtrlHandler() failed");
    }
}
