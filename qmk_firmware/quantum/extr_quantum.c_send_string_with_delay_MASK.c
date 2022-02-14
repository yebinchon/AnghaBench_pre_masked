
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char) ;
 int FUNC_3 (int) ;

void FUNC_4(const char *VAR_3, uint8_t VAR_4) {
    while (1) {
        char VAR_5 = *VAR_3;
        if (!VAR_5) break;
        if (VAR_5 == VAR_1) {

            uint8_t VAR_6 = *(++VAR_3);
            FUNC_0(VAR_6);
            FUNC_2(VAR_6);
        } else if (VAR_5 == VAR_0) {

            uint8_t VAR_7 = *(++VAR_3);
            FUNC_0(VAR_7);
        } else if (VAR_5 == VAR_2) {

            uint8_t VAR_8 = *(++VAR_3);
            FUNC_2(VAR_8);
        } else {
            FUNC_1(VAR_5);
        }
        ++VAR_3;

        {
            uint8_t VAR_9 = VAR_4;
            while (VAR_9--) FUNC_3(1);
        }
    }
}
