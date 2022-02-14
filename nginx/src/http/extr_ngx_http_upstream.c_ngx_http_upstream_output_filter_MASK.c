
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_6__ {int aio; TYPE_1__* upstream; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_7__ {int aio; } ;
typedef TYPE_3__ ngx_event_pipe_t ;
typedef int ngx_chain_t ;
struct TYPE_5__ {TYPE_3__* pipe; } ;


 int FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_1(void *VAR_0, ngx_chain_t *VAR_1)
{
    ngx_int_t VAR_2;
    ngx_event_pipe_t *VAR_3;
    ngx_http_request_t *VAR_4;

    VAR_4 = VAR_0;
    VAR_3 = VAR_4->upstream->pipe;

    VAR_2 = FUNC_0(VAR_4, VAR_1);

    VAR_3->aio = VAR_4->aio;

    return VAR_2;
}
