
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int *,int,int ,int *,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_2 ;

int FUNC_4(DWORD VAR_3)
{
    TCHAR * VAR_4;


    if (FUNC_0(VAR_0 | VAR_1,
                       ((void*)0), VAR_3, 0, (TCHAR *)&VAR_4, 0, ((void*)0)) != 0)
    {

        FUNC_3(VAR_2, FUNC_2("Error: %s\n"), *VAR_4);
        FUNC_1(VAR_4);
    }
    else
    {

        FUNC_3(VAR_2, FUNC_2("Error: %d\n"), VAR_3);
    }

    return VAR_3;
}
