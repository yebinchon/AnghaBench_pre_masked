
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pin_obj_t ;
typedef int * mp_obj_t ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int *,int *) ;
 int VAR_2 ;

pin_obj_t *FUNC_3(mp_obj_t VAR_3) {
    pin_obj_t *VAR_4;


    if (FUNC_0(VAR_3, &VAR_2)) {
        VAR_4 = VAR_3;
        return VAR_4;
    }


    VAR_4 = FUNC_2(&VAR_1, VAR_3);
    if (VAR_4) {
        return VAR_4;
    }

    FUNC_1(VAR_0);
}
