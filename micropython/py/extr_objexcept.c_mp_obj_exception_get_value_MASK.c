
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mp_obj_t ;
struct TYPE_5__ {TYPE_1__* args; } ;
typedef TYPE_2__ mp_obj_exception_t ;
struct TYPE_4__ {scalar_t__ len; int * items; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;

mp_obj_t FUNC_1(mp_obj_t VAR_1) {
    mp_obj_exception_t *VAR_2 = FUNC_0(VAR_1);
    if (VAR_2->args->len == 0) {
        return VAR_0;
    } else {
        return VAR_2->args->items[0];
    }
}
