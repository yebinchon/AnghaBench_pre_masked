
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (int ,char*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    DWORD VAR_6;
    HKEY VAR_7;

    if (!FUNC_4(VAR_4, VAR_5) ||
        !FUNC_4(VAR_3, VAR_1))
    {
        FUNC_5("Failed to set SE_RESTORE_NAME privileges, skipping tests\n");
        return;
    }

    VAR_6 = FUNC_1(VAR_2, "Test", "saved_key");
    FUNC_3(VAR_6 == VAR_0, "expected ERROR_SUCCESS, got %d\n", VAR_6);

    FUNC_4(VAR_4, VAR_1);

    VAR_6 = FUNC_2(VAR_2, "Test", &VAR_7);
    FUNC_3(VAR_6 == VAR_0, "expected ERROR_SUCCESS, got %d\n", VAR_6);

    FUNC_0(VAR_7);
}
