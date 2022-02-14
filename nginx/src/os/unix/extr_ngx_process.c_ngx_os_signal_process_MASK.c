
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ signo; int name; } ;
typedef TYPE_1__ ngx_signal_t ;
typedef int ngx_pid_t ;
typedef int ngx_int_t ;
struct TYPE_6__ {int log; } ;
typedef TYPE_2__ ngx_cycle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 TYPE_1__* VAR_2 ;

ngx_int_t
FUNC_3(ngx_cycle_t *VAR_3, char *VAR_4, ngx_pid_t VAR_5)
{
    ngx_signal_t *VAR_6;

    for (VAR_6 = VAR_2; VAR_6->signo != 0; VAR_6++) {
        if (FUNC_2(VAR_4, VAR_6->name) == 0) {
            if (FUNC_0(VAR_5, VAR_6->signo) != -1) {
                return 0;
            }

            FUNC_1(VAR_0, VAR_3->log, VAR_1,
                          "kill(%P, %d) failed", VAR_5, VAR_6->signo);
        }
    }

    return 1;
}
