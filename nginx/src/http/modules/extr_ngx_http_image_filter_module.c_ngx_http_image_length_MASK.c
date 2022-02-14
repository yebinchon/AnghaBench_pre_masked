
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* content_length; scalar_t__ content_length_n; } ;
struct TYPE_9__ {TYPE_2__ headers_out; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_10__ {scalar_t__ pos; scalar_t__ last; } ;
typedef TYPE_4__ ngx_buf_t ;
struct TYPE_7__ {scalar_t__ hash; } ;



__attribute__((used)) static void
FUNC_0(ngx_http_request_t *VAR_0, ngx_buf_t *VAR_1)
{
    VAR_0->headers_out.content_length_n = VAR_1->last - VAR_1->pos;

    if (VAR_0->headers_out.content_length) {
        VAR_0->headers_out.content_length->hash = 0;
    }

    VAR_0->headers_out.content_length = ((void*)0);
}
