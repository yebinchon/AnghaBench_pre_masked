
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pyb_pin_obj_t ;
typedef int * mp_obj_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;

pyb_pin_obj_t *FUNC_2(mp_obj_t VAR_1) {
    if (FUNC_0(VAR_1) != &VAR_0) {
        FUNC_1("expecting a pin");
    }
    pyb_pin_obj_t *VAR_2 = VAR_1;
    return VAR_2;
}
