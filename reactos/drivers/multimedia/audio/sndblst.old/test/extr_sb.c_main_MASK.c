
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (char*,int,int,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;

int FUNC_2()
{




    HANDLE VAR_7;
    DWORD VAR_8;

    FUNC_1("SB Test\n");

    VAR_7 = FUNC_0("\\\\.\\SndBlst", VAR_3 | VAR_4,
                        VAR_1 | VAR_2,
                        ((void*)0),
                        VAR_6,
                        VAR_0,
                        ((void*)0));

    if (VAR_7 == VAR_5)
    {
        FUNC_1("Device is busy or could not be found.\n");
        return -1;
    }
}
