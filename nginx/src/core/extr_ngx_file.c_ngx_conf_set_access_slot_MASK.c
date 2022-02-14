
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_10__ {int * data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_11__ {TYPE_1__* args; } ;
typedef TYPE_3__ ngx_conf_t ;
struct TYPE_12__ {int offset; } ;
typedef TYPE_4__ ngx_command_t ;
struct TYPE_9__ {size_t nelts; TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_3__*,int ,char*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,char*,int) ;

char *
FUNC_3(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    char *VAR_7 = VAR_6;

    u_char *VAR_8;
    ngx_str_t *VAR_9;
    ngx_uint_t VAR_10, VAR_11, VAR_12, *VAR_13, VAR_14;

    VAR_13 = (ngx_uint_t *) (VAR_7 + VAR_5->offset);

    if (*VAR_13 != VAR_2) {
        return "is duplicate";
    }

    VAR_9 = VAR_4->args->elts;

    *VAR_13 = 0;
    VAR_14 = 0600;

    for (VAR_10 = 1; VAR_10 < VAR_4->args->nelts; VAR_10++) {

        VAR_8 = VAR_9[VAR_10].data;

        if (FUNC_2(VAR_8, "user:", sizeof("user:") - 1) == 0) {
            VAR_12 = 6;
            VAR_8 += sizeof("user:") - 1;
            VAR_14 = 0;

        } else if (FUNC_2(VAR_8, "group:", sizeof("group:") - 1) == 0) {
            VAR_12 = 3;
            VAR_8 += sizeof("group:") - 1;

        } else if (FUNC_2(VAR_8, "all:", sizeof("all:") - 1) == 0) {
            VAR_12 = 0;
            VAR_8 += sizeof("all:") - 1;

        } else {
            goto invalid;
        }

        if (FUNC_1(VAR_8, "rw") == 0) {
            VAR_11 = 6;

        } else if (FUNC_1(VAR_8, "r") == 0) {
            VAR_11 = 4;

        } else {
            goto invalid;
        }

        *VAR_13 |= VAR_11 << VAR_12;
    }

    *VAR_13 |= VAR_14;

    return VAR_1;

invalid:

    FUNC_0(VAR_3, VAR_4, 0, "invalid value \"%V\"", &VAR_9[VAR_10]);

    return VAR_0;
}
