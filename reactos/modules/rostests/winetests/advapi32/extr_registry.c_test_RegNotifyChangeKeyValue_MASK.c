
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int * HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*,int *) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int *,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int VAR_6 ;
 int FUNC_8 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_9(void)
{
    HKEY VAR_7, VAR_8;
    HANDLE VAR_9;
    DWORD VAR_10;
    LONG VAR_11;

    VAR_9 = FUNC_1(((void*)0), VAR_1, VAR_3, ((void*)0));
    FUNC_8(VAR_9 != ((void*)0), "CreateEvent failed, error %u\n", FUNC_2());
    VAR_11 = FUNC_4(VAR_6, "TestKey", &VAR_7);
    FUNC_8(VAR_11 == VAR_0, "expected ERROR_SUCCESS, got %d\n", VAR_11);

    VAR_11 = FUNC_6(VAR_7, VAR_3, VAR_2, VAR_9, VAR_3);
    FUNC_8(VAR_11 == VAR_0, "expected ERROR_SUCCESS, got %d\n", VAR_11);
    VAR_10 = FUNC_7(VAR_9, 0);
    FUNC_8(VAR_10 == VAR_5, "expected WAIT_TIMEOUT, got %u\n", VAR_10);

    VAR_11 = FUNC_4(VAR_7, "SubKey", &VAR_8);
    FUNC_8(VAR_11 == VAR_0, "expected ERROR_SUCCESS, got %d\n", VAR_11);
    VAR_10 = FUNC_7(VAR_9, 0);
    FUNC_8(VAR_10 == VAR_4, "expected WAIT_OBJECT_0, got %u\n", VAR_10);

    FUNC_5(VAR_7, "");
    FUNC_3(VAR_7);
    FUNC_0(VAR_9);
}
