
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,char*,scalar_t__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    DWORD VAR_5 = 0;
    HKEY VAR_6;




    VAR_5 = FUNC_1(VAR_3, "Software\\Wine\\Test", &VAR_6);
    FUNC_2(VAR_5 == VAR_2, "expected ERROR_SUCCESS, got %d\n", VAR_5);
    VAR_5 = FUNC_0(VAR_6);
    FUNC_2(VAR_5 == VAR_2, "expected ERROR_SUCCESS, got %d\n", VAR_5);


    VAR_5 = FUNC_0(VAR_6);
    FUNC_2(VAR_5 == VAR_1 || VAR_5 == VAR_2,
       "expected ERROR_INVALID_HANDLE or ERROR_SUCCESS, got %d\n", VAR_5);


    VAR_5 = FUNC_0(((void*)0));
    FUNC_2(VAR_5 == VAR_1 || VAR_5 == VAR_0,
       "expected ERROR_INVALID_HANDLE or ERROR_BADKEY, got %d\n", VAR_5);





    if (VAR_4 == VAR_6)
    {
        FUNC_3("The main handle is most likely closed, so re-opening\n");
        FUNC_1( VAR_3, "Software\\Wine\\Test", &VAR_4 );
    }
}
