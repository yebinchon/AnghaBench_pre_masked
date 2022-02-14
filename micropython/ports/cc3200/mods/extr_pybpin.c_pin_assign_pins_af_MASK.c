
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int pin_obj_t ;
typedef scalar_t__ mp_obj_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int ,int,int,int ) ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int,int,int) ;
 int FUNC_3 (int,int,int) ;

void FUNC_4 (mp_obj_t *VAR_2, uint32_t VAR_3, uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6) {
    for (int VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
        FUNC_3(VAR_5, VAR_6, VAR_7);
        if (VAR_2[VAR_7] != VAR_1) {
            pin_obj_t *VAR_8 = FUNC_1(VAR_2[VAR_7]);
            FUNC_0 (VAR_8, FUNC_2(VAR_8, VAR_5, VAR_6, VAR_7), 0, VAR_4, -1, VAR_0);
        }
    }
}
