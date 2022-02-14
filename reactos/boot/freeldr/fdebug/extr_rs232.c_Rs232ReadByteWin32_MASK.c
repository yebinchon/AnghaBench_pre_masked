
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *,int,int*,int *) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;

BOOL FUNC_4(BYTE* VAR_3)
{
    DWORD VAR_4 = 0;
    DWORD VAR_5;


    if (!FUNC_1(VAR_2, VAR_3, 1, &VAR_4, ((void*)0)))
    {
        VAR_5 = FUNC_0();

        FUNC_3(FUNC_2("ReadFile() failed. GetLastError() = %lu.\n"), VAR_5);

        return VAR_0;
    }



    if (VAR_4 != 1)
    {
        return VAR_0;
    }

    return VAR_1;
}
