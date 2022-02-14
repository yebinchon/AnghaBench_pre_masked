
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int,int const) ;
 scalar_t__ VAR_3 ;

void FUNC_2(uint32_t VAR_4, const uint32_t *VAR_5, uint32_t VAR_6) {
    for (int VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        if (FUNC_1(VAR_2, VAR_4, *VAR_5) != VAR_3) {

            FUNC_0();
            return;
        }
        VAR_4 += 4;
        VAR_5 += 1;
    }




    FUNC_0();
}
