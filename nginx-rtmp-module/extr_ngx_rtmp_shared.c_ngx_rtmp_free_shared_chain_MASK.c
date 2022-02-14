
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* free; } ;
typedef TYPE_1__ ngx_rtmp_core_srv_conf_t ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_2__ ngx_chain_t ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;

void
FUNC_1(ngx_rtmp_core_srv_conf_t *VAR_0, ngx_chain_t *VAR_1)
{
    ngx_chain_t *VAR_2;

    if (FUNC_0(VAR_1)) {
        return;
    }

    for (VAR_2 = VAR_1; ; VAR_2 = VAR_2->next) {
        if (VAR_2->next == ((void*)0)) {
            VAR_2->next = VAR_0->free;
            VAR_0->free = VAR_1;
            return;
        }
    }
}
