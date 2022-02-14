
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int pool; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_11__ {int last; int image; } ;
typedef TYPE_2__ ngx_http_image_filter_ctx_t ;
struct TYPE_12__ {int memory; int last_buf; int last; int pos; } ;
typedef TYPE_3__ ngx_buf_t ;


 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;

__attribute__((used)) static ngx_buf_t *
FUNC_2(ngx_http_request_t *VAR_0, ngx_http_image_filter_ctx_t *VAR_1)
{
    ngx_buf_t *VAR_2;

    VAR_2 = FUNC_0(VAR_0->pool);
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_2->pos = VAR_1->image;
    VAR_2->last = VAR_1->last;
    VAR_2->memory = 1;
    VAR_2->last_buf = 1;

    FUNC_1(VAR_0, VAR_2);

    return VAR_2;
}
