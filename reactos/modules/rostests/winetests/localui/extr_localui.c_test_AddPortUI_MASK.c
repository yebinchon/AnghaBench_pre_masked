
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPWSTR ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_3 (int,char*,scalar_t__,scalar_t__,...) ;
 scalar_t__ FUNC_4 (int *,int *,int *,int **) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_6(void)
{
    DWORD VAR_9;
    LPWSTR VAR_10;


    if (!&FUNC_4) {
        FUNC_5("AddPortUI not found\n");
        return;
    }

    FUNC_2(0xdeadbeef);
    VAR_9 = FUNC_4(((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_3( !VAR_9 &&
        ((FUNC_0() == VAR_4) || (FUNC_0() == VAR_2)),
        "got %d with %u (expected '0' with: ERROR_UNKNOWN_PORT or "
        "ERROR_INVALID_PRINTER_NAME)\n", VAR_9, FUNC_0());

    FUNC_2(0xdeadbeef);
    VAR_9 = FUNC_4(((void*)0), ((void*)0), VAR_6, ((void*)0));
    FUNC_3( !VAR_9 &&
        ((FUNC_0() == VAR_4) || (FUNC_0() == VAR_2)),
        "got %d with %u (expected '0' with: ERROR_UNKNOWN_PORT or "
        "ERROR_INVALID_PRINTER_NAME)\n", VAR_9, FUNC_0());

    FUNC_2(0xdeadbeef);
    VAR_9 = FUNC_4(((void*)0), ((void*)0), VAR_5, ((void*)0));
    FUNC_3( !VAR_9 &&
        ((FUNC_0() == VAR_4) || (FUNC_0() == VAR_2)),
        "got %d with %u (expected '0' with: ERROR_UNKNOWN_PORT or "
        "ERROR_INVALID_PRINTER_NAME)\n", VAR_9, FUNC_0());

    if (VAR_8) {
        FUNC_2(0xdeadbeef);
        VAR_10 = ((void*)0);
        VAR_9 = FUNC_4(((void*)0), ((void*)0), VAR_7, &VAR_10);
        FUNC_3( VAR_9 ||
            (FUNC_0() == VAR_1) ||
            (FUNC_0() == VAR_0) ||
            (FUNC_0() == VAR_3),
            "got %d with %u and %p (expected '!= 0' or '0' with: "
            "ERROR_CANCELLED, ERROR_ACCESS_DENIED or ERROR_NOT_SUPPORTED)\n",
            VAR_9, FUNC_0(), VAR_10);

        FUNC_1(VAR_10);
    }
}
