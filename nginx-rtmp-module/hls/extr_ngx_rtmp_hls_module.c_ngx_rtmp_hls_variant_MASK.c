
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef void* ngx_str_t ;
struct TYPE_9__ {int args; void* suffix; } ;
typedef TYPE_2__ ngx_rtmp_hls_variant_t ;
struct TYPE_10__ {int * variant; } ;
typedef TYPE_3__ ngx_rtmp_hls_app_conf_t ;
struct TYPE_11__ {TYPE_1__* args; int pool; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_8__ {void** elts; int nelts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 (int *,int ,int,int) ;
 TYPE_2__* FUNC_2 (int *) ;
 void** FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_3, ngx_command_t *VAR_4, void *VAR_5)
{
    ngx_rtmp_hls_app_conf_t *VAR_6 = VAR_5;

    ngx_str_t *VAR_7, *VAR_8;
    ngx_uint_t VAR_9;
    ngx_rtmp_hls_variant_t *VAR_10;

    VAR_7 = VAR_3->args->elts;

    if (VAR_6->variant == ((void*)0)) {
        VAR_6->variant = FUNC_0(VAR_3->pool, 1,
                                         sizeof(ngx_rtmp_hls_variant_t));
        if (VAR_6->variant == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_10 = FUNC_2(VAR_6->variant);
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_4(VAR_10, sizeof(ngx_rtmp_hls_variant_t));

    VAR_10->suffix = VAR_7[1];

    if (VAR_3->args->nelts == 2) {
        return VAR_1;
    }

    if (FUNC_1(&VAR_10->args, VAR_3->pool, VAR_3->args->nelts - 2,
                       sizeof(ngx_str_t))
        != VAR_2)
    {
        return VAR_0;
    }

    VAR_8 = FUNC_3(&VAR_10->args, VAR_3->args->nelts - 2);
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    for (VAR_9 = 2; VAR_9 < VAR_3->args->nelts; VAR_9++) {
        *VAR_8++ = VAR_7[VAR_9];
    }

    return VAR_1;
}
