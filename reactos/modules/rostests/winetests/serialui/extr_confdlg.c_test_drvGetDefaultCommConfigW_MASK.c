
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pCC ;
typedef int WCHAR ;
typedef scalar_t__ DWORD ;
typedef int COMMCONFIG ;
typedef int CHAR ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int *,int,int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int) ;
 int * VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 char* VAR_9 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int,char*,scalar_t__,int ,...) ;
 scalar_t__ FUNC_8 (int *,int *,scalar_t__*) ;
 int FUNC_9 (int *,char*,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    COMMCONFIG VAR_12[3];
    WCHAR VAR_13[16];
    CHAR VAR_14[16];
    DWORD VAR_15;
    DWORD VAR_16;
    DWORD VAR_17;



    VAR_15 = sizeof(COMMCONFIG);
    VAR_17 = sizeof(COMMCONFIG) -1;
    FUNC_4(VAR_12, sizeof(VAR_12));
    FUNC_3(0xdeadbeef);
    VAR_16 = FUNC_8(VAR_6, VAR_12, &VAR_17);
    if (VAR_16 == VAR_2) {
        FUNC_10("*W not implemented\n");
        return;
    }
    FUNC_7( (VAR_16 == VAR_3) && (VAR_17 >= VAR_15),
        "returned %u with %u and %u (expected "
        "ERROR_INSUFFICIENT_BUFFER and '>= %u')\n", VAR_16, FUNC_1(), VAR_17, VAR_15);


    for (VAR_15 = 0; VAR_15 < 11 ; VAR_15++) {
        FUNC_9(VAR_14, VAR_9, VAR_15);
        FUNC_2(VAR_0, 0, VAR_14, -1, VAR_13, FUNC_0(VAR_13));
        VAR_17 = sizeof(VAR_12);
        FUNC_4(VAR_12, sizeof(VAR_12));
        FUNC_3(0xdeadbeef);
        VAR_16 = FUNC_8(VAR_13, VAR_12, &VAR_17);
        if (VAR_15 == 0) {
            FUNC_7( VAR_16 == VAR_1,
                "returned %u with %u and %u for %s (expected "
                "ERROR_BADKEY)\n", VAR_16, FUNC_1(), VAR_17, VAR_14);
        }
        else
        {
            FUNC_7((VAR_16 == VAR_5) || (VAR_16 == VAR_1),
               "returned %u with %u and %u for %s (expected ERROR_SUCCESS or "
               "ERROR_BADKEY)\n", VAR_16, FUNC_1(), VAR_17, VAR_14);
        }


        if (VAR_16 == VAR_5) {
            FUNC_5(VAR_14, VAR_10);
            FUNC_6(VAR_13, VAR_11);
            VAR_17 = sizeof(VAR_12);
            FUNC_4(VAR_12, sizeof(VAR_12));
            VAR_16 = FUNC_8(VAR_13, VAR_12, &VAR_17);
            FUNC_7( VAR_16 == VAR_1,
                "returned %u with %u and %u for %s (expected '0' with "
                "ERROR_BADKEY)\n", VAR_16, FUNC_1(), VAR_17, VAR_14);
        }
    }


    VAR_17 = sizeof(VAR_12);
    FUNC_4(VAR_12, sizeof(VAR_12));
    FUNC_3(0xdeadbeef);
    VAR_16 = FUNC_8(VAR_8, VAR_12, &VAR_17);
    FUNC_7( VAR_16 == VAR_1,
        "returned %u with %u and %u for %s (expected ERROR_BADKEY)\n",
        VAR_16, FUNC_1(), VAR_17, VAR_7);


    VAR_17 = sizeof(VAR_12);
    FUNC_4(VAR_12, sizeof(VAR_12));
    FUNC_3(0xdeadbeef);
    VAR_16 = FUNC_8(((void*)0), VAR_12, &VAR_17);
    FUNC_7( VAR_16 == VAR_4,
        "returned %u with %u and %u for NULL (expected ERROR_INVALID_PARAMETER)\n",
        VAR_16, FUNC_1(), VAR_17);


    VAR_17 = sizeof(VAR_12);
    FUNC_3(0xdeadbeef);
    VAR_16 = FUNC_8(VAR_6, ((void*)0), &VAR_17);
    FUNC_7( VAR_16 == VAR_4,
        "returned %u with %u and %u (expected ERROR_INVALID_PARAMETER)\n",
        VAR_16, FUNC_1(), VAR_17);


    FUNC_3(0xdeadbeef);
    VAR_16 = FUNC_8(VAR_6, VAR_12, ((void*)0));
    FUNC_7( VAR_16 == VAR_4,
        "returned %u with %u (expected ERROR_INVALID_PARAMETER)\n",
        VAR_16, FUNC_1());

}
