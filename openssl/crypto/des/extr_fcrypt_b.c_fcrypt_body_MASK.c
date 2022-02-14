
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DES_key_schedule ;
typedef int DES_LONG ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int,int,int) ;
 int FUNC_2 (int,int) ;

void FUNC_3(DES_LONG *VAR_0, DES_key_schedule *VAR_1, DES_LONG VAR_2,
                 DES_LONG VAR_3)
{
    register DES_LONG VAR_4, VAR_5, VAR_6, VAR_7;
    register DES_LONG *VAR_8;
    register int VAR_9;
    register DES_LONG VAR_10, VAR_11;

    VAR_4 = 0;
    VAR_5 = 0;

    VAR_8 = (DES_LONG *)VAR_1;
    VAR_10 = VAR_2;
    VAR_11 = VAR_3;

    for (VAR_9 = 0; VAR_9 < 25; VAR_9++) {
        FUNC_0(VAR_4, VAR_5, 0);
        FUNC_0(VAR_5, VAR_4, 2);
        FUNC_0(VAR_4, VAR_5, 4);
        FUNC_0(VAR_5, VAR_4, 6);
        FUNC_0(VAR_4, VAR_5, 8);
        FUNC_0(VAR_5, VAR_4, 10);
        FUNC_0(VAR_4, VAR_5, 12);
        FUNC_0(VAR_5, VAR_4, 14);
        FUNC_0(VAR_4, VAR_5, 16);
        FUNC_0(VAR_5, VAR_4, 18);
        FUNC_0(VAR_4, VAR_5, 20);
        FUNC_0(VAR_5, VAR_4, 22);
        FUNC_0(VAR_4, VAR_5, 24);
        FUNC_0(VAR_5, VAR_4, 26);
        FUNC_0(VAR_4, VAR_5, 28);
        FUNC_0(VAR_5, VAR_4, 30);
        VAR_6 = VAR_4;
        VAR_4 = VAR_5;
        VAR_5 = VAR_6;
    }
    VAR_4 = FUNC_2(VAR_4, 3) & 0xffffffffL;
    VAR_5 = FUNC_2(VAR_5, 3) & 0xffffffffL;

    FUNC_1(VAR_4, VAR_5, VAR_6, 1, 0x55555555L);
    FUNC_1(VAR_5, VAR_4, VAR_6, 8, 0x00ff00ffL);
    FUNC_1(VAR_4, VAR_5, VAR_6, 2, 0x33333333L);
    FUNC_1(VAR_5, VAR_4, VAR_6, 16, 0x0000ffffL);
    FUNC_1(VAR_4, VAR_5, VAR_6, 4, 0x0f0f0f0fL);

    VAR_0[0] = VAR_5;
    VAR_0[1] = VAR_4;
}
