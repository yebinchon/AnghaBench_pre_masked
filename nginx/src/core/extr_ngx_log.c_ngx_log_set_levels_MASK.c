
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_11__ {int data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_12__ {size_t log_level; } ;
typedef TYPE_3__ ngx_log_t ;
struct TYPE_13__ {TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
struct TYPE_14__ {int data; } ;
struct TYPE_10__ {int nelts; TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int * VAR_8 ;
 TYPE_9__* VAR_9 ;
 int FUNC_0 (int ,TYPE_4__*,int ,char*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_10, ngx_log_t *VAR_11)
{
    ngx_uint_t VAR_12, VAR_13, VAR_14, VAR_15;
    ngx_str_t *VAR_16;

    if (VAR_10->args->nelts == 2) {
        VAR_11->log_level = VAR_7;
        return VAR_1;
    }

    VAR_16 = VAR_10->args->elts;

    for (VAR_12 = 2; VAR_12 < VAR_10->args->nelts; VAR_12++) {
        VAR_15 = 0;

        for (VAR_13 = 1; VAR_13 <= VAR_2; VAR_13++) {
            if (FUNC_1(VAR_16[VAR_12].data, VAR_9[VAR_13].data) == 0) {

                if (VAR_11->log_level != 0) {
                    FUNC_0(VAR_6, VAR_10, 0,
                                       "duplicate log level \"%V\"",
                                       &VAR_16[VAR_12]);
                    return VAR_0;
                }

                VAR_11->log_level = VAR_13;
                VAR_15 = 1;
                break;
            }
        }

        for (VAR_13 = 0, VAR_14 = VAR_4; VAR_14 <= VAR_5; VAR_14 <<= 1) {
            if (FUNC_1(VAR_16[VAR_12].data, VAR_8[VAR_13++]) == 0) {
                if (VAR_11->log_level & ~VAR_3) {
                    FUNC_0(VAR_6, VAR_10, 0,
                                       "invalid log level \"%V\"",
                                       &VAR_16[VAR_12]);
                    return VAR_0;
                }

                VAR_11->log_level |= VAR_14;
                VAR_15 = 1;
                break;
            }
        }


        if (!VAR_15) {
            FUNC_0(VAR_6, VAR_10, 0,
                               "invalid log level \"%V\"", &VAR_16[VAR_12]);
            return VAR_0;
        }
    }

    if (VAR_11->log_level == VAR_2) {
        VAR_11->log_level = VAR_3;
    }

    return VAR_1;
}
