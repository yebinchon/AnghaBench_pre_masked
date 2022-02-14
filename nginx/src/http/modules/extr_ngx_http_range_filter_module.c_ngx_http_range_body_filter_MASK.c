
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ngx_int_t ;
typedef int ngx_http_request_t ;
struct TYPE_13__ {int nelts; } ;
struct TYPE_14__ {TYPE_1__ ranges; } ;
typedef TYPE_2__ ngx_http_range_filter_ctx_t ;
struct TYPE_15__ {int buf; } ;
typedef TYPE_3__ ngx_chain_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_3 (int *,TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (int *,TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_3, ngx_chain_t *VAR_4)
{
    ngx_http_range_filter_ctx_t *VAR_5;

    if (VAR_4 == ((void*)0)) {
        return FUNC_2(VAR_3, VAR_4);
    }

    VAR_5 = FUNC_1(VAR_3, VAR_2);

    if (VAR_5 == ((void*)0)) {
        return FUNC_2(VAR_3, VAR_4);
    }

    if (VAR_5->ranges.nelts == 1) {
        return FUNC_4(VAR_3, VAR_5, VAR_4);
    }





    if (FUNC_0(VAR_4->buf)) {
        return FUNC_2(VAR_3, VAR_4);
    }

    if (FUNC_5(VAR_3, VAR_5, VAR_4) != VAR_1) {
        return VAR_0;
    }

    return FUNC_3(VAR_3, VAR_5, VAR_4);
}
