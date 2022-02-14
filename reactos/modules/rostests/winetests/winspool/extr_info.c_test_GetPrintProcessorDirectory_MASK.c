
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPBYTE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int *,int,char*,int,int*) ;
 int FUNC_2 () ;
 char* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 scalar_t__ FUNC_7 (int,int ) ;
 int FUNC_8 (int,char*,...) ;
 int * VAR_12 ;

__attribute__((used)) static void FUNC_9(void)
{
    LPBYTE VAR_13 = ((void*)0);
    DWORD VAR_14 = 0;
    DWORD VAR_15 = 0;
    BOOL VAR_16;


    FUNC_5(0xdeadbeef);
    VAR_16 = FUNC_1(((void*)0), ((void*)0), 1, ((void*)0), 0, &VAR_14);
    if (FUNC_7(VAR_16, FUNC_0())) return;

    FUNC_8( !VAR_16 && (FUNC_0() == VAR_0),
        "returned %d with %d (expected '0' with ERROR_INSUFFICIENT_BUFFER)\n",
        VAR_16, FUNC_0());

    VAR_13 = FUNC_3(FUNC_2(), 0, VAR_14*2);
    if(VAR_13 == ((void*)0)) return;

    VAR_13[0] = '\0';
    FUNC_5(0xdeadbeef);
    VAR_16 = FUNC_1(((void*)0), ((void*)0), 1, VAR_13, VAR_14, &VAR_15);
    FUNC_8(VAR_16, "returned %d with %d (expected '!= 0')\n", VAR_16, FUNC_0());

    FUNC_5(0xdeadbeef);
    VAR_13[0] = '\0';
    VAR_16 = FUNC_1(((void*)0), ((void*)0), 1, VAR_13, VAR_14*2, &VAR_15);
    FUNC_8(VAR_16, "returned %d with %d (expected '!= 0')\n", VAR_16, FUNC_0());


    VAR_13[0] = '\0';
    FUNC_5(0xdeadbeef);
    VAR_16 = FUNC_1( ((void*)0), ((void*)0), 1, VAR_13, VAR_14-1, &VAR_15);
    FUNC_8( !VAR_16 && (FUNC_0() == VAR_0),
        "returned %d with %d (expected '0' with ERROR_INSUFFICIENT_BUFFER)\n",
        VAR_16, FUNC_0());

    if (0)
    {


    VAR_15 = 0;
    FUNC_5(0xdeadbeef);
    VAR_16 = FUNC_1( ((void*)0), ((void*)0), 1, ((void*)0), VAR_14, &VAR_15);

    FUNC_8( (!VAR_16 && (FUNC_0() == VAR_4)) ||
        FUNC_6(VAR_16),
        "returned %d with %d (expected '0' with ERROR_INVALID_USER_BUFFER)\n",
        VAR_16, FUNC_0());
    }

    VAR_13[0] = '\0';
    FUNC_5(0xdeadbeef);
    VAR_16 = FUNC_1( ((void*)0), ((void*)0), 1, VAR_13, VAR_14, ((void*)0));


    FUNC_8( !VAR_16 && ((FUNC_0() == VAR_7) ||
                 (FUNC_0() == VAR_3)),
        "returned %d with %d (expected '0' with RPC_X_NULL_REF_POINTER "
        "or with ERROR_INVALID_PARAMETER)\n", VAR_16, FUNC_0());

    VAR_13[0] = '\0';
    FUNC_5(0xdeadbeef);
    VAR_16 = FUNC_1( ((void*)0), ((void*)0), 1, ((void*)0), VAR_14, ((void*)0));


    FUNC_8( !VAR_16 && ((FUNC_0() == VAR_7) ||
                 (FUNC_0() == VAR_3)),
        "returned %d with %d (expected '0' with RPC_X_NULL_REF_POINTER "
        "or with ERROR_INVALID_PARAMETER)\n", VAR_16, FUNC_0());


    VAR_13[0] = '\0';
    FUNC_5(0xdeadbeef);
    VAR_16 = FUNC_1(((void*)0), ((void*)0), 0, VAR_13, VAR_14, &VAR_15);

    FUNC_8( (!VAR_16 && (FUNC_0() == VAR_2)) ||
        FUNC_6(VAR_16 && VAR_13[0]),
        "returned %d with %d (expected '0' with ERROR_INVALID_LEVEL)\n",
        VAR_16, FUNC_0());

    VAR_13[0] = '\0';
    FUNC_5(0xdeadbeef);
    VAR_16 = FUNC_1(((void*)0), ((void*)0), 2, VAR_13, VAR_14, &VAR_15);

    FUNC_8( (!VAR_16 && (FUNC_0() == VAR_2)) ||
        FUNC_6(VAR_16 && VAR_13[0]),
        "returned %d with %d (expected '0' with ERROR_INVALID_LEVEL)\n",
        VAR_16, FUNC_0());


    VAR_13[0] = '\0';
    FUNC_5(0xdeadbeef);
    VAR_16 = FUNC_1(((void*)0), VAR_8, 1, VAR_13, VAR_14*2, &VAR_15);
    FUNC_8(VAR_16, "returned %d with %d (expected '!= 0')\n", VAR_16, FUNC_0());


    VAR_13[0] = '\0';
    FUNC_5(0xdeadbeef);
    VAR_16 = FUNC_1(((void*)0), VAR_9, 1, VAR_13, VAR_14*2, &VAR_15);
    FUNC_8(VAR_16, "returned %d with %d (expected '!= 0')\n", VAR_16, FUNC_0());



    VAR_13[0] = '\0';
    FUNC_5(0xdeadbeef);
    VAR_16 = FUNC_1(((void*)0), VAR_10, 1, VAR_13, VAR_14*2, &VAR_15);
    FUNC_8( VAR_16 || (FUNC_0() == VAR_1),
        "returned %d with %d (expected '!= 0' or '0' with "
        "ERROR_INVALID_ENVIRONMENT)\n", VAR_16, FUNC_0());


    VAR_13[0] = '\0';
    FUNC_5(0xdeadbeef);
    VAR_16 = FUNC_1(((void*)0), VAR_11, 1, VAR_13, VAR_14*2, &VAR_15);
    FUNC_8( !VAR_16 && (FUNC_0() == VAR_1),
        "returned %d with %d (expected '0' with ERROR_INVALID_ENVIRONMENT)\n",
        VAR_16, FUNC_0());


    VAR_13[0] = '\0';
    FUNC_5(0xdeadbeef);
    VAR_16 = FUNC_1(VAR_8, ((void*)0), 1, VAR_13, VAR_14*2, &VAR_15);
    FUNC_8(VAR_16, "returned %d with %d (expected '!= 0')\n", VAR_16, FUNC_0());


    VAR_13[0] = '\0';
    FUNC_5(0xdeadbeef);
    VAR_16 = FUNC_1(VAR_12, ((void*)0), 1, VAR_13, VAR_14*2, &VAR_15);
    FUNC_8( !VAR_16, "expected failure\n");
    FUNC_8( FUNC_0() == VAR_6 ||
        FUNC_0() == VAR_3 ||
        FUNC_0() == VAR_5,
        "unexpected last error %d\n", FUNC_0());

    FUNC_4(FUNC_2(), 0, VAR_13);
}
