
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * resolver; } ;
typedef TYPE_2__ ngx_stream_core_srv_conf_t ;
typedef int ngx_str_t ;
struct TYPE_8__ {TYPE_1__* args; } ;
typedef TYPE_3__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_6__ {scalar_t__ nelts; int * elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int * FUNC_0 (TYPE_3__*,int *,scalar_t__) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_2, ngx_command_t *VAR_3, void *VAR_4)
{
    ngx_stream_core_srv_conf_t *VAR_5 = VAR_4;

    ngx_str_t *VAR_6;

    if (VAR_5->resolver) {
        return "is duplicate";
    }

    VAR_6 = VAR_2->args->elts;

    VAR_5->resolver = FUNC_0(VAR_2, &VAR_6[1], VAR_2->args->nelts - 1);
    if (VAR_5->resolver == ((void*)0)) {
        return VAR_0;
    }

    return VAR_1;
}
