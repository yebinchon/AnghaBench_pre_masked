
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ data; scalar_t__ len; } ;
typedef TYPE_4__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_7__ {scalar_t__ status; } ;
struct TYPE_11__ {TYPE_3__* out; TYPE_1__ headers_out; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_9__ {TYPE_2__* buf; } ;
struct TYPE_8__ {scalar_t__ pos; scalar_t__ last; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_http_request_t *VAR_1, void *VAR_2, ngx_int_t VAR_3)
{
    ngx_str_t *VAR_4 = VAR_2;

    if (VAR_1->headers_out.status < VAR_0
        && VAR_1->out && VAR_1->out->buf)
    {
        VAR_4->len = VAR_1->out->buf->last - VAR_1->out->buf->pos;
        VAR_4->data = VAR_1->out->buf->pos;
    }

    return VAR_3;
}
