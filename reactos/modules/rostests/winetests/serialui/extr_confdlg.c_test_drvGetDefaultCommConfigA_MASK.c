
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pCC ;
typedef scalar_t__ DWORD ;
typedef int COMMCONFIG ;
typedef int CHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int * VAR_5 ;
 int * VAR_6 ;
 char* VAR_7 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int,char*,scalar_t__,int ,...) ;
 scalar_t__ FUNC_5 (int *,int *,scalar_t__*) ;
 int FUNC_6 (int *,char*,scalar_t__) ;
 int VAR_8 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    COMMCONFIG VAR_9[3];
    CHAR VAR_10[16];
    DWORD VAR_11;
    DWORD VAR_12;
    DWORD VAR_13;



    VAR_11 = sizeof(COMMCONFIG);
    VAR_13 = sizeof(COMMCONFIG) -1;
    FUNC_2(VAR_9, sizeof(VAR_9));
    FUNC_1(0xdeadbeef);
    VAR_12 = FUNC_5(VAR_5, VAR_9, &VAR_13);
    if (VAR_12 == VAR_1) {

        FUNC_7("*A not implemented\n");
        return;
    }
    FUNC_4( (VAR_12 == VAR_2) && (VAR_13 >= VAR_11),
        "returned %u with %u and %u (expected "
        "ERROR_INSUFFICIENT_BUFFER and '>= %u')\n", VAR_12, FUNC_0(), VAR_13, VAR_11);


    for (VAR_11 = 0; VAR_11 < 11 ; VAR_11++) {
        FUNC_6(VAR_10, VAR_7, VAR_11);
        VAR_13 = sizeof(VAR_9);
        FUNC_2(VAR_9, sizeof(VAR_9));
        FUNC_1(0xdeadbeef);
        VAR_12 = FUNC_5(VAR_10, VAR_9, &VAR_13);
        if (VAR_11 == 0) {
            FUNC_4( VAR_12 == VAR_0,
                "returned %u with %u and %u for %s (expected "
                "ERROR_BADKEY)\n", VAR_12, FUNC_0(), VAR_13, VAR_10);
        }
        else
        {
            FUNC_4((VAR_12 == VAR_4) || (VAR_12 == VAR_0),
               "returned %u with %u and %u for %s (expected ERROR_SUCCESS or "
               "ERROR_BADKEY)\n", VAR_12, FUNC_0(), VAR_13, VAR_10);
        }


        if (VAR_12 == VAR_4) {
            FUNC_3(VAR_10, VAR_8);
            VAR_13 = sizeof(VAR_9);
            FUNC_2(VAR_9, sizeof(VAR_9));
            VAR_12 = FUNC_5(VAR_10, VAR_9, &VAR_13);
            FUNC_4( VAR_12 == VAR_0,
                "returned %u with %u and %u for %s (expected '0' with "
                "ERROR_BADKEY)\n", VAR_12, FUNC_0(), VAR_13, VAR_10);
        }
    }



    VAR_13 = sizeof(VAR_9);
    FUNC_2(VAR_9, sizeof(VAR_9));
    FUNC_1(0xdeadbeef);
    VAR_12 = FUNC_5(VAR_6, VAR_9, &VAR_13);
    FUNC_4( VAR_12 == VAR_0,
        "returned %u with %u and %u for %s (expected ERROR_BADKEY)\n",
        VAR_12, FUNC_0(), VAR_13, VAR_6);


    VAR_13 = sizeof(VAR_9);
    FUNC_2(VAR_9, sizeof(VAR_9));
    FUNC_1(0xdeadbeef);
    VAR_12 = FUNC_5(((void*)0), VAR_9, &VAR_13);
    FUNC_4( VAR_12 == VAR_3,
        "returned %u with %u and %u for NULL (expected ERROR_INVALID_PARAMETER)\n",
        VAR_12, FUNC_0(), VAR_13);


    VAR_13 = sizeof(VAR_9);
    FUNC_1(0xdeadbeef);
    VAR_12 = FUNC_5(VAR_5, ((void*)0), &VAR_13);
    FUNC_4( VAR_12 == VAR_3,
        "returned %u with %u and %u (expected ERROR_INVALID_PARAMETER)\n",
        VAR_12, FUNC_0(), VAR_13);


    FUNC_1(0xdeadbeef);
    VAR_12 = FUNC_5(VAR_5, VAR_9, ((void*)0));
    FUNC_4( VAR_12 == VAR_3,
        "returned %u with %u (expected ERROR_INVALID_PARAMETER)\n",
        VAR_12, FUNC_0());
}
