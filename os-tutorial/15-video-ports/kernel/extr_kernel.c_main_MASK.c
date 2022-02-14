
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

int FUNC_2() {


    FUNC_1(0x3d4, 14);

    int VAR_0 = FUNC_0(0x3d5);
    VAR_0 = VAR_0 << 8;

    FUNC_1(0x3d4, 15);
    VAR_0 += FUNC_0(0x3d5);



    int VAR_1 = VAR_0 * 2;
    char *VAR_2 = 0xb8000;
    VAR_2[VAR_1] = 'X';
    VAR_2[VAR_1+1] = 0x0f;
}
