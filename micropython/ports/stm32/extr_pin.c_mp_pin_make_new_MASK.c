
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pin_obj_t ;
typedef int mp_obj_type_t ;
typedef int mp_obj_t ;
typedef int mp_map_t ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (size_t,size_t,int,int ,int) ;
 int FUNC_2 (int *,size_t,int const*) ;
 int * FUNC_3 (int const) ;
 int FUNC_4 (int const*,size_t,int const*,int *) ;

mp_obj_t FUNC_5(const mp_obj_type_t *VAR_1, size_t VAR_2, size_t VAR_3, const mp_obj_t *VAR_4) {
    FUNC_1(VAR_2, VAR_3, 1, VAR_0, 1);


    const pin_obj_t *VAR_5 = FUNC_3(VAR_4[0]);

    if (VAR_2 > 1 || VAR_3 > 0) {

        mp_map_t VAR_6;
        FUNC_2(&VAR_6, VAR_3, VAR_4 + VAR_2);
        FUNC_4(VAR_5, VAR_2 - 1, VAR_4 + 1, &VAR_6);
    }

    return FUNC_0(VAR_5);
}
