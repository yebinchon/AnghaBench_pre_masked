
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ data; } ;
struct TYPE_15__ {TYPE_2__ value; } ;
struct TYPE_16__ {TYPE_3__ text; } ;
typedef TYPE_4__ ngx_stream_return_srv_conf_t ;
struct TYPE_17__ {int handler; } ;
typedef TYPE_5__ ngx_stream_core_srv_conf_t ;
struct TYPE_18__ {TYPE_3__* complex_value; int * value; TYPE_7__* cf; } ;
typedef TYPE_6__ ngx_stream_compile_complex_value_t ;
typedef int ngx_str_t ;
struct TYPE_19__ {TYPE_1__* args; } ;
typedef TYPE_7__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_13__ {int * elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_6__*,int) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 TYPE_5__* FUNC_2 (TYPE_7__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_5, ngx_command_t *VAR_6, void *VAR_7)
{
    ngx_stream_return_srv_conf_t *VAR_8 = VAR_7;

    ngx_str_t *VAR_9;
    ngx_stream_core_srv_conf_t *VAR_10;
    ngx_stream_compile_complex_value_t VAR_11;

    if (VAR_8->text.value.data) {
        return "is duplicate";
    }

    VAR_9 = VAR_5->args->elts;

    FUNC_0(&VAR_11, sizeof(ngx_stream_compile_complex_value_t));

    VAR_11.cf = VAR_5;
    VAR_11.value = &VAR_9[1];
    VAR_11.complex_value = &VAR_8->text;

    if (FUNC_1(&VAR_11) != VAR_2) {
        return VAR_0;
    }

    VAR_10 = FUNC_2(VAR_5, VAR_3);

    VAR_10->handler = VAR_4;

    return VAR_1;
}
