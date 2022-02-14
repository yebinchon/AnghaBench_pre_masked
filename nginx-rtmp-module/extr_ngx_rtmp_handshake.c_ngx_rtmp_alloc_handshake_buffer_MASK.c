
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_13__ {int pool; TYPE_4__* free_hs; } ;
typedef TYPE_3__ ngx_rtmp_core_srv_conf_t ;
struct TYPE_14__ {struct TYPE_14__* next; TYPE_5__* buf; } ;
typedef TYPE_4__ ngx_chain_t ;
struct TYPE_15__ {int memory; int * start; int * last; int * pos; int * end; } ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_11__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_4__*) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 void* FUNC_2 (int ,int) ;
 int VAR_2 ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static ngx_buf_t *
FUNC_4(ngx_rtmp_session_t *VAR_3)
{
    ngx_rtmp_core_srv_conf_t *VAR_4;
    ngx_chain_t *VAR_5;
    ngx_buf_t *VAR_6;

    FUNC_1(VAR_0, VAR_3->connection->log, 0,
            "handshake: allocating buffer");

    VAR_4 = FUNC_3(VAR_3, VAR_2);

    if (VAR_4->free_hs) {
        VAR_5 = VAR_4->free_hs;
        VAR_6 = VAR_5->buf;
        VAR_4->free_hs = VAR_5->next;
        FUNC_0(VAR_4->pool, VAR_5);

    } else {
        VAR_6 = FUNC_2(VAR_4->pool, sizeof(ngx_buf_t));
        if (VAR_6 == ((void*)0)) {
            return ((void*)0);
        }
        VAR_6->memory = 1;
        VAR_6->start = FUNC_2(VAR_4->pool, VAR_1);
        if (VAR_6->start == ((void*)0)) {
            return ((void*)0);
        }
        VAR_6->end = VAR_6->start + VAR_1;
    }

    VAR_6->pos = VAR_6->last = VAR_6->start;

    return VAR_6;
}
