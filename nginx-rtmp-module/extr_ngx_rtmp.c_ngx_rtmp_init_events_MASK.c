
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_rtmp_handler_pt ;
struct TYPE_5__ {int amf; int * events; } ;
typedef TYPE_1__ ngx_rtmp_core_main_conf_t ;
typedef int ngx_rtmp_amf_handler_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_6__ {int pool; } ;
typedef TYPE_2__ ngx_conf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_conf_t *VAR_3, ngx_rtmp_core_main_conf_t *VAR_4)
{
    size_t VAR_5;

    for(VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
        if (FUNC_0(&VAR_4->events[VAR_5], VAR_3->pool, 1,
                sizeof(ngx_rtmp_handler_pt)) != VAR_1)
        {
            return VAR_0;
        }
    }

    if (FUNC_0(&VAR_4->amf, VAR_3->pool, 1,
                sizeof(ngx_rtmp_amf_handler_t)) != VAR_1)
    {
        return VAR_0;
    }

    return VAR_1;
}
