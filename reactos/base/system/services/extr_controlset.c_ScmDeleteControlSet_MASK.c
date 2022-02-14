
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int * HKEY ;
typedef char* DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,int *) ;
 char* FUNC_3 (int ,char*,int ,int,int **) ;
 char* FUNC_4 (int *,int *) ;
 int FUNC_5 (char*,char*,char*) ;

__attribute__((used)) static
DWORD
FUNC_6(
    DWORD VAR_6)
{
    WCHAR VAR_7[32];
    HKEY VAR_8 = ((void*)0);
    DWORD VAR_9;

    FUNC_0("ScmDeleteControSet(%lu)\n", VAR_6);


    FUNC_5(VAR_7, L"SYSTEM\\ControlSet%03lu", VAR_6);
    FUNC_0("Control set: %S\n", VAR_7);


    VAR_9 = FUNC_3(VAR_2,
                            VAR_7,
                            0,
                            VAR_0 | VAR_3 | VAR_4 | VAR_5,
                            &VAR_8);
    if (VAR_9 != VAR_1)
        return VAR_9;






    VAR_9 = FUNC_4(VAR_8,
                            ((void*)0));



    FUNC_1(VAR_8);

    return VAR_9;
}
