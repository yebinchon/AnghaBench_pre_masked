
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef uintptr_t ngx_uint_t ;
typedef int ngx_int_t ;
typedef int ngx_http_variable_value_t ;
typedef int ngx_http_request_t ;
struct TYPE_4__ {int * ancient_browser_value; int * modern_browser_value; } ;
typedef TYPE_1__ ngx_http_browser_conf_t ;


 uintptr_t VAR_0 ;
 uintptr_t VAR_1 ;
 int VAR_2 ;
 uintptr_t FUNC_0 (int *,TYPE_1__*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int VAR_4 ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_5, ngx_http_variable_value_t *VAR_6,
    uintptr_t VAR_7)
{
    ngx_uint_t VAR_8;
    ngx_http_browser_conf_t *VAR_9;

    VAR_9 = FUNC_1(VAR_5, VAR_3);

    VAR_8 = FUNC_0(VAR_5, VAR_9);

    if (VAR_7 == VAR_1 && VAR_8 == VAR_1) {
        *VAR_6 = *VAR_9->modern_browser_value;
        return VAR_2;
    }

    if (VAR_7 == VAR_0 && VAR_8 == VAR_0) {
        *VAR_6 = *VAR_9->ancient_browser_value;
        return VAR_2;
    }

    *VAR_6 = VAR_4;
    return VAR_2;
}
