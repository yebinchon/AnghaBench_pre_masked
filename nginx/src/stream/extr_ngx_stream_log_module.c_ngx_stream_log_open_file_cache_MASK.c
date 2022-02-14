
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int time_t ;
typedef size_t ngx_uint_t ;
struct TYPE_9__ {int open_file_cache_valid; scalar_t__ open_file_cache_min_uses; int * open_file_cache; } ;
typedef TYPE_2__ ngx_stream_log_srv_conf_t ;
struct TYPE_10__ {scalar_t__ data; scalar_t__ len; } ;
typedef TYPE_3__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {int pool; TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_8__ {size_t nelts; TYPE_3__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,TYPE_4__*,int ,char*,...) ;
 int * FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (scalar_t__,char*) ;
 scalar_t__ FUNC_5 (scalar_t__,char*,int) ;

__attribute__((used)) static char *
FUNC_6(ngx_conf_t *VAR_5, ngx_command_t *VAR_6, void *VAR_7)
{
    ngx_stream_log_srv_conf_t *VAR_8 = VAR_7;

    time_t VAR_9, VAR_10;
    ngx_str_t *VAR_11, VAR_12;
    ngx_int_t VAR_13, VAR_14;
    ngx_uint_t VAR_15;

    if (VAR_8->open_file_cache != VAR_2) {
        return "is duplicate";
    }

    VAR_11 = VAR_5->args->elts;

    VAR_13 = 0;
    VAR_9 = 10;
    VAR_10 = 60;
    VAR_14 = 1;

    for (VAR_15 = 1; VAR_15 < VAR_5->args->nelts; VAR_15++) {

        if (FUNC_5(VAR_11[VAR_15].data, "max=", 4) == 0) {

            VAR_13 = FUNC_0(VAR_11[VAR_15].data + 4, VAR_11[VAR_15].len - 4);
            if (VAR_13 == VAR_3) {
                goto failed;
            }

            continue;
        }

        if (FUNC_5(VAR_11[VAR_15].data, "inactive=", 9) == 0) {

            VAR_12.len = VAR_11[VAR_15].len - 9;
            VAR_12.data = VAR_11[VAR_15].data + 9;

            VAR_9 = FUNC_3(&VAR_12, 1);
            if (VAR_9 == (time_t) VAR_3) {
                goto failed;
            }

            continue;
        }

        if (FUNC_5(VAR_11[VAR_15].data, "min_uses=", 9) == 0) {

            VAR_14 = FUNC_0(VAR_11[VAR_15].data + 9, VAR_11[VAR_15].len - 9);
            if (VAR_14 == VAR_3) {
                goto failed;
            }

            continue;
        }

        if (FUNC_5(VAR_11[VAR_15].data, "valid=", 6) == 0) {

            VAR_12.len = VAR_11[VAR_15].len - 6;
            VAR_12.data = VAR_11[VAR_15].data + 6;

            VAR_10 = FUNC_3(&VAR_12, 1);
            if (VAR_10 == (time_t) VAR_3) {
                goto failed;
            }

            continue;
        }

        if (FUNC_4(VAR_11[VAR_15].data, "off") == 0) {

            VAR_8->open_file_cache = ((void*)0);

            continue;
        }

    failed:

        FUNC_1(VAR_4, VAR_5, 0,
                           "invalid \"open_log_file_cache\" parameter \"%V\"",
                           &VAR_11[VAR_15]);
        return VAR_0;
    }

    if (VAR_8->open_file_cache == ((void*)0)) {
        return VAR_1;
    }

    if (VAR_13 == 0) {
        FUNC_1(VAR_4, VAR_5, 0,
                        "\"open_log_file_cache\" must have \"max\" parameter");
        return VAR_0;
    }

    VAR_8->open_file_cache = FUNC_2(VAR_5->pool, VAR_13, VAR_9);

    if (VAR_8->open_file_cache) {

        VAR_8->open_file_cache_valid = VAR_10;
        VAR_8->open_file_cache_min_uses = VAR_14;

        return VAR_1;
    }

    return VAR_0;
}
