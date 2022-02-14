
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_table_elt_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_7__ {int pool; int headers_in; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_8__ {int * elts; } ;
typedef TYPE_2__ ngx_array_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ,int,int) ;
 int ** FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_3, ngx_table_elt_t *VAR_4,
    ngx_uint_t VAR_5)
{
    ngx_array_t *VAR_6;
    ngx_table_elt_t **VAR_7;

    VAR_6 = (ngx_array_t *) ((char *) &VAR_3->headers_in + VAR_5);

    if (VAR_6->elts == ((void*)0)) {
        if (FUNC_0(VAR_6, VAR_3->pool, 1, sizeof(ngx_table_elt_t *))
            != VAR_2)
        {
            FUNC_2(VAR_3, VAR_1);
            return VAR_0;
        }
    }

    VAR_7 = FUNC_1(VAR_6);
    if (VAR_7 == ((void*)0)) {
        FUNC_2(VAR_3, VAR_1);
        return VAR_0;
    }

    *VAR_7 = VAR_4;
    return VAR_2;
}
