
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_obj_t ;


 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (int const,int ) ;

mp_obj_t FUNC_2(const mp_obj_t *VAR_0, size_t VAR_1, mp_obj_t VAR_2) {
    size_t VAR_3 = 0;
    for (size_t VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
         if (FUNC_1(VAR_0[VAR_4], VAR_2)) {
              VAR_3++;
         }
    }


    return FUNC_0(VAR_3);
}
