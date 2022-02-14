
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int VAR_4 ;

uint8_t FUNC_5(void) {
    VAR_4 = 0x20;



    if (VAR_3 == 0) {
        FUNC_1();
        VAR_3 = 1;
        FUNC_0(1000);
    }



    VAR_4 = FUNC_2(VAR_1); if (VAR_4) goto out;
    VAR_4 = FUNC_4(VAR_2); if (VAR_4) goto out;
    VAR_4 = FUNC_4(0b11111111); if (VAR_4) goto out;

    VAR_4 = FUNC_4(0b00000000); if (VAR_4) goto out;
    FUNC_3();

    VAR_4 = FUNC_2(VAR_1); if (VAR_4) goto out;
    VAR_4 = FUNC_4(VAR_0); if (VAR_4) goto out;
    VAR_4 = FUNC_4(0b11111111); if (VAR_4) goto out;

    VAR_4 = FUNC_4(0b00000000); if (VAR_4) goto out;

out:
    FUNC_3();

    return VAR_4;
}
