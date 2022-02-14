
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPWSTR ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_2 (scalar_t__,char*,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__*,scalar_t__*) ;
 int FUNC_5 (char*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_6(void)
{
    HANDLE VAR_4;
    HANDLE VAR_5;
    LPWSTR VAR_6 = ((void*)0);
    DWORD VAR_7;
    DWORD VAR_8;


    if (!&FUNC_4 || !&FUNC_3) return;

    if (VAR_1[0]) {
        VAR_6 = VAR_1;

        VAR_4 = (HANDLE) 0xdeadbeef;
        VAR_7 = FUNC_4(VAR_6, &VAR_4);
        VAR_5 = (HANDLE) 0xdeadbeef;
        VAR_8 = FUNC_4(VAR_6, &VAR_5);

        if (VAR_8 && (VAR_5 != VAR_4)) {
            FUNC_1(0xdeadbeef);
            VAR_8 = FUNC_3(VAR_5);
            FUNC_2(VAR_8, "got %u with %u (expected '!= 0')\n", VAR_8, FUNC_0());
        }

        if (VAR_7) {
            FUNC_1(0xdeadbeef);
            VAR_7 = FUNC_3(VAR_4);
            FUNC_2(VAR_7, "got %u with %u (expected '!= 0')\n", VAR_7, FUNC_0());
        }
    }


    if (VAR_3[0]) {
        VAR_6 = VAR_3;

        VAR_4 = (HANDLE) 0xdeadbeef;
        VAR_7 = FUNC_4(VAR_6, &VAR_4);
        VAR_5 = (HANDLE) 0xdeadbeef;
        VAR_8 = FUNC_4(VAR_6, &VAR_5);

        if (VAR_8 && (VAR_5 != VAR_4)) {
            FUNC_1(0xdeadbeef);
            VAR_8 = FUNC_3(VAR_5);
            FUNC_2(VAR_8, "got %u with %u (expected '!= 0')\n", VAR_8, FUNC_0());
        }

        if (VAR_7) {
            FUNC_1(0xdeadbeef);
            VAR_7 = FUNC_3(VAR_4);
            FUNC_2(VAR_7, "got %u with %u (expected '!= 0')\n", VAR_7, FUNC_0());
        }
    }


    if (VAR_2[0]) {
        VAR_6 = VAR_2;

        VAR_4 = (HANDLE) 0xdeadbeef;
        VAR_7 = FUNC_4(VAR_6, &VAR_4);
        VAR_5 = (HANDLE) 0xdeadbeef;
        VAR_8 = FUNC_4(VAR_6, &VAR_5);

        if (VAR_8 && (VAR_5 != VAR_4)) {
            FUNC_1(0xdeadbeef);
            VAR_8 = FUNC_3(VAR_5);
            FUNC_2(VAR_8, "got %u with %u (expected '!= 0')\n", VAR_8, FUNC_0());
        }

        if (VAR_7) {
            FUNC_1(0xdeadbeef);
            VAR_7 = FUNC_3(VAR_4);
            FUNC_2(VAR_7, "got %u with %u (expected '!= 0')\n", VAR_7, FUNC_0());
        }

    }

    if (0) {


        FUNC_1(0xdeadbeef);
        VAR_7 = FUNC_3(((void*)0));
        FUNC_5("got %u with %u\n", VAR_7, FUNC_0());

        FUNC_1(0xdeadbeef);
        VAR_7 = FUNC_3( (HANDLE) 0xdeadbeef);
        FUNC_5("got %u with %u\n", VAR_7, FUNC_0());

        FUNC_1(0xdeadbeef);
        VAR_7 = FUNC_3(VAR_0);
        FUNC_5("got %u with %u\n", VAR_7, FUNC_0());
    }

}
