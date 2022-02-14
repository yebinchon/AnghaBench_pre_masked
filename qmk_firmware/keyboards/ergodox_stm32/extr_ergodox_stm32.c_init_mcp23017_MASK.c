
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int*,int,int) ;
 int VAR_5 ;

uint8_t FUNC_2(void) {
    if (!VAR_4) {
        FUNC_0();
        VAR_4 = 1;
    }

    uint8_t VAR_6[2];
    VAR_6[0] = 0x0;
    VAR_6[1] = 0b00111111;
    VAR_5 = FUNC_1(VAR_0, VAR_3, VAR_6, 2, 50000);
    if (VAR_5) goto out;
    VAR_6[0] = 0xFFU;
    VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_6, 1, 5000);
    if (VAR_5) goto out;
    VAR_5 = FUNC_1(VAR_0, VAR_2, VAR_6+1, 1, 2);
    if (VAR_5) goto out;

 out:
    return VAR_5;

}
