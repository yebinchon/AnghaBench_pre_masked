
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ngx_rtmp_session_t ;
struct TYPE_10__ {scalar_t__ (* handle ) (int *,int ,TYPE_5__*) ;TYPE_5__* in; int arg; struct TYPE_10__* next; int * session; int (* sink ) (int *,TYPE_5__*) ;int detached; } ;
typedef TYPE_1__ ngx_rtmp_netcall_session_t ;
struct TYPE_11__ {TYPE_1__* cs; } ;
typedef TYPE_2__ ngx_rtmp_netcall_ctx_t ;
typedef int ngx_pool_t ;
struct TYPE_12__ {int destroyed; int * pool; TYPE_1__* data; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_13__ {int start; int last; int pos; } ;
typedef TYPE_4__ ngx_buf_t ;
struct TYPE_14__ {TYPE_4__* buf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,TYPE_5__*) ;
 scalar_t__ FUNC_5 (int *,int ,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_6(ngx_connection_t *VAR_2)
{
    ngx_rtmp_netcall_session_t *VAR_3, **VAR_4;
    ngx_pool_t *VAR_5;
    ngx_rtmp_session_t *VAR_6;
    ngx_rtmp_netcall_ctx_t *VAR_7;
    ngx_buf_t *VAR_8;

    VAR_3 = VAR_2->data;

    if (VAR_2->destroyed) {
        return;
    }

    VAR_2->destroyed = 1;

    if (!VAR_3->detached) {
        VAR_6 = VAR_3->session;
        VAR_7 = FUNC_3(VAR_6, VAR_1);

        if (VAR_3->in && VAR_3->sink) {
            VAR_3->sink(VAR_3->session, VAR_3->in);

            VAR_8 = VAR_3->in->buf;
            VAR_8->pos = VAR_8->last = VAR_8->start;

        }

        for(VAR_4 = &VAR_7->cs; *VAR_4; VAR_4 = &((*VAR_4)->next)) {
            if (*VAR_4 == VAR_3) {
                *VAR_4 = VAR_3->next;
                break;
            }
        }

        if (VAR_3->handle && VAR_3->handle(VAR_6, VAR_3->arg, VAR_3->in) != VAR_0) {
            FUNC_2(VAR_6);
        }
    }

    VAR_5 = VAR_2->pool;
    FUNC_0(VAR_2);
    FUNC_1(VAR_5);
}
