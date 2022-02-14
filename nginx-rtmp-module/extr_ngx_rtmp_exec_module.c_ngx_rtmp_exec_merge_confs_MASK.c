
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_rtmp_exec_conf_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {scalar_t__ nelts; int * elts; } ;
typedef TYPE_1__ ngx_array_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_array_t *VAR_2, ngx_array_t *VAR_3)
{
    size_t VAR_4;
    ngx_rtmp_exec_conf_t *VAR_5, *VAR_6;

    if (VAR_3->nelts == 0) {
        return VAR_1;
    }

    if (VAR_2->nelts == 0) {
        *VAR_2 = *VAR_3;
        return VAR_1;
    }

    VAR_5 = FUNC_0(VAR_2, VAR_3->nelts);
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6 = VAR_3->elts;
    for (VAR_4 = 0; VAR_4 < VAR_3->nelts; VAR_4++, VAR_5++, VAR_6++) {
        *VAR_5 = *VAR_6;
    }

    return VAR_1;
}
