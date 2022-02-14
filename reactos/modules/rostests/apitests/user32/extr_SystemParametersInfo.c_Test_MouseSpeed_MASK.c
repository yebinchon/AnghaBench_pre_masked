
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int*,int) ;
 int* FUNC_1 (int) ;
 int FUNC_2 (int,char*,...) ;

__attribute__((used)) static void FUNC_3()
{
    ULONG VAR_4, VAR_5;
    BOOL VAR_6;

    VAR_6 = FUNC_0(VAR_2, 0, &VAR_4, 0);
    FUNC_2(VAR_6, "SystemParametersInfo failed\n");
    FUNC_2(VAR_4 >= 1 && VAR_4 <=20, "Wrong mouse speed (%d)\n", (int)VAR_4);

    VAR_5 = 1;
    VAR_6 = FUNC_0(VAR_3, 0, FUNC_1(VAR_5), VAR_0 | VAR_1);
    FUNC_2(VAR_6, "SystemParametersInfo failed\n");
    VAR_6 = FUNC_0(VAR_2, 0, &VAR_5, 0);
    FUNC_2(VAR_6, "SystemParametersInfo failed\n");
    FUNC_2(VAR_5 == 1, "SPI_GETMOUSESPEED did not get value set by SPI_SETMOUSESPEED (%d instead of 1)\n", (int)VAR_5);

    VAR_5 = 20;
    VAR_6 = FUNC_0(VAR_3, 0, FUNC_1(VAR_5), VAR_0 | VAR_1);
    FUNC_2(VAR_6, "SystemParametersInfo failed\n");
    VAR_6 = FUNC_0(VAR_2, 0, &VAR_5, 0);
    FUNC_2(VAR_6, "SystemParametersInfo failed\n");
    FUNC_2(VAR_5 == 20, "SPI_GETMOUSESPEED did not get value set by SPI_SETMOUSESPEED (%d instead of 20)\n", (int)VAR_5);

    VAR_5 = 21;
    VAR_6 = FUNC_0(VAR_3, 0, FUNC_1(VAR_5), VAR_0 | VAR_1);
    FUNC_2(!VAR_6, "expected SystemParametersInfo to fail\n");
    VAR_6 = FUNC_0(VAR_2, 0, &VAR_5, 0);
    FUNC_2(VAR_6, "SystemParametersInfo failed\n");
    FUNC_2(VAR_5 == 20, "SPI_GETMOUSESPEED got unexpected value (%d instead of 20)\n", (int)VAR_5);

    VAR_5 = 0;
    VAR_6 = FUNC_0(VAR_3, 0, FUNC_1(VAR_5), VAR_0 | VAR_1);
    FUNC_2(!VAR_6, "expected SystemParametersInfo to fail\n");
    VAR_6 = FUNC_0(VAR_2, 0, &VAR_5, 0);
    FUNC_2(VAR_6, "SystemParametersInfo failed\n");
    FUNC_2(VAR_5 == 20, "SPI_GETMOUSESPEED got unexpected value (%d instead of 20)\n", (int)VAR_5);

    VAR_6 = FUNC_0(VAR_3, 0, FUNC_1(VAR_4), VAR_0 | VAR_1);
    FUNC_2(VAR_6, "SystemParametersInfo failed\n");
}
