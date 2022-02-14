
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int ) ;
 int VAR_5 ;

uint8_t FUNC_6(void) {
    VAR_5 = 0x20;







    if (VAR_4 == 0) {
        FUNC_2();
        VAR_4 = 1;
        FUNC_0(1000);
    }







    VAR_5 = FUNC_3(VAR_2, VAR_0); if (VAR_5) goto out;
    VAR_5 = FUNC_5(VAR_3, VAR_0); if (VAR_5) goto out;
    VAR_5 = FUNC_5(0b00000000, VAR_0); if (VAR_5) goto out;
    VAR_5 = FUNC_5(0b00111111, VAR_0); if (VAR_5) goto out;
    FUNC_4();





    VAR_5 = FUNC_3(VAR_2, VAR_0); if (VAR_5) goto out;
    VAR_5 = FUNC_5(VAR_1, VAR_0); if (VAR_5) goto out;
    VAR_5 = FUNC_5(0b00000000, VAR_0); if (VAR_5) goto out;
    VAR_5 = FUNC_5(0b00111111, VAR_0); if (VAR_5) goto out;

out:
    FUNC_4();







    return VAR_5;
}
