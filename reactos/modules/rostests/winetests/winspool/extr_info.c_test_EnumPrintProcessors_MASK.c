
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPBYTE ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int *,int,int *,int,int*,int*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int * VAR_6 ;
 int * VAR_7 ;
 scalar_t__ FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int,char*,int,scalar_t__) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    DWORD VAR_8;
    LPBYTE VAR_9;
    DWORD VAR_10;
    DWORD VAR_11;
    DWORD VAR_12;


    VAR_10 = 0xdeadbeef;
    VAR_12 = 0xdeadbeef;
    FUNC_5(0xdeadbeef);
    VAR_8 = FUNC_0(((void*)0), ((void*)0), 1, ((void*)0), 0, &VAR_10, &VAR_12);
    if (FUNC_7(VAR_8, FUNC_1())) return;

    if (VAR_8 && !VAR_10) {
        FUNC_9("No Printprocessor installed\n");
        return;
    }

    FUNC_8((!VAR_8) && (FUNC_1() == VAR_0),
        "got %u with %u (expected '0' with ERROR_INSUFFICIENT_BUFFER)\n",
        VAR_8, FUNC_1());

    VAR_9 = FUNC_3(FUNC_2(), 0, VAR_10 + 4);
    if (VAR_9 == ((void*)0))
        return;

    FUNC_5(0xdeadbeef);
    VAR_11 = 0xdeadbeef;
    VAR_8 = FUNC_0(((void*)0), ((void*)0), 1, VAR_9, VAR_10, &VAR_11, &VAR_12);
    FUNC_8(VAR_8, "got %u with %u (expected '!=0')\n", VAR_8, FUNC_1());



    FUNC_5(0xdeadbeef);
    VAR_12 = 0xdeadbeef;
    VAR_11 = 0xdeadbeef;
    VAR_8 = FUNC_0(((void*)0), ((void*)0), 1, VAR_9, VAR_10+1, &VAR_11, &VAR_12);
    FUNC_8(VAR_8, "got %u with %u (expected '!=0')\n", VAR_8, FUNC_1());

    FUNC_5(0xdeadbeef);
    VAR_11 = 0xdeadbeef;
    VAR_8 = FUNC_0(((void*)0), ((void*)0), 1, VAR_9, VAR_10-1, &VAR_11, &VAR_12);
    FUNC_8( !VAR_8 && (FUNC_1() == VAR_0),
        "got %u with %u (expected '0' with ERROR_INSUFFICIENT_BUFFER)\n",
        VAR_8, FUNC_1());


    if (0) {

        FUNC_5(0xdeadbeef);
        VAR_11 = 0xdeadbeef;
        VAR_12 = 0xdeadbeef;
        VAR_8 = FUNC_0(((void*)0), ((void*)0), 0, VAR_9, VAR_10, &VAR_11, &VAR_12);
        FUNC_8( !VAR_8 && (FUNC_1() == VAR_2),
            "got %u with %u (expected '0' with ERROR_INVALID_LEVEL)\n",
            VAR_8, FUNC_1());

        FUNC_5(0xdeadbeef);
        VAR_11 = 0xdeadbeef;
        VAR_8 = FUNC_0(((void*)0), ((void*)0), 2, VAR_9, VAR_10, &VAR_11, &VAR_12);
        FUNC_8( !VAR_8 && (FUNC_1() == VAR_2),
            "got %u with %u (expected '0' with ERROR_INVALID_LEVEL)\n",
            VAR_8, FUNC_1());
    }


    FUNC_5(0xdeadbeef);
    VAR_11 = 0xdeadbeef;
    VAR_8 = FUNC_0(((void*)0), VAR_6, 1, VAR_9, VAR_10, &VAR_11, &VAR_12);
    FUNC_8(VAR_8, "got %u with %u (expected '!=0')\n", VAR_8, FUNC_1());


    FUNC_5(0xdeadbeef);
    VAR_11 = 0xdeadbeef;
    VAR_8 = FUNC_0(((void*)0), VAR_7, 1, VAR_9, VAR_10, &VAR_11, &VAR_12);

    FUNC_8( FUNC_6(VAR_8) ||
        (FUNC_1() == VAR_1) ||
        (FUNC_1() == VAR_3),
        "got %u with %u (expected '0' with ERROR_INVALID_ENVIRONMENT or "
        "ERROR_INVALID_PARAMETER)\n", VAR_8, FUNC_1());



    if (0) {

        FUNC_5(0xdeadbeef);
        VAR_11 = 0xdeadbeef;
        VAR_12 = 0xdeadbeef;
        VAR_8 = FUNC_0(((void*)0), ((void*)0), 1, ((void*)0), VAR_10, &VAR_11, &VAR_12);
        FUNC_8( !VAR_8 && (FUNC_1() == VAR_4) ,
            "got %u with %u (expected '0' with ERROR_INVALID_USER_BUFFER)\n",
            VAR_8, FUNC_1());
    }

    FUNC_5(0xdeadbeef);
    VAR_11 = 0xdeadbeef;
    VAR_12 = 0xdeadbeef;
    VAR_8 = FUNC_0(((void*)0), ((void*)0), 1, VAR_9, VAR_10, ((void*)0), &VAR_12);

    FUNC_8( FUNC_6(VAR_8) || (!VAR_8 && (FUNC_1() == VAR_5)),
        "got %u with %u (expected '0' with RPC_X_NULL_REF_POINTER)\n",
        VAR_8, FUNC_1());

    VAR_11 = 0xdeadbeef;
    VAR_12 = 0xdeadbeef;
    FUNC_5(0xdeadbeef);
    VAR_8 = FUNC_0(((void*)0), ((void*)0), 1, VAR_9, VAR_10, &VAR_11, ((void*)0));

    FUNC_8( FUNC_6(VAR_8) || (!VAR_8 && (FUNC_1() == VAR_5)),
        "got %u with %u (expected '0' with RPC_X_NULL_REF_POINTER)\n",
        VAR_8, FUNC_1());

    FUNC_4(FUNC_2(), 0, VAR_9);

}
