
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int org_value ;
typedef int * PBYTE ;
typedef int * HKEY ;
typedef int DWORD ;
typedef char CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int **) ;
 int FUNC_4 (int *,int ,int *,int *,int *,int*) ;
 int FUNC_5 (int *,int ,int ,int ,int *,int) ;
 int FUNC_6 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (char*) ;
 char* VAR_13 ;
 char* VAR_14 ;
 char* VAR_15 ;
 char* VAR_16 ;
 int FUNC_8 (int,char*,int,...) ;
 int FUNC_9 (int ,int ,int *,int ,int *,int,int*) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static void FUNC_11(void)
{
    CHAR VAR_17[16];
    HKEY VAR_18 = ((void*)0);
    DWORD VAR_19[2];
    DWORD VAR_20;
    DWORD VAR_21;
    DWORD VAR_22;



    VAR_21 = (DWORD) 0xdeadbeef;
    FUNC_6(0xdeadbeef);
    VAR_20 = FUNC_9(VAR_12, VAR_10, ((void*)0), 0, ((void*)0), 0, &VAR_21);
    if (VAR_20 == VAR_3) {
        FUNC_10("'GetTransmissionRetryTimeout' not supported\n");
        return;
    }
    VAR_22 = sizeof(DWORD);
    FUNC_8( (VAR_20 == VAR_2) && (VAR_21 == VAR_22),
        "returned %d with %u and %u (expected ERROR_INSUFFICIENT_BUFFER "
        "and '%u')\n", VAR_20, FUNC_0(), VAR_21, VAR_22);
    VAR_22 = VAR_21;


    VAR_20 = FUNC_3(VAR_5, VAR_9, 0, VAR_6, &VAR_18);
    if (VAR_20 == VAR_0) {
        FUNC_10("ACCESS_DENIED\n");
        return;
    }

    if (VAR_20 != VAR_4) {

        FUNC_10("got %d\n", VAR_20);
        return;
    }

    VAR_17[0] = '\0';
    VAR_21 = sizeof(VAR_17)-1 ;
    VAR_20 = FUNC_4(VAR_18, VAR_8, ((void*)0), ((void*)0), (PBYTE) VAR_17, &VAR_21);
    FUNC_8( (VAR_20 == VAR_4) || (VAR_20 == VAR_1),
        "returned %u and %u for \"%s\" (expected ERROR_SUCCESS or "
        "ERROR_FILE_NOT_FOUND)\n", VAR_20, VAR_21, VAR_17);


    FUNC_2(VAR_18, VAR_8);
    VAR_21 = (DWORD) 0xdeadbeef;
    VAR_19[0] = 0xdeadbeef;
    FUNC_6(0xdeadbeef);
    VAR_20 = FUNC_9(VAR_12, VAR_10, ((void*)0), 0, (PBYTE) VAR_19, VAR_22, &VAR_21);
    FUNC_8( (VAR_20 == VAR_4) && (VAR_19[0] == 45),
        "returned %d with %u and %u for %d\n (expected ERROR_SUCCESS "
        "for '45')\n", VAR_20, FUNC_0(), VAR_21, VAR_19[0]);


    VAR_20 = FUNC_5(VAR_18, VAR_8, 0, VAR_7, (PBYTE)VAR_11, 1);
    FUNC_8(VAR_20 == VAR_4, "expected ERROR_SUCCESS, got %u\n", FUNC_0());
    VAR_21 = (DWORD) 0xdeadbeef;
    VAR_19[0] = 0xdeadbeef;
    FUNC_6(0xdeadbeef);
    VAR_20 = FUNC_9(VAR_12, VAR_10, ((void*)0), 0, (PBYTE) VAR_19, VAR_22, &VAR_21);
    FUNC_8( (VAR_20 == VAR_4) && (VAR_19[0] == 45),
        "returned %d with %u and %u for %d\n (expected ERROR_SUCCESS "
        "for '45')\n", VAR_20, FUNC_0(), VAR_21, VAR_19[0]);


    VAR_20 = FUNC_5(VAR_18, VAR_8, 0, VAR_7, (PBYTE)VAR_13, FUNC_7(VAR_13)+1);
    FUNC_8(VAR_20 == VAR_4, "expected ERROR_SUCCESS, got %u\n", FUNC_0());
    VAR_21 = (DWORD) 0xdeadbeef;
    VAR_19[0] = 0xdeadbeef;
    FUNC_6(0xdeadbeef);
    VAR_20 = FUNC_9(VAR_12, VAR_10, ((void*)0), 0, (PBYTE) VAR_19, VAR_22, &VAR_21);
    FUNC_8( (VAR_20 == VAR_4) && (VAR_19[0] == 0),
        "returned %d with %u and %u for %d\n (expected ERROR_SUCCESS "
        "for '0')\n", VAR_20, FUNC_0(), VAR_21, VAR_19[0]);


    VAR_20 = FUNC_5(VAR_18, VAR_8, 0, VAR_7, (PBYTE)VAR_15, FUNC_7(VAR_15)+1);
    FUNC_8(VAR_20 == VAR_4, "expected ERROR_SUCCESS, got %u\n", FUNC_0());
    VAR_21 = (DWORD) 0xdeadbeef;
    VAR_19[0] = 0xdeadbeef;
    FUNC_6(0xdeadbeef);
    VAR_20 = FUNC_9(VAR_12, VAR_10, ((void*)0), 0, (PBYTE) VAR_19, VAR_22, &VAR_21);
    FUNC_8( (VAR_20 == VAR_4) && (VAR_19[0] == 1),
        "returned %d with %u and %u for %d\n (expected 'ERROR_SUCCESS' "
        "for '1')\n", VAR_20, FUNC_0(), VAR_21, VAR_19[0]);

    VAR_20 = FUNC_5(VAR_18, VAR_8, 0, VAR_7, (PBYTE)VAR_16, FUNC_7(VAR_16)+1);
    FUNC_8(VAR_20 == VAR_4, "expected ERROR_SUCCESS, got %u\n", FUNC_0());
    VAR_21 = (DWORD) 0xdeadbeef;
    VAR_19[0] = 0xdeadbeef;
    FUNC_6(0xdeadbeef);
    VAR_20 = FUNC_9(VAR_12, VAR_10, ((void*)0), 0, (PBYTE) VAR_19, VAR_22, &VAR_21);
    FUNC_8( (VAR_20 == VAR_4) && (VAR_19[0] == 999999),
        "returned %d with %u and %u for %d\n (expected ERROR_SUCCESS "
        "for '999999')\n", VAR_20, FUNC_0(), VAR_21, VAR_19[0]);


    VAR_20 = FUNC_5(VAR_18, VAR_8, 0, VAR_7, (PBYTE)VAR_14, FUNC_7(VAR_14)+1);
    FUNC_8(VAR_20 == VAR_4, "expected ERROR_SUCCESS, got %u\n", FUNC_0());
    VAR_21 = (DWORD) 0xdeadbeef;
    VAR_19[0] = 0xdeadbeef;
    FUNC_6(0xdeadbeef);
    VAR_20 = FUNC_9(VAR_12, VAR_10, ((void*)0), 0, (PBYTE) VAR_19, VAR_22, &VAR_21);
    FUNC_8( (VAR_20 == VAR_4) && (VAR_19[0] == 1000000),
        "returned %d with %u and %u for %d\n (expected ERROR_SUCCESS "
        "for '1000000')\n", VAR_20, FUNC_0(), VAR_21, VAR_19[0]);


    FUNC_2(VAR_18, VAR_8);
    if (VAR_17[0]) {
        VAR_20 = FUNC_5(VAR_18, VAR_8, 0, VAR_7, (PBYTE)VAR_17, FUNC_7(VAR_17)+1);
        FUNC_8(VAR_20 == VAR_4, "unable to restore original value (got %u): %s\n", VAR_20, VAR_17);
    }

    FUNC_1(VAR_18);
}
