
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_2 ;

void FUNC_10(void)
{
    uint8_t VAR_3 = FUNC_0(VAR_2);

    FUNC_1();
    FUNC_3();
    FUNC_5();
    FUNC_7();
    switch (VAR_3) {
        case 130:
            FUNC_4();
        break;
        case 128:
            FUNC_6();
        break;
        case 129:
            FUNC_8();
        break;
        default:
            if(FUNC_9() & (1<<VAR_1)) {
                FUNC_2(VAR_0);
                FUNC_4();
            }
            else {
                FUNC_1();
            }
        break;
    }

}
