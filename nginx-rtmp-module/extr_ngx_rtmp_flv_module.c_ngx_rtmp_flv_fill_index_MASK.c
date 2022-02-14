
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {scalar_t__ offset; int nelts; } ;
typedef TYPE_2__ ngx_rtmp_flv_index_t ;
struct TYPE_9__ {scalar_t__ offset; TYPE_1__* link; } ;
typedef TYPE_3__ ngx_rtmp_amf_ctx_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_10__ {scalar_t__ last; scalar_t__ pos; } ;
typedef TYPE_4__ ngx_buf_t ;
struct TYPE_7__ {TYPE_4__* buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_rtmp_amf_ctx_t *VAR_2, ngx_rtmp_flv_index_t *VAR_3)
{
    uint32_t VAR_4;
    ngx_buf_t *VAR_5;





    VAR_5 = VAR_2->link->buf;

    if (VAR_5->last - VAR_5->pos < (ngx_int_t) VAR_2->offset + 4) {
        return VAR_0;
    }

    FUNC_0(&VAR_4, VAR_5->pos + VAR_2->offset, 4);

    VAR_3->nelts = VAR_4;
    VAR_3->offset = VAR_2->offset + 4;

    return VAR_1;
}
