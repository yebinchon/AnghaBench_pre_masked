
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int *,int*,int *,int*) ;
 int VAR_4 ;
 int FUNC_1 (int,char*,int,...) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void)
{
    DWORD VAR_6, VAR_7, VAR_8;
    BYTE VAR_9[10];

    VAR_7 = sizeof(VAR_9);
    VAR_6 = FUNC_0(VAR_4, "TP1_SZ", ((void*)0), &VAR_8, ((void*)0), &VAR_7);
    FUNC_1(VAR_6 == VAR_1, "expected ERROR_SUCCESS, got %d\n", VAR_6);
    FUNC_1(VAR_7 == FUNC_2(VAR_5) + 1, "(%d,%d)\n", (DWORD)FUNC_2(VAR_5) + 1, VAR_7);
    FUNC_1(VAR_8 == VAR_3, "type %d is not REG_SZ\n", VAR_8);

    VAR_8 = 0xdeadbeef;
    VAR_7 = 0xdeadbeef;
    VAR_6 = FUNC_0(VAR_2, "Nonexistent Value", ((void*)0), &VAR_8, ((void*)0), &VAR_7);
    FUNC_1(VAR_6 == VAR_0, "expected ERROR_FILE_NOT_FOUND, got %d\n", VAR_6);
    FUNC_1(VAR_7 == 0, "size should have been set to 0 instead of %d\n", VAR_7);

    VAR_7 = sizeof(VAR_9);
    VAR_6 = FUNC_0(VAR_2, "Nonexistent Value", ((void*)0), &VAR_8, VAR_9, &VAR_7);
    FUNC_1(VAR_6 == VAR_0, "expected ERROR_FILE_NOT_FOUND, got %d\n", VAR_6);
    FUNC_1(VAR_7 == sizeof(VAR_9), "size shouldn't have been changed to %d\n", VAR_7);

    VAR_7 = 4;
    VAR_6 = FUNC_0(VAR_4, "BIN32", ((void*)0), &VAR_7, VAR_9, &VAR_7);
    FUNC_1(VAR_6 == VAR_1, "expected ERROR_SUCCESS, got %d\n", VAR_6);
}
