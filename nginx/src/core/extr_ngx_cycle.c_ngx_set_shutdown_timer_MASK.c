
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int log; int conf_ctx; } ;
typedef TYPE_1__ ngx_cycle_t ;
struct TYPE_7__ {scalar_t__ shutdown_timeout; } ;
typedef TYPE_2__ ngx_core_conf_t ;
struct TYPE_8__ {int cancelable; int log; TYPE_1__* data; int handler; } ;


 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;

void
FUNC_2(ngx_cycle_t *VAR_3)
{
    ngx_core_conf_t *VAR_4;

    VAR_4 = (ngx_core_conf_t *) FUNC_1(VAR_3->conf_ctx, VAR_0);

    if (VAR_4->shutdown_timeout) {
        VAR_1.handler = VAR_2;
        VAR_1.data = VAR_3;
        VAR_1.log = VAR_3->log;
        VAR_1.cancelable = 1;

        FUNC_0(&VAR_1, VAR_4->shutdown_timeout);
    }
}
