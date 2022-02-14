
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int * PSID_IDENTIFIER_AUTHORITY ;
typedef int ***** PSID ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int * FUNC_1 (int *****) ;
 scalar_t__ FUNC_2 (int *****) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (int,char*,...) ;
 int VAR_2 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    char VAR_3[VAR_1];
    PSID VAR_4 = *(PSID *)VAR_3;
    PSID_IDENTIFIER_AUTHORITY VAR_5;
    BOOL VAR_6;

    if (!VAR_2)
    {
        FUNC_6("GetSidIdentifierAuthority not available\n");
        return;
    }

    FUNC_4(VAR_3, 0xcc, sizeof(VAR_3));
    VAR_6 = FUNC_2(VAR_4);
    FUNC_5(!VAR_6, "expected FALSE, got %u\n", VAR_6);

    FUNC_3(0xdeadbeef);
    VAR_5 = FUNC_1(VAR_4);
    FUNC_5(VAR_5 != ((void*)0), "got NULL pointer as identifier authority\n");
    FUNC_5(FUNC_0() == VAR_0, "expected ERROR_SUCCESS, got %u\n", FUNC_0());

    FUNC_3(0xdeadbeef);
    VAR_5 = FUNC_1(((void*)0));
    FUNC_5(VAR_5 != ((void*)0), "got NULL pointer as identifier authority\n");
    FUNC_5(FUNC_0() == VAR_0, "expected ERROR_SUCCESS, got %u\n", FUNC_0());
}
