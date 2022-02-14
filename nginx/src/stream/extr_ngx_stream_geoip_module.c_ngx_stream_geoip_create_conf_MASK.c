
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void ngx_stream_geoip_conf_t ;
struct TYPE_5__ {void* data; int handler; } ;
typedef TYPE_1__ ngx_pool_cleanup_t ;
struct TYPE_6__ {int pool; } ;
typedef TYPE_2__ ngx_conf_t ;


 void* FUNC_0 (int ,int) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void *
FUNC_2(ngx_conf_t *VAR_1)
{
    ngx_pool_cleanup_t *VAR_2;
    ngx_stream_geoip_conf_t *VAR_3;

    VAR_3 = FUNC_0(VAR_1->pool, sizeof(ngx_stream_geoip_conf_t));
    if (VAR_3 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_2 = FUNC_1(VAR_1->pool, 0);
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_2->handler = VAR_0;
    VAR_2->data = VAR_3;

    return VAR_3;
}
