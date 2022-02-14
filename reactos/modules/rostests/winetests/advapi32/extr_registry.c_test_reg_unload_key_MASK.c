
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    DWORD VAR_6;

    if (!FUNC_3(VAR_4, VAR_5) ||
        !FUNC_3(VAR_3, VAR_1))
    {
        FUNC_4("Failed to set SE_RESTORE_NAME privileges, skipping tests\n");
        return;
    }

    VAR_6 = FUNC_1(VAR_2, "Test");
    FUNC_2(VAR_6 == VAR_0, "expected ERROR_SUCCESS, got %d\n", VAR_6);

    FUNC_3(VAR_4, VAR_1);

    FUNC_0("saved_key");
    FUNC_0("saved_key.LOG");
}
