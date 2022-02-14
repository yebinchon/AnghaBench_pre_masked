
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,int *) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,char*,int *) ;
 int VAR_5 ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    DWORD VAR_6;
    HKEY VAR_7;

    VAR_6 = FUNC_2(VAR_5, ((void*)0));





    if (VAR_6 == VAR_4)
    {
        FUNC_6("We are probably running on NT4 or W2K as the main key is deleted,"
            " re-creating the main key\n");
        FUNC_5();
    }
    else
        FUNC_4(VAR_6 == VAR_3 ||
           VAR_6 == VAR_0 ||
           VAR_6 == VAR_1,
           "ret=%d\n", VAR_6);

    VAR_6 = FUNC_1(VAR_5, "deleteme", &VAR_7);
    FUNC_4(VAR_6 == VAR_4, "Could not create key, got %d\n", VAR_6);
    VAR_6 = FUNC_2(VAR_7, "");
    FUNC_4(VAR_6 == VAR_4, "RegDeleteKeyA failed, got %d\n", VAR_6);
    FUNC_0(VAR_7);
    VAR_6 = FUNC_3(VAR_5, "deleteme", &VAR_7);
    FUNC_4(VAR_6 == VAR_2, "Key was not deleted, got %d\n", VAR_6);
    FUNC_0(VAR_7);
}
