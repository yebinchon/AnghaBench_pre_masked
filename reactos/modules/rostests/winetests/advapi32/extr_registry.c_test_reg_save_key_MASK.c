
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    DWORD VAR_6;

    if (!FUNC_2(VAR_2, VAR_4) ||
        !FUNC_2(VAR_3, VAR_1))
    {
        FUNC_3("Failed to set SE_BACKUP_NAME privileges, skipping tests\n");
        return;
    }

    VAR_6 = FUNC_0(VAR_5, "saved_key", ((void*)0));
    FUNC_1(VAR_6 == VAR_0, "expected ERROR_SUCCESS, got %d\n", VAR_6);

    FUNC_2(VAR_2, VAR_1);
}
