
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_11__ {scalar_t__ len; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_rtmp_session_t ;
typedef int ngx_pool_t ;
struct TYPE_12__ {TYPE_3__* buf; int * next; } ;
typedef TYPE_2__ ngx_chain_t ;
struct TYPE_13__ {int pos; int last; } ;
typedef TYPE_3__ ngx_buf_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ,char*,TYPE_1__*,int ,int ,int ,TYPE_1__*) ;

ngx_chain_t *
FUNC_3(ngx_rtmp_session_t *VAR_1, ngx_pool_t *VAR_2,
        ngx_str_t *VAR_3, ngx_str_t *VAR_4, ngx_uint_t VAR_5, ngx_uint_t VAR_6)
{
    ngx_chain_t *VAR_7;
    ngx_buf_t *VAR_8;

    VAR_7 = FUNC_0(VAR_2);
    if (VAR_7 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_8 = FUNC_1(VAR_2, sizeof("set ") - 1 + VAR_3->len +
                            (1 + VAR_0) * 3 +
                            (sizeof("\r\n") - 1) * 2 + VAR_4->len);

    if (VAR_8 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_7->next = ((void*)0);
    VAR_7->buf = VAR_8;

    VAR_8->last = FUNC_2(VAR_8->pos, "set %V %ui %ui %ui\r\n%V\r\n",
                          VAR_3, VAR_5, VAR_6, (ngx_uint_t) VAR_4->len, VAR_4);

    return VAR_7;
}
