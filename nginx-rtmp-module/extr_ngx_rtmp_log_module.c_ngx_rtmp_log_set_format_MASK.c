
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef size_t ngx_uint_t ;
struct TYPE_12__ {scalar_t__ len; int data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_rtmp_log_op_t ;
struct TYPE_11__ {size_t nelts; TYPE_3__* elts; } ;
struct TYPE_13__ {TYPE_10__ formats; } ;
typedef TYPE_2__ ngx_rtmp_log_main_conf_t ;
struct TYPE_14__ {int * ops; TYPE_1__ name; } ;
typedef TYPE_3__ ngx_rtmp_log_fmt_t ;
struct TYPE_15__ {scalar_t__ cmd_type; TYPE_7__* args; int pool; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_16__ {TYPE_1__* elts; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int ,int,int) ;
 TYPE_3__* FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (int ,TYPE_4__*,int ,char*,...) ;
 char* FUNC_3 (TYPE_4__*,int *,TYPE_7__*,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    ngx_rtmp_log_main_conf_t *VAR_7 = VAR_6;
    ngx_rtmp_log_fmt_t *VAR_8;
    ngx_str_t *VAR_9;
    ngx_uint_t VAR_10;

    VAR_9 = VAR_4->args->elts;

    if (VAR_4->cmd_type != VAR_3) {
        FUNC_2(VAR_2, VAR_4, 0,
                           "\"log_format\" directive can only be used on "
                           "\"rtmp\" level");
    }

    VAR_8 = VAR_7->formats.elts;
    for (VAR_10 = 0; VAR_10 < VAR_7->formats.nelts; VAR_10++) {
        if (VAR_8[VAR_10].name.len == VAR_9[1].len &&
            FUNC_4(VAR_8[VAR_10].name.data, VAR_9[1].data) == 0)
        {
            FUNC_2(VAR_1, VAR_4, 0,
                               "duplicate \"log_format\" name \"%V\"",
                               &VAR_9[1]);
            return VAR_0;
        }
    }

    VAR_8 = FUNC_1(&VAR_7->formats);
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    VAR_8->name = VAR_9[1];

    VAR_8->ops = FUNC_0(VAR_4->pool, 16, sizeof(ngx_rtmp_log_op_t));
    if (VAR_8->ops == ((void*)0)) {
        return VAR_0;
    }

    return FUNC_3(VAR_4, VAR_8->ops, VAR_4->args, 2);
}
