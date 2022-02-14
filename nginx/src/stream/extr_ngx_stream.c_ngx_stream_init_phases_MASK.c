
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_stream_handler_pt ;
struct TYPE_7__ {TYPE_1__* phases; } ;
typedef TYPE_2__ ngx_stream_core_main_conf_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_8__ {int pool; } ;
typedef TYPE_3__ ngx_conf_t ;
struct TYPE_6__ {int handlers; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_0 (int *,int ,int,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_conf_t *VAR_8, ngx_stream_core_main_conf_t *VAR_9)
{
    if (FUNC_0(&VAR_9->phases[VAR_4].handlers,
                       VAR_8->pool, 1, sizeof(ngx_stream_handler_pt))
        != VAR_1)
    {
        return VAR_0;
    }

    if (FUNC_0(&VAR_9->phases[VAR_5].handlers,
                       VAR_8->pool, 1, sizeof(ngx_stream_handler_pt))
        != VAR_1)
    {
        return VAR_0;
    }

    if (FUNC_0(&VAR_9->phases[VAR_2].handlers,
                       VAR_8->pool, 1, sizeof(ngx_stream_handler_pt))
        != VAR_1)
    {
        return VAR_0;
    }

    if (FUNC_0(&VAR_9->phases[VAR_7].handlers,
                       VAR_8->pool, 1, sizeof(ngx_stream_handler_pt))
        != VAR_1)
    {
        return VAR_0;
    }

    if (FUNC_0(&VAR_9->phases[VAR_6].handlers,
                       VAR_8->pool, 1, sizeof(ngx_stream_handler_pt))
        != VAR_1)
    {
        return VAR_0;
    }

    if (FUNC_0(&VAR_9->phases[VAR_3].handlers,
                       VAR_8->pool, 1, sizeof(ngx_stream_handler_pt))
        != VAR_1)
    {
        return VAR_0;
    }

    return VAR_1;
}
