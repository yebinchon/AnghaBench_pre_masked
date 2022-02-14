
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pCC ;
struct TYPE_5__ {int dwSize; } ;
typedef int DWORD ;
typedef TYPE_1__ COMMCONFIG ;
typedef int CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int * VAR_5 ;
 char* VAR_6 ;
 int FUNC_3 (int,char*,int,int ,...) ;
 int FUNC_4 (int *,int *,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*,int*) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (char*,int,int ,int *) ;
 int FUNC_8 (char*) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_9(void)
{
    COMMCONFIG VAR_8[3];
    CHAR VAR_9[16];
    DWORD VAR_10;
    DWORD VAR_11;
    DWORD VAR_12;



    for (VAR_10 = 1; VAR_10 < 5 ; VAR_10++) {
        FUNC_6(VAR_9, VAR_6, VAR_10);
        VAR_12 = sizeof(VAR_8);
        FUNC_2(VAR_8, sizeof(VAR_8));
        FUNC_1(0xdeadbeef);
        VAR_11 = FUNC_5(VAR_9, VAR_8, &VAR_12);
        if (VAR_11 == VAR_1) {

            FUNC_8("*A not implemented\n");
            return;
        }

        if (VAR_11 == VAR_4) {

            if (VAR_7) {
                FUNC_1(0xdeadbeef);
                VAR_11 = FUNC_4(VAR_9, ((void*)0), VAR_8);

                FUNC_7("returned %u with %u for '%s'\n", VAR_11, FUNC_0(), VAR_9);
            }

            FUNC_2(VAR_8, sizeof(VAR_8));
            FUNC_1(0xdeadbeef);
            VAR_11 = FUNC_4(VAR_9, ((void*)0), VAR_8);
            FUNC_3( VAR_11 == VAR_2,
                "returned %u with %u for '%s' (expected ERROR_INSUFFICIENT_BUFFER)\n",
                VAR_11, FUNC_0(), VAR_9);


            FUNC_1(0xdeadbeef);
            VAR_11 = FUNC_4(VAR_9, ((void*)0), ((void*)0));
            FUNC_3( VAR_11 == VAR_3,
                "returned %u with %u for '%s' (expected ERROR_INVALID_PARAMETER)\n",
                VAR_11, FUNC_0(), VAR_9);
        }
    }


    FUNC_2(VAR_8, sizeof(VAR_8));
    FUNC_1(0xdeadbeef);
    VAR_11 = FUNC_4(VAR_5, ((void*)0), VAR_8);
    FUNC_3( VAR_11 == VAR_2,
        "returned %u with %u (expected ERROR_INSUFFICIENT_BUFFER)\n",
        VAR_11, FUNC_0());


    FUNC_2(VAR_8, sizeof(VAR_8));
    VAR_8[0].dwSize = sizeof(COMMCONFIG);
    FUNC_1(0xdeadbeef);
    VAR_11 = FUNC_4(VAR_5, ((void*)0), VAR_8);
    FUNC_3( VAR_11 == VAR_0, "returned %u with %u (expected ERROR_BADKEY)\n",
        VAR_11, FUNC_0());


    FUNC_2(VAR_8, sizeof(VAR_8));
    FUNC_1(0xdeadbeef);
    VAR_11 = FUNC_4(((void*)0), ((void*)0), VAR_8);
    FUNC_3( VAR_11 == VAR_3,
        "returned %u with %u (expected ERROR_INVALID_PARAMETER)\n",
        VAR_11, FUNC_0());
}
