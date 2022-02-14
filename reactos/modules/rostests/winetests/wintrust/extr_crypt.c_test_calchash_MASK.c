
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int expectedhash ;
typedef int * HANDLE ;
typedef int DWORD ;
typedef int CHAR ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int ,int *,int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,int ,int *) ;
 int* FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int*) ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,char*,int,int*,int *) ;
 int FUNC_10 (int*,int*,int) ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (int *,int*,int*,int) ;
 int * VAR_10 ;

__attribute__((used)) static void FUNC_13(void)
{
    BOOL VAR_11;
    HANDLE VAR_12;
    DWORD VAR_13 = 0;
    BYTE* VAR_14;
    BYTE VAR_15[20] = {0x3a,0xa1,0x19,0x08,0xec,0xa6,0x0d,0x2e,0x7e,0xcc,0x7a,0xca,0xf5,0xb8,0x2e,0x62,0x6a,0xda,0xf0,0x19};
    CHAR VAR_16[VAR_8];
    DWORD VAR_17;


    FUNC_8(0xdeadbeef);
    VAR_11 = FUNC_12(((void*)0), ((void*)0), ((void*)0), 0);
    FUNC_11(!VAR_11, "Expected failure\n");
    FUNC_11(FUNC_3() == VAR_2,
       "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_3());


    FUNC_8(0xdeadbeef);
    VAR_11 = FUNC_12(((void*)0), &VAR_13, ((void*)0), 0);
    FUNC_11(!VAR_11, "Expected failure\n");
    FUNC_11(FUNC_3() == VAR_2,
       "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_3());


    VAR_12 = FUNC_1(VAR_10, VAR_5, 0, ((void*)0), VAR_9, 0, ((void*)0));
    FUNC_8(0xdeadbeef);
    VAR_11 = FUNC_12(VAR_12, ((void*)0), ((void*)0), 0);
    FUNC_11(!VAR_11, "Expected failure\n");
    FUNC_11(FUNC_3() == VAR_2,
       "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_3());
    FUNC_0(VAR_12);


    VAR_12 = FUNC_1(VAR_10, VAR_5, 0, ((void*)0), VAR_9, 0, ((void*)0));
    FUNC_8(0xdeadbeef);
    VAR_11 = FUNC_12(VAR_12, &VAR_13, ((void*)0), 1);
    FUNC_11(!VAR_11, "Expected failure\n");
    FUNC_11(FUNC_3() == VAR_2,
       "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_3());
    FUNC_0(VAR_12);


    VAR_12 = FUNC_1(VAR_10, VAR_5, VAR_4, ((void*)0), VAR_9, 0, ((void*)0));
    FUNC_11(VAR_12 != VAR_7, "CreateFile failed %u\n", FUNC_3());
    FUNC_8(0xdeadbeef);
    VAR_11 = FUNC_12(VAR_12, &VAR_13, ((void*)0), 0);
    FUNC_11(VAR_11, "Expected success, got FALSE with %d\n", FUNC_3());
    FUNC_11(VAR_13 == 20," Expected a hash size of 20, got %d\n", VAR_13);
    FUNC_11(FUNC_3() == VAR_1,
       "Expected ERROR_INSUFFICIENT_BUFFER, got %d\n", FUNC_3());
    FUNC_0(VAR_12);




    VAR_12 = FUNC_1(VAR_10, VAR_5, VAR_4, ((void*)0), VAR_9, 0, ((void*)0));
    VAR_13 *= 2;
    VAR_14 = FUNC_6(FUNC_4(), 0, VAR_13);
    FUNC_8(0xdeadbeef);
    VAR_11 = FUNC_12(VAR_12, &VAR_13, VAR_14, 0);
    FUNC_11(VAR_11, "Expected success, got FALSE with %d\n", FUNC_3());
    FUNC_11(VAR_13 == 20," Expected a hash size of 20, got %d\n", VAR_13);
    FUNC_11(FUNC_3() == VAR_3,
       "Expected ERROR_SUCCESS, got %d\n", FUNC_3());
    FUNC_0(VAR_12);
    FUNC_7(FUNC_4(), 0, VAR_14);




    FUNC_5(VAR_0, "hsh", 0, VAR_16);
    VAR_12 = FUNC_1(VAR_16, VAR_6, 0, ((void*)0), VAR_9, 0, ((void*)0));
    FUNC_9(VAR_12, "Text in this file is needed to create a know hash", 49, &VAR_17, ((void*)0));
    FUNC_0(VAR_12);


    VAR_12 = FUNC_1(VAR_16, VAR_5, 0, ((void*)0), VAR_9, 0, ((void*)0));
    VAR_13 = 0;
    FUNC_12(VAR_12, &VAR_13, ((void*)0), 0);
    VAR_14 = FUNC_6(FUNC_4(), 0, VAR_13);
    FUNC_8(0xdeadbeef);
    VAR_11 = FUNC_12(VAR_12, &VAR_13, VAR_14, 0);
    FUNC_11(VAR_11, "Expected success, got FALSE with %d\n", FUNC_3());
    FUNC_11(FUNC_3() == VAR_3,
       "Expected ERROR_SUCCESS, got %d\n", FUNC_3());
    FUNC_11(VAR_13 == sizeof(VAR_15) &&
       !FUNC_10(VAR_14, VAR_15, sizeof(VAR_15)),
       "Hashes didn't match\n");
    FUNC_0(VAR_12);

    FUNC_7(FUNC_4(), 0, VAR_14);
    FUNC_2(VAR_16);
}
