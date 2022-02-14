
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_15(void)
{
    HANDLE VAR_5, VAR_6;
    DWORD VAR_7, VAR_8;

    VAR_7 = FUNC_4(FUNC_2(), VAR_1 | VAR_2, &VAR_6);
    FUNC_5(VAR_7, "OpenProcessToken error %d\n", FUNC_3());

    VAR_7 = FUNC_14(VAR_6, &VAR_8);
    FUNC_5(VAR_8 == VAR_4, "expected TokenPrimary, got %d\n", VAR_8);
    FUNC_5(!VAR_7, "access token should not be an impersonation token\n");

    VAR_7 = FUNC_1(VAR_6, VAR_0, &VAR_5);
    FUNC_5(VAR_7, "DuplicateToken error %d\n", FUNC_3());

    VAR_7 = FUNC_14(VAR_5, &VAR_8);
    FUNC_5(VAR_7, "access token should be a valid impersonation token\n");
    FUNC_5(VAR_8 == VAR_3, "expected TokenImpersonation, got %d\n", VAR_8);

    FUNC_9(VAR_5);
    FUNC_6(VAR_5);
    FUNC_10(VAR_5);
    FUNC_12(VAR_5);
    FUNC_7(VAR_5);
    FUNC_8();
    FUNC_13();
    FUNC_11();


    FUNC_0(VAR_6);
    FUNC_0(VAR_5);
}
