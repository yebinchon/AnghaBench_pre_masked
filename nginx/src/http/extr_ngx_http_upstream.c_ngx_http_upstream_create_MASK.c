
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_13__ {int content_length_n; int last_modified_time; } ;
struct TYPE_12__ {int log_error; int log; } ;
struct TYPE_14__ {TYPE_4__ headers_in; TYPE_3__ peer; scalar_t__ cleanup; } ;
typedef TYPE_5__ ngx_http_upstream_t ;
struct TYPE_15__ {int * cache; TYPE_2__* connection; TYPE_5__* upstream; int pool; TYPE_1__* main; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_11__ {int log; } ;
struct TYPE_10__ {int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*) ;
 TYPE_5__* FUNC_1 (int ,int) ;

ngx_int_t
FUNC_2(ngx_http_request_t *VAR_3)
{
    ngx_http_upstream_t *VAR_4;

    VAR_4 = VAR_3->upstream;

    if (VAR_4 && VAR_4->cleanup) {
        VAR_3->main->count++;
        FUNC_0(VAR_3);
    }

    VAR_4 = FUNC_1(VAR_3->pool, sizeof(ngx_http_upstream_t));
    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    VAR_3->upstream = VAR_4;

    VAR_4->peer.log = VAR_3->connection->log;
    VAR_4->peer.log_error = VAR_1;





    VAR_4->headers_in.content_length_n = -1;
    VAR_4->headers_in.last_modified_time = -1;

    return VAR_2;
}
