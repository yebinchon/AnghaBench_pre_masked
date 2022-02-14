
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ use; } ;
typedef TYPE_1__ ngx_event_conf_t ;
struct TYPE_7__ {int log; int conf_ctx; } ;
typedef TYPE_2__ ngx_cycle_t ;
struct TYPE_8__ {scalar_t__ ctx_index; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,char*) ;
 TYPE_3__ VAR_5 ;

__attribute__((used)) static char *
FUNC_2(ngx_cycle_t *VAR_6, void *VAR_7)
{
    ngx_event_conf_t *VAR_8;

    VAR_8 = FUNC_0(VAR_6->conf_ctx, VAR_3);

    if (VAR_8->use != VAR_5.ctx_index) {
        return VAR_1;
    }
    return VAR_1;
}
