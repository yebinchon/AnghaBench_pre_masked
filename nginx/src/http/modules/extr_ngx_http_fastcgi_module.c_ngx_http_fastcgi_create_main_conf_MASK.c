
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_http_file_cache_t ;
typedef void ngx_http_fastcgi_main_conf_t ;
struct TYPE_3__ {int pool; } ;
typedef TYPE_1__ ngx_conf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int,int) ;
 void* FUNC_1 (int ,int) ;

__attribute__((used)) static void *
FUNC_2(ngx_conf_t *VAR_1)
{
    ngx_http_fastcgi_main_conf_t *VAR_2;

    VAR_2 = FUNC_1(VAR_1->pool, sizeof(ngx_http_fastcgi_main_conf_t));
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }
    return VAR_2;
}
