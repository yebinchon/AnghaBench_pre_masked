
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int*,int,int ) ;

void FUNC_1(uint8_t VAR_3, uint8_t *VAR_4) {






    for (int VAR_5 = 0; VAR_5 < 192; VAR_5 += 16) {
        VAR_2[0] = VAR_5;



        for (int VAR_6 = 0; VAR_6 < 16; VAR_6++) {
            VAR_2[1 + VAR_6] = VAR_4[VAR_5 + VAR_6];
        }






        FUNC_0(VAR_3 << 1, VAR_2, 17, VAR_1);

    }
}
