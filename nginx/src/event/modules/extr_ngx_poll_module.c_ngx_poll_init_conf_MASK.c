
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ use; } ;
typedef TYPE_1__ ngx_event_conf_t ;
struct TYPE_7__ {int conf_ctx; } ;
typedef TYPE_2__ ngx_cycle_t ;
struct TYPE_8__ {scalar_t__ ctx_index; } ;


 char* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static char *
FUNC_1(ngx_cycle_t *VAR_3, void *VAR_4)
{
    ngx_event_conf_t *VAR_5;

    VAR_5 = FUNC_0(VAR_3->conf_ctx, VAR_1);

    if (VAR_5->use != VAR_2.ctx_index) {
        return VAR_0;
    }

    return VAR_0;
}
