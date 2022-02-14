
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_table_elt_t ;
typedef int ngx_int_t ;
struct TYPE_4__ {int headers; } ;
struct TYPE_5__ {TYPE_1__ headers_out; } ;
typedef TYPE_2__ ngx_http_request_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_2, ngx_table_elt_t *VAR_3,
    ngx_uint_t VAR_4)
{
    ngx_table_elt_t *VAR_5, **VAR_6;

    VAR_5 = FUNC_0(&VAR_2->headers_out.headers);
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_5 = *VAR_3;

    if (VAR_4) {
        VAR_6 = (ngx_table_elt_t **) ((char *) &VAR_2->headers_out + VAR_4);
        *VAR_6 = VAR_5;
    }

    return VAR_1;
}
