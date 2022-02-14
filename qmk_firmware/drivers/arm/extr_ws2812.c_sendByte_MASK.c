
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(uint8_t VAR_5) {

    for (unsigned char VAR_6 = 0; VAR_6 < 8; VAR_6++) {
        bool VAR_7 = VAR_5 & (1 << (7 - VAR_6));

        if (VAR_7) {

            FUNC_1(VAR_0);
            FUNC_0(VAR_3);
            FUNC_2(VAR_0);
            FUNC_0(VAR_4);
        } else {

            FUNC_1(VAR_0);
            FUNC_0(VAR_1);
            FUNC_2(VAR_0);
            FUNC_0(VAR_2);
        }
    }
}
