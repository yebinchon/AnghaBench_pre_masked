
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_21__ {scalar_t__ nalloc; } ;
struct TYPE_17__ {TYPE_7__ args; TYPE_7__ names; TYPE_2__ cmd; int type; } ;
typedef TYPE_3__ ngx_rtmp_exec_conf_t ;
struct TYPE_18__ {int options; } ;
typedef TYPE_4__ ngx_rtmp_exec_app_conf_t ;
struct TYPE_19__ {TYPE_1__* args; int pool; } ;
typedef TYPE_5__ ngx_conf_t ;
struct TYPE_20__ {int offset; } ;
typedef TYPE_6__ ngx_command_t ;
typedef TYPE_7__ ngx_array_t ;
struct TYPE_15__ {int nelts; TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_7__*,int ,size_t,int) ;
 void* FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 TYPE_4__* FUNC_3 (TYPE_5__*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int,char*,int) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_5, ngx_command_t *VAR_6, void *VAR_7)
{
    char *VAR_8 = VAR_7;

    size_t VAR_9, VAR_10;
    ngx_str_t *VAR_11, *VAR_12, VAR_13;
    ngx_array_t *VAR_14;
    ngx_rtmp_exec_conf_t *VAR_15;
    ngx_rtmp_exec_app_conf_t *VAR_16;

    VAR_14 = (ngx_array_t *) (VAR_8 + VAR_6->offset);

    VAR_16 = FUNC_3(VAR_5, VAR_4);

    if (VAR_14->nalloc == 0 && FUNC_0(VAR_14, VAR_5->pool, 1,
                                             sizeof(ngx_rtmp_exec_conf_t))
                              != VAR_3)
    {
        return VAR_0;
    }

    VAR_12 = VAR_5->args->elts;

    VAR_15 = FUNC_1(VAR_14);
    if (VAR_15 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_2(VAR_15, sizeof(ngx_rtmp_exec_conf_t));



    VAR_15->type = VAR_2;
    VAR_15->cmd = VAR_12[1];

    if (FUNC_0(&VAR_15->names, VAR_5->pool, 1, sizeof(ngx_str_t)) != VAR_3) {
        return VAR_0;
    }

    if (VAR_5->args->nelts == 2) {
        return VAR_1;
    }

    VAR_10 = VAR_5->args->nelts - 2;
    if (FUNC_0(&VAR_15->args, VAR_5->pool, VAR_10, sizeof(ngx_str_t)) != VAR_3)
    {
        return VAR_0;
    }

    for (VAR_9 = 2; VAR_9 < VAR_5->args->nelts; VAR_9++) {

        VAR_13 = VAR_12[VAR_9];

        if (VAR_16->options == 1) {

            if (VAR_13.len >= 5 && FUNC_4(VAR_13.data, "name=", 5) == 0) {

                VAR_11 = FUNC_1(&VAR_15->names);
                if (VAR_11 == ((void*)0)) {
                    return VAR_0;
                }

                VAR_13.data += 5;
                VAR_13.len -= 5;

                *VAR_11 = VAR_13;

                continue;
            }
        }

        VAR_11 = FUNC_1(&VAR_15->args);
        if (VAR_11 == ((void*)0)) {
            return VAR_0;
        }

        *VAR_11 = VAR_13;
    }

    return VAR_1;
}
