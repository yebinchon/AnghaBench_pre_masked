
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_5__ {int conf_ctx; int log; } ;
typedef TYPE_1__ ngx_cycle_t ;
struct TYPE_6__ {scalar_t__ worker_processes; } ;
typedef TYPE_2__ ngx_core_conf_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_cycle_t *VAR_3, ngx_int_t VAR_4)
{
    ngx_int_t VAR_5;
    ngx_core_conf_t *VAR_6;

    FUNC_1(VAR_1, VAR_3->log, 0, "start worker processes");

    VAR_6 = (ngx_core_conf_t *) FUNC_0(VAR_3->conf_ctx, VAR_2);

    for (VAR_5 = 0; VAR_5 < VAR_6->worker_processes; VAR_5++) {
        if (FUNC_2(VAR_3, "worker", VAR_4) == VAR_0) {
            break;
        }
    }

    return VAR_5;
}
