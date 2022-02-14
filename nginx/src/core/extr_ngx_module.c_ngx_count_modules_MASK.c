
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_7__ {size_t type; scalar_t__ ctx_index; } ;
typedef TYPE_2__ ngx_module_t ;
typedef size_t ngx_int_t ;
struct TYPE_8__ {int modules_used; TYPE_1__* old_cycle; TYPE_2__** modules; } ;
typedef TYPE_3__ ngx_cycle_t ;
struct TYPE_6__ {TYPE_2__** modules; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (TYPE_3__*,size_t,size_t) ;

ngx_int_t
FUNC_1(ngx_cycle_t *VAR_1, ngx_uint_t VAR_2)
{
    ngx_uint_t VAR_3, VAR_4, VAR_5;
    ngx_module_t *VAR_6;

    VAR_4 = 0;
    VAR_5 = 0;



    for (VAR_3 = 0; VAR_1->modules[VAR_3]; VAR_3++) {
        VAR_6 = VAR_1->modules[VAR_3];

        if (VAR_6->type != VAR_2) {
            continue;
        }

        if (VAR_6->ctx_index != VAR_0) {



            if (VAR_6->ctx_index > VAR_5) {
                VAR_5 = VAR_6->ctx_index;
            }

            if (VAR_6->ctx_index == VAR_4) {
                VAR_4++;
            }

            continue;
        }



        VAR_6->ctx_index = FUNC_0(VAR_1, VAR_2, VAR_4);

        if (VAR_6->ctx_index > VAR_5) {
            VAR_5 = VAR_6->ctx_index;
        }

        VAR_4 = VAR_6->ctx_index + 1;
    }
    if (VAR_1->old_cycle && VAR_1->old_cycle->modules) {

        for (VAR_3 = 0; VAR_1->old_cycle->modules[VAR_3]; VAR_3++) {
            VAR_6 = VAR_1->old_cycle->modules[VAR_3];

            if (VAR_6->type != VAR_2) {
                continue;
            }

            if (VAR_6->ctx_index > VAR_5) {
                VAR_5 = VAR_6->ctx_index;
            }
        }
    }



    VAR_1->modules_used = 1;

    return VAR_5 + 1;
}
