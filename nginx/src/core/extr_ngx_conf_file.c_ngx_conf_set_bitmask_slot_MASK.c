
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_12__ {scalar_t__ len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_13__ {TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
struct TYPE_11__ {scalar_t__ len; int data; } ;
struct TYPE_14__ {size_t mask; TYPE_2__ name; } ;
typedef TYPE_5__ ngx_conf_bitmask_t ;
struct TYPE_15__ {int offset; TYPE_5__* post; } ;
typedef TYPE_6__ ngx_command_t ;
struct TYPE_10__ {size_t nelts; TYPE_3__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_4__*,int ,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

char *
FUNC_2(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    char *VAR_7 = VAR_6;

    ngx_uint_t *VAR_8, VAR_9, VAR_10;
    ngx_str_t *VAR_11;
    ngx_conf_bitmask_t *VAR_12;


    VAR_8 = (ngx_uint_t *) (VAR_7 + VAR_5->offset);
    VAR_11 = VAR_4->args->elts;
    VAR_12 = VAR_5->post;

    for (VAR_9 = 1; VAR_9 < VAR_4->args->nelts; VAR_9++) {
        for (VAR_10 = 0; VAR_12[VAR_10].name.len != 0; VAR_10++) {

            if (VAR_12[VAR_10].name.len != VAR_11[VAR_9].len
                || FUNC_1(VAR_12[VAR_10].name.data, VAR_11[VAR_9].data) != 0)
            {
                continue;
            }

            if (*VAR_8 & VAR_12[VAR_10].mask) {
                FUNC_0(VAR_3, VAR_4, 0,
                                   "duplicate value \"%s\"", VAR_11[VAR_9].data);

            } else {
                *VAR_8 |= VAR_12[VAR_10].mask;
            }

            break;
        }

        if (VAR_12[VAR_10].name.len == 0) {
            FUNC_0(VAR_2, VAR_4, 0,
                               "invalid value \"%s\"", VAR_11[VAR_9].data);

            return VAR_0;
        }
    }

    return VAR_1;
}
