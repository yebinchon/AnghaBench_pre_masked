
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
struct TYPE_14__ {scalar_t__ state; TYPE_4__* upstream; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_11__ {scalar_t__ state; } ;
struct TYPE_10__ {int * end; int * start; scalar_t__ count; scalar_t__ code; } ;
struct TYPE_15__ {TYPE_2__ chunked; TYPE_1__ status; } ;
typedef TYPE_6__ ngx_http_proxy_ctx_t ;
struct TYPE_13__ {int input_filter; TYPE_3__* pipe; int process_header; } ;
struct TYPE_12__ {int input_filter; } ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (TYPE_5__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_5)
{
    ngx_http_proxy_ctx_t *VAR_6;

    VAR_6 = FUNC_0(VAR_5, VAR_2);

    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6->status.code = 0;
    VAR_6->status.count = 0;
    VAR_6->status.start = ((void*)0);
    VAR_6->status.end = ((void*)0);
    VAR_6->chunked.state = 0;

    VAR_5->upstream->process_header = VAR_4;
    VAR_5->upstream->pipe->input_filter = VAR_1;
    VAR_5->upstream->input_filter = VAR_3;
    VAR_5->state = 0;

    return VAR_0;
}
