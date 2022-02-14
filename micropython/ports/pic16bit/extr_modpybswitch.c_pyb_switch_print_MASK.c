
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pyb_switch_obj_t ;
typedef int mp_print_t ;
typedef int mp_print_kind_t ;
typedef int * mp_obj_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int const*,char*,int ) ;

void FUNC_2(const mp_print_t *VAR_0, mp_obj_t VAR_1, mp_print_kind_t VAR_2) {
    pyb_switch_obj_t *VAR_3 = VAR_1;
    FUNC_1(VAR_0, "Switch(%u)", FUNC_0(VAR_3));
}
