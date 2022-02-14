
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * hs_buf; } ;
typedef TYPE_1__ ngx_rtmp_session_t ;
struct TYPE_9__ {TYPE_3__* free_hs; int pool; } ;
typedef TYPE_2__ ngx_rtmp_core_srv_conf_t ;
struct TYPE_10__ {struct TYPE_10__* next; int * buf; } ;
typedef TYPE_3__ ngx_chain_t ;


 TYPE_3__* FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int ) ;

void
FUNC_2(ngx_rtmp_session_t *VAR_1)
{
    ngx_rtmp_core_srv_conf_t *VAR_2;
    ngx_chain_t *VAR_3;

    if (VAR_1->hs_buf == ((void*)0)) {
        return;
    }
    VAR_2 = FUNC_1(VAR_1, VAR_0);
    VAR_3 = FUNC_0(VAR_2->pool);
    if (VAR_3 == ((void*)0)) {
        return;
    }
    VAR_3->buf = VAR_1->hs_buf;
    VAR_3->next = VAR_2->free_hs;
    VAR_2->free_hs = VAR_3;
    VAR_1->hs_buf = ((void*)0);
}
