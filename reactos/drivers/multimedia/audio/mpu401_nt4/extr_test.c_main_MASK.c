
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int Test ;
typedef int Notes ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (char*,int,int,int *,int ,int ,int *) ;
 int FUNC_1 (scalar_t__,int ,int**,int,int *,int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*) ;

int FUNC_3()
{



    DWORD VAR_8;
    BYTE VAR_9[3];
    BYTE VAR_10[] = {50, 52, 54, 55, 57, 59, 61};
    HANDLE VAR_11;
    UINT VAR_12;
    UINT VAR_13;

    FUNC_2("Test program for MPU401 driver\n");

    VAR_11 = FUNC_0("\\\\.\\MPU401_Out_0", VAR_3 | VAR_4,
                        VAR_1 | VAR_2,
                        ((void*)0),
                        VAR_7,
                        VAR_0,
                        ((void*)0));

    if (VAR_11 == VAR_5)
    {
        FUNC_2("Device is busy or could not be found.\n");
        return -1;
    }

    FUNC_2("Device is open, let's play some music...\n");

        VAR_9[0] = 0x90;
        VAR_9[2] = 0x7f;

    for (VAR_12 = 0; VAR_12 < sizeof(VAR_10); VAR_12 ++)
    {
        VAR_9[1] = VAR_10[VAR_12];

    FUNC_1(
        VAR_11,
        VAR_6,
        &VAR_9,
        sizeof(VAR_9),
        ((void*)0),
        0,
        &VAR_8,
        ((void*)0)
        );

        for (VAR_13 = 0; VAR_13 < 100000; VAR_13 ++);
    }
}
