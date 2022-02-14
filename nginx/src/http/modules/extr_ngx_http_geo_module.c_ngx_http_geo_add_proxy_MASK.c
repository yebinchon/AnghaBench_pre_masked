
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * proxies; int pool; } ;
typedef TYPE_1__ ngx_http_geo_conf_ctx_t ;
typedef int ngx_conf_t ;
typedef int ngx_cidr_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int * FUNC_0 (int ,int,int) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_2, ngx_http_geo_conf_ctx_t *VAR_3,
    ngx_cidr_t *VAR_4)
{
    ngx_cidr_t *VAR_5;

    if (VAR_3->proxies == ((void*)0)) {
        VAR_3->proxies = FUNC_0(VAR_3->pool, 4, sizeof(ngx_cidr_t));
        if (VAR_3->proxies == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_5 = FUNC_1(VAR_3->proxies);
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_5 = *VAR_4;

    return VAR_1;
}
