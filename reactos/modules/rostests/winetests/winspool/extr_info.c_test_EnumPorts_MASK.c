
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPBYTE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int *,int,int*,int*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int,int) ;
 int FUNC_7 (int,char*,int,int,int,...) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static void FUNC_9(void)
{
    DWORD VAR_4;
    DWORD VAR_5;
    LPBYTE VAR_6;
    DWORD VAR_7;
    DWORD VAR_8;
    DWORD VAR_9;


    for(VAR_5 = 0; VAR_5 < 4; VAR_5++) {

        VAR_7 = 0xdeadbeef;
        VAR_9 = 0xdeadbeef;
        FUNC_5(0xdeadbeef);
        VAR_4 = FUNC_0(((void*)0), VAR_5, ((void*)0), 0, &VAR_7, &VAR_9);
        if (FUNC_6(VAR_4, FUNC_1())) return;


        if(!VAR_5 || (VAR_5 > 2)) {

            FUNC_7( (!VAR_4 && (FUNC_1() == VAR_1)) ||
                (VAR_4 && (VAR_9 == 0)),
                "(%d) returned %d with %d and 0x%08x (expected '0' with "
                "ERROR_INVALID_LEVEL or '!=0' and 0x0)\n",
                VAR_5, VAR_4, FUNC_1(), VAR_9);
            continue;
        }



        if (!VAR_4 && (FUNC_1() == VAR_1)) {
            FUNC_8("Level %d not supported\n", VAR_5);
            continue;
        }

        FUNC_7((!VAR_4) && (FUNC_1() == VAR_0),
            "(%d) returned %d with %d (expected '0' with "
            "ERROR_INSUFFICIENT_BUFFER)\n", VAR_5, VAR_4, FUNC_1());

        VAR_6 = FUNC_3(FUNC_2(), 0, VAR_7 *2);
        if (VAR_6 == ((void*)0)) continue;

        VAR_8 = 0xdeadbeef;
        FUNC_5(0xdeadbeef);
        VAR_4 = FUNC_0(((void*)0), VAR_5, VAR_6, VAR_7, &VAR_8, &VAR_9);
        FUNC_7(VAR_4, "(%d) returned %d with %d (expected '!=0')\n", VAR_5, VAR_4, FUNC_1());
        FUNC_7(VAR_8 == VAR_7, "(%d) returned %d (expected %d)\n", VAR_5, VAR_8, VAR_7);


        VAR_8 = 0xdeadbeef;
        VAR_9 = 0xdeadbeef;
        FUNC_5(0xdeadbeef);
        VAR_4 = FUNC_0(((void*)0), VAR_5, VAR_6, VAR_7+1, &VAR_8, &VAR_9);
        FUNC_7(VAR_4, "(%d) returned %d with %d (expected '!=0')\n", VAR_5, VAR_4, FUNC_1());
        FUNC_7(VAR_8 == VAR_7, "(%d) returned %d (expected %d)\n", VAR_5, VAR_8, VAR_7);

        VAR_8 = 0xdeadbeef;
        FUNC_5(0xdeadbeef);
        VAR_4 = FUNC_0(((void*)0), VAR_5, VAR_6, VAR_7-1, &VAR_8, &VAR_9);
        FUNC_7( !VAR_4 && (FUNC_1() == VAR_0),
            "(%d) returned %d with %d (expected '0' with "
            "ERROR_INSUFFICIENT_BUFFER)\n", VAR_5, VAR_4, FUNC_1());
        FUNC_7(VAR_8 == VAR_7, "(%d) returned %d (expected %d)\n", VAR_5, VAR_8, VAR_7);
        FUNC_5(0xdeadbeef);
        VAR_4 = FUNC_0(((void*)0), VAR_5, VAR_6, VAR_7, ((void*)0), &VAR_9);

        FUNC_7( (!VAR_4 && (FUNC_1() == VAR_3) ) ||
            ( VAR_4 && (FUNC_1() == VAR_2) ),
            "(%d) returned %d with %d (expected '0' with "
            "RPC_X_NULL_REF_POINTER or '!=0' with NO_ERROR)\n",
            VAR_5, VAR_4, FUNC_1());


        FUNC_5(0xdeadbeef);
        VAR_4 = FUNC_0(((void*)0), VAR_5, VAR_6, VAR_7, &VAR_8, ((void*)0));

        FUNC_7( (!VAR_4 && (FUNC_1() == VAR_3) ) ||
            ( VAR_4 && (FUNC_1() == VAR_2) ),
            "(%d) returned %d with %d (expected '0' with "
            "RPC_X_NULL_REF_POINTER or '!=0' with NO_ERROR)\n",
            VAR_5, VAR_4, FUNC_1());

        FUNC_4(FUNC_2(), 0, VAR_6);
    }
}
