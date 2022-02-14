
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPWSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_2 (int,char*,int,scalar_t__,scalar_t__,...) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__*,scalar_t__*) ;
 int FUNC_5 (char*,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_6(void)
{
    HANDLE VAR_6;
    HANDLE VAR_7;
    LPWSTR VAR_8 = ((void*)0);
    DWORD VAR_9;
    DWORD VAR_10;

    if (!&FUNC_4 || !&FUNC_3) return;

    if (VAR_3[0]) {
        VAR_8 = VAR_3;

        VAR_6 = (HANDLE) 0xdeadbeef;
        FUNC_1(0xdeadbeef);
        VAR_9 = FUNC_4(VAR_8, &VAR_6);
        FUNC_2( VAR_9, "got %u with %u and %p (expected '!= 0')\n",
            VAR_9, FUNC_0(), VAR_6);


        VAR_7 = (HANDLE) 0xdeadbeef;
        FUNC_1(0xdeadbeef);
        VAR_10 = FUNC_4(VAR_8, &VAR_7);
        FUNC_2( VAR_10, "got %u with %u and %p (expected '!= 0')\n",
            VAR_10, FUNC_0(), VAR_7);

        if (VAR_9) FUNC_3(VAR_6);
        if (VAR_10 && (VAR_7 != VAR_6)) FUNC_3(VAR_7);
    }

    if (VAR_5[0]) {
        VAR_8 = VAR_5;

        VAR_6 = (HANDLE) 0xdeadbeef;
        FUNC_1(0xdeadbeef);
        VAR_9 = FUNC_4(VAR_8, &VAR_6);
        FUNC_2( VAR_9 || (FUNC_0() == VAR_0),
            "got %u with %u and %p (expected '!= 0' or '0' with ERROR_ACCESS_DENIED)\n",
            VAR_9, FUNC_0(), VAR_6);


        VAR_7 = (HANDLE) 0xdeadbeef;
        FUNC_1(0xdeadbeef);
        VAR_10 = FUNC_4(VAR_8, &VAR_7);
        FUNC_2( VAR_10 || (FUNC_0() == VAR_0),
            "got %u with %u and %p (expected '!= 0' or '0' with ERROR_ACCESS_DENIED)\n",
            VAR_10, FUNC_0(), VAR_7);

        if (VAR_9) FUNC_3(VAR_6);
        if (VAR_10 && (VAR_7 != VAR_6)) FUNC_3(VAR_7);
    }

    if (VAR_4[0]) {
        VAR_8 = VAR_4;

        VAR_6 = (HANDLE) 0xdeadbeef;
        FUNC_1(0xdeadbeef);
        VAR_9 = FUNC_4(VAR_8, &VAR_6);
        FUNC_2( VAR_9, "got %u with %u and %p (expected '!= 0')\n",
            VAR_9, FUNC_0(), VAR_6);


        VAR_7 = (HANDLE) 0xdeadbeef;
        FUNC_1(0xdeadbeef);
        VAR_10 = FUNC_4(VAR_8, &VAR_7);
        FUNC_2( VAR_10 && (VAR_7 != VAR_6),
            "got %u with %u and %p (expected '!= 0' and '!= %p')\n",
            VAR_10, FUNC_0(), VAR_7, VAR_6);

        if (VAR_9) FUNC_3(VAR_6);
        if (VAR_10 && (VAR_7 != VAR_6)) FUNC_3(VAR_7);
    }

    if (0) {

        if (VAR_8) {
            VAR_6 = (HANDLE) 0xdeadbeef;
            FUNC_1(0xdeadbeef);
            VAR_9 = FUNC_4(VAR_8, ((void*)0));
            FUNC_5("got %u with %u and %p\n", VAR_9, FUNC_0(), VAR_6);
        }
    }

    VAR_6 = (HANDLE) 0xdeadbeef;
    FUNC_1(0xdeadbeef);
    VAR_9 = FUNC_4(VAR_1, &VAR_6);
    FUNC_2 (!VAR_9 && (VAR_6 == (HANDLE) 0xdeadbeef),
        "got %u with 0x%x and %p (expected '0' and 0xdeadbeef)\n", VAR_9, FUNC_0(), VAR_6);
    if (VAR_9) FUNC_3(VAR_6);

    VAR_6 = (HANDLE) 0xdeadbeef;
    FUNC_1(0xdeadbeef);
    VAR_9 = FUNC_4(VAR_2, &VAR_6);
    FUNC_2 (!VAR_9 && (VAR_6 == (HANDLE) 0xdeadbeef),
        "got %u with 0x%x and %p (expected '0' and 0xdeadbeef)\n", VAR_9, FUNC_0(), VAR_6);
    if (VAR_9) FUNC_3(VAR_6);



    if (0) {
        VAR_6 = (HANDLE) 0xdeadbeef;
        FUNC_1(0xdeadbeef);
        VAR_9 = FUNC_4(((void*)0), &VAR_6);
        FUNC_5("got %u with %u and %p\n", VAR_9, FUNC_0(), VAR_6);
    }

}
