
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mp_print_t ;
typedef int mp_print_kind_t ;
struct TYPE_3__ {int name; int (* print ) (int *,int ,int ) ;} ;
typedef TYPE_1__ mp_obj_type_t ;
typedef int mp_obj_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int const*,char*) ;
 int FUNC_3 (int const*,char*,int ) ;
 int FUNC_4 (int *,int ,int ) ;

void FUNC_5(const mp_print_t *VAR_1, mp_obj_t VAR_2, mp_print_kind_t VAR_3) {

    FUNC_0();

    if (VAR_2 == VAR_0) {
        FUNC_2(VAR_1, "(nil)");
        return;
    }

    mp_obj_type_t *VAR_4 = FUNC_1(VAR_2);
    if (VAR_4->print != ((void*)0)) {
        VAR_4->print((mp_print_t*)VAR_1, VAR_2, VAR_3);
    } else {
        FUNC_3(VAR_1, "<%q>", VAR_4->name);
    }
}
