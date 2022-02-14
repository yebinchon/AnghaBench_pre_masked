
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mp_print_t ;
typedef scalar_t__ mp_print_kind_t ;
struct TYPE_3__ {size_t len; int * items; } ;
typedef TYPE_1__ mp_obj_tuple_t ;
typedef int mp_obj_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int const*,int ,scalar_t__) ;
 int FUNC_2 (int const*,char*) ;

void FUNC_3(const mp_print_t *VAR_3, mp_obj_t VAR_4, mp_print_kind_t VAR_5) {
    mp_obj_tuple_t *VAR_6 = FUNC_0(VAR_4);
    if (VAR_0 && VAR_5 == VAR_1) {
        FUNC_2(VAR_3, "[");
    } else {
        FUNC_2(VAR_3, "(");
        VAR_5 = VAR_2;
    }
    for (size_t VAR_7 = 0; VAR_7 < VAR_6->len; VAR_7++) {
        if (VAR_7 > 0) {
            FUNC_2(VAR_3, ", ");
        }
        FUNC_1(VAR_3, VAR_6->items[VAR_7], VAR_5);
    }
    if (VAR_0 && VAR_5 == VAR_1) {
        FUNC_2(VAR_3, "]");
    } else {
        if (VAR_6->len == 1) {
            FUNC_2(VAR_3, ",");
        }
        FUNC_2(VAR_3, ")");
    }
}
