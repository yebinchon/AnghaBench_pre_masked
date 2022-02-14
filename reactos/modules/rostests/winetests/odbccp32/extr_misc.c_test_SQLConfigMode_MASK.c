
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef scalar_t__ RETCODE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int,scalar_t__*,int *,int ,int *) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    BOOL VAR_4;
    DWORD VAR_5;
    RETCODE VAR_6;
    UWORD VAR_7;
    int VAR_8;

    FUNC_3(FUNC_0(((void*)0)), "SQLGetConfigMode(NULL) should succeed\n");

    VAR_4 = FUNC_0(&VAR_7);
    FUNC_3(VAR_4 && VAR_7 == VAR_0, "Failed to get the initial SQLGetConfigMode or it was not both\n");


    VAR_4 = FUNC_2(VAR_2+1);
    VAR_6 = FUNC_1(1, &VAR_5, ((void*)0), 0, ((void*)0));
    FUNC_3(!VAR_4 && VAR_6 == VAR_3 && VAR_5 == VAR_1, "SQLSetConfigMode with invalid argument did not fail correctly\n");

    for (VAR_8 = VAR_2; VAR_8 >= VAR_0; --VAR_8)
    {
        FUNC_3(FUNC_2((UWORD)VAR_8), "SQLSetConfigMode Failed to set config mode\n");
        VAR_4 = FUNC_0(&VAR_7);
        FUNC_3(VAR_4 && VAR_7 == VAR_8, "Failed to confirm SQLSetConfigMode.\n");
    }

}
