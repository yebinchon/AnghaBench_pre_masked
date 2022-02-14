
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_uint_t ;
typedef int ngx_str_t ;
typedef int ngx_http_request_t ;
typedef int ngx_http_complex_value_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static ngx_uint_t
FUNC_2(ngx_http_request_t *VAR_1,
    ngx_http_complex_value_t *VAR_2, ngx_uint_t VAR_3)
{
    ngx_str_t VAR_4;

    if (VAR_2 == ((void*)0)) {
        return VAR_3;
    }

    if (FUNC_0(VAR_1, VAR_2, &VAR_4) != VAR_0) {
        return 0;
    }

    return FUNC_1(&VAR_4);
}
