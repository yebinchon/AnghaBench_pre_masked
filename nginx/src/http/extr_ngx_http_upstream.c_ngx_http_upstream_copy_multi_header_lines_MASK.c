
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_table_elt_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_7__ {int headers; } ;
struct TYPE_8__ {TYPE_1__ headers_out; int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_9__ {int * elts; } ;
typedef TYPE_3__ ngx_array_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ,int,int) ;
 int ** FUNC_1 (TYPE_3__*) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_2,
    ngx_table_elt_t *VAR_3, ngx_uint_t VAR_4)
{
    ngx_array_t *VAR_5;
    ngx_table_elt_t *VAR_6, **VAR_7;

    VAR_5 = (ngx_array_t *) ((char *) &VAR_2->headers_out + VAR_4);

    if (VAR_5->elts == ((void*)0)) {
        if (FUNC_0(VAR_5, VAR_2->pool, 2, sizeof(ngx_table_elt_t *)) != VAR_1)
        {
            return VAR_0;
        }
    }

    VAR_6 = FUNC_2(&VAR_2->headers_out.headers);
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_6 = *VAR_3;

    VAR_7 = FUNC_1(VAR_5);
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_7 = VAR_6;

    return VAR_1;
}
