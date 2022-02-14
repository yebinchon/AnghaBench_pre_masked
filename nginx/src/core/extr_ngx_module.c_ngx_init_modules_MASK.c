
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_6__ {TYPE_1__** modules; } ;
typedef TYPE_2__ ngx_cycle_t ;
struct TYPE_5__ {scalar_t__ (* init_module ) (TYPE_2__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

ngx_int_t
FUNC_1(ngx_cycle_t *VAR_2)
{
    ngx_uint_t VAR_3;

    for (VAR_3 = 0; VAR_2->modules[VAR_3]; VAR_3++) {
        if (VAR_2->modules[VAR_3]->init_module) {
            if (VAR_2->modules[VAR_3]->init_module(VAR_2) != VAR_1) {
                return VAR_0;
            }
        }
    }

    return VAR_1;
}
