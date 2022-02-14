
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pCC ;
typedef int WCHAR ;
struct TYPE_5__ {int dwSize; } ;
typedef int DWORD ;
typedef TYPE_1__ COMMCONFIG ;
typedef int CHAR ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int *,int,int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int * VAR_6 ;
 char* VAR_7 ;
 int FUNC_5 (int,char*,int,int ,...) ;
 int FUNC_6 (int *,int *,TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_1__*,int*) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (char*,int,int ,int *) ;
 int FUNC_10 (char*) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_11(void)
{
    COMMCONFIG VAR_9[3];
    CHAR VAR_10[16];
    WCHAR VAR_11[16];
    DWORD VAR_12;
    DWORD VAR_13;
    DWORD VAR_14;



    for (VAR_12 = 1; VAR_12 < 5 ; VAR_12++) {
        FUNC_8(VAR_10, VAR_7, VAR_12);
        FUNC_2(VAR_0, 0, VAR_10, -1, VAR_11, FUNC_0(VAR_11));
        VAR_14 = sizeof(VAR_9);
        FUNC_4(VAR_9, sizeof(VAR_9));
        FUNC_3(0xdeadbeef);
        VAR_13 = FUNC_7(VAR_11, VAR_9, &VAR_14);
        if (VAR_13 == VAR_2) {
            FUNC_10("*W not implemented\n");
            return;
        }

        if (VAR_13 == VAR_5) {

            if (VAR_8) {
                FUNC_3(0xdeadbeef);
                VAR_13 = FUNC_6(VAR_11, ((void*)0), VAR_9);

                FUNC_9("returned %u with %u for '%s'\n", VAR_13, FUNC_1(), VAR_10);
            }

            FUNC_4(VAR_9, sizeof(VAR_9));
            FUNC_3(0xdeadbeef);
            VAR_13 = FUNC_6(VAR_11, ((void*)0), VAR_9);
            FUNC_5( VAR_13 == VAR_3,
                "returned %u with %u for '%s' (expected ERROR_INSUFFICIENT_BUFFER)\n",
                VAR_13, FUNC_1(), VAR_10);

            FUNC_3(0xdeadbeef);
            VAR_13 = FUNC_6(VAR_11, ((void*)0), ((void*)0));
            FUNC_5( VAR_13 == VAR_4,
                "returned %u with %u for '%s' (expected ERROR_INVALID_PARAMETER)\n",
                VAR_13, FUNC_1(), VAR_10);
        }
    }


    FUNC_4(VAR_9, sizeof(VAR_9));
    FUNC_3(0xdeadbeef);
    VAR_13 = FUNC_6(VAR_6, ((void*)0), VAR_9);
    FUNC_5( VAR_13 == VAR_3,
        "returned %u with %u (expected ERROR_INSUFFICIENT_BUFFER)\n",
        VAR_13, FUNC_1());


    FUNC_4(VAR_9, sizeof(VAR_9));
    VAR_9[0].dwSize = sizeof(COMMCONFIG);
    FUNC_3(0xdeadbeef);
    VAR_13 = FUNC_6(VAR_6, ((void*)0), VAR_9);
    FUNC_5( VAR_13 == VAR_1, "returned %u with %u (expected ERROR_BADKEY)\n",
        VAR_13, FUNC_1());


    FUNC_4(VAR_9, sizeof(VAR_9));
    FUNC_3(0xdeadbeef);
    VAR_13 = FUNC_6(((void*)0), ((void*)0), VAR_9);
    FUNC_5( VAR_13 == VAR_4,
        "returned %u with %u (expected ERROR_INVALID_PARAMETER)\n",
        VAR_13, FUNC_1());
}
