
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_6__ {size_t type; size_t ctx_index; } ;
typedef TYPE_2__ ngx_module_t ;
struct TYPE_7__ {TYPE_1__* old_cycle; TYPE_2__** modules; } ;
typedef TYPE_3__ ngx_cycle_t ;
struct TYPE_5__ {TYPE_2__** modules; } ;



__attribute__((used)) static ngx_uint_t
FUNC_0(ngx_cycle_t *VAR_0, ngx_uint_t VAR_1, ngx_uint_t VAR_2)
{
    ngx_uint_t VAR_3;
    ngx_module_t *VAR_4;

again:



    for (VAR_3 = 0; VAR_0->modules[VAR_3]; VAR_3++) {
        VAR_4 = VAR_0->modules[VAR_3];

        if (VAR_4->type != VAR_1) {
            continue;
        }

        if (VAR_4->ctx_index == VAR_2) {
            VAR_2++;
            goto again;
        }
    }



    if (VAR_0->old_cycle && VAR_0->old_cycle->modules) {

        for (VAR_3 = 0; VAR_0->old_cycle->modules[VAR_3]; VAR_3++) {
            VAR_4 = VAR_0->old_cycle->modules[VAR_3];

            if (VAR_4->type != VAR_1) {
                continue;
            }

            if (VAR_4->ctx_index == VAR_2) {
                VAR_2++;
                goto again;
            }
        }
    }

    return VAR_2;
}
