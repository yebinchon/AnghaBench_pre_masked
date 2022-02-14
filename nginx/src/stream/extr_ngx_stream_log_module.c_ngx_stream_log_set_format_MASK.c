
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_stream_log_op_t ;
struct TYPE_12__ {size_t nelts; TYPE_2__* elts; } ;
struct TYPE_13__ {TYPE_11__ formats; } ;
typedef TYPE_1__ ngx_stream_log_main_conf_t ;
struct TYPE_15__ {scalar_t__ len; int data; } ;
struct TYPE_14__ {int * ops; int * flushes; TYPE_3__ name; } ;
typedef TYPE_2__ ngx_stream_log_fmt_t ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_16__ {TYPE_7__* args; int pool; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_17__ {TYPE_3__* elts; } ;


 char* VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int,int) ;
 TYPE_2__* FUNC_1 (TYPE_11__*) ;
 int FUNC_2 (int ,TYPE_4__*,int ,char*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 char* FUNC_4 (TYPE_4__*,int *,int *,TYPE_7__*,int) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_2, ngx_command_t *VAR_3, void *VAR_4)
{
    ngx_stream_log_main_conf_t *VAR_5 = VAR_4;

    ngx_str_t *VAR_6;
    ngx_uint_t VAR_7;
    ngx_stream_log_fmt_t *VAR_8;

    VAR_6 = VAR_2->args->elts;

    VAR_8 = VAR_5->formats.elts;
    for (VAR_7 = 0; VAR_7 < VAR_5->formats.nelts; VAR_7++) {
        if (VAR_8[VAR_7].name.len == VAR_6[1].len
            && FUNC_3(VAR_8[VAR_7].name.data, VAR_6[1].data) == 0)
        {
            FUNC_2(VAR_1, VAR_2, 0,
                               "duplicate \"log_format\" name \"%V\"",
                               &VAR_6[1]);
            return VAR_0;
        }
    }

    VAR_8 = FUNC_1(&VAR_5->formats);
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    VAR_8->name = VAR_6[1];

    VAR_8->flushes = FUNC_0(VAR_2->pool, 4, sizeof(ngx_int_t));
    if (VAR_8->flushes == ((void*)0)) {
        return VAR_0;
    }

    VAR_8->ops = FUNC_0(VAR_2->pool, 16, sizeof(ngx_stream_log_op_t));
    if (VAR_8->ops == ((void*)0)) {
        return VAR_0;
    }

    return FUNC_4(VAR_2, VAR_8->flushes, VAR_8->ops,
                                         VAR_2->args, 2);
}
