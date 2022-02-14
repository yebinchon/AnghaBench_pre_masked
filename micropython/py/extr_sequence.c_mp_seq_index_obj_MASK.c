
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_obj_type_t ;
typedef int mp_obj_t ;


 int FUNC_0 (size_t) ;
 size_t FUNC_1 (int *,size_t,int const,int) ;
 scalar_t__ FUNC_2 (int const,int ) ;
 int * FUNC_3 (int const) ;
 int FUNC_4 (char*) ;

mp_obj_t FUNC_5(const mp_obj_t *VAR_0, size_t VAR_1, size_t VAR_2, const mp_obj_t *VAR_3) {
    mp_obj_type_t *VAR_4 = FUNC_3(VAR_3[0]);
    mp_obj_t VAR_5 = VAR_3[1];
    size_t VAR_6 = 0;
    size_t VAR_7 = VAR_1;

    if (VAR_2 >= 3) {
        VAR_6 = FUNC_1(VAR_4, VAR_1, VAR_3[2], 1);
        if (VAR_2 >= 4) {
            VAR_7 = FUNC_1(VAR_4, VAR_1, VAR_3[3], 1);
        }
    }

    for (size_t VAR_8 = VAR_6; VAR_8 < VAR_7; VAR_8++) {
        if (FUNC_2(VAR_0[VAR_8], VAR_5)) {

            return FUNC_0(VAR_8);
        }
    }

    FUNC_4("object not in sequence");
}
