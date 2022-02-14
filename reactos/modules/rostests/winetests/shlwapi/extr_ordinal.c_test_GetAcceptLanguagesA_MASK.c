
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int original ;
typedef int language ;
typedef int buffer ;
typedef int PBYTE ;
typedef char* LPCSTR ;
typedef char* LONG ;
typedef int LCID ;
typedef size_t INT ;
typedef char* HRESULT ;
typedef int * HKEY ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_2 (int ,char*,int) ;
 int VAR_10 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 char* FUNC_5 (int ,int ,int **) ;
 char* FUNC_6 (int *,int ,int ,int *,int ,int*) ;
 char* FUNC_7 (int *,int ,int ,int ,int const*,int) ;
 scalar_t__ FUNC_8 (char*) ;
 char* VAR_11 ;
 char* FUNC_9 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char*,char,int) ;
 int FUNC_15 (int,char*,...) ;
 char* FUNC_16 (char*,int*) ;
 int FUNC_17 (char*,int ,char*) ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 (char*,char*) ;

__attribute__((used)) static void FUNC_20(void)
{
    static LPCSTR VAR_14[] = {"de,en-gb;q=0.7,en;q=0.3",
                             "de,en;q=0.3,en-gb;q=0.7",
                             "winetest",
                             "de-de,de;q=0.5",
                             "de",
                             ((void*)0)};

    DWORD VAR_15;
    char VAR_16[512];
    char VAR_17[32];
    char VAR_18[64];
    HKEY VAR_19 = ((void*)0);
    LONG VAR_20 = VAR_2;
    LONG VAR_21;
    HRESULT VAR_22;
    DWORD VAR_23 = sizeof(VAR_18) - 2;
    DWORD VAR_24;
    LCID VAR_25;
    LPCSTR VAR_26;
    INT VAR_27 = 0;

    VAR_25 = FUNC_1();


    VAR_21 = FUNC_5(VAR_6, VAR_13, &VAR_19);
    if (VAR_21) {
        FUNC_17("RegOpenKey(%s) failed: %d\n", VAR_13, VAR_21);
        return;
    }
    VAR_24 = sizeof(VAR_16);
    VAR_16[0] = 0;
    VAR_20 = FUNC_6(VAR_19, VAR_12, 0, ((void*)0), (PBYTE)VAR_16, &VAR_24);

    FUNC_4(VAR_19, VAR_12);


    FUNC_14(VAR_17, 0, sizeof(VAR_17));
    VAR_24 = FUNC_0(VAR_25, VAR_8, VAR_17, sizeof(VAR_17));

    if (VAR_24) {
        FUNC_10(VAR_17, "-");
        FUNC_14(VAR_18, 0, sizeof(VAR_18));
        VAR_24 = FUNC_0(VAR_25, VAR_7, VAR_18, sizeof(VAR_18) - VAR_24 - 1);
        FUNC_10(VAR_17, VAR_18);
    }
    else
    {

        FUNC_14(VAR_17, 0, sizeof(VAR_17));
        VAR_24 = FUNC_0(VAR_25, VAR_9, VAR_17, sizeof(VAR_17));
    }


    VAR_24 = VAR_23;
    FUNC_14(VAR_18, '#', VAR_23);
    VAR_18[VAR_23] = 0;
    VAR_22 = FUNC_16( VAR_18, &VAR_24);

    if (VAR_22 != VAR_11) {
        FUNC_19("GetAcceptLanguagesA failed with 0x%x\n", VAR_22);
        goto restore_original;
    }

    if (FUNC_11(VAR_18, VAR_17)) {

        VAR_17[0] = 0;
        VAR_22 = FUNC_2(VAR_25, VAR_17, sizeof(VAR_17));
        FUNC_15(VAR_22 == VAR_11, "LcidToRfc1766A returned 0x%x and %s\n", VAR_22, VAR_17);
    }

    FUNC_15(!FUNC_11(VAR_18, VAR_17),
        "have '%s' (searching for '%s')\n", VAR_17, VAR_18);

    if (FUNC_11(VAR_18, VAR_17)) {
        FUNC_19("no more ideas, how to build the default language '%s'\n", VAR_18);
        goto restore_original;
    }

    FUNC_18("detected default: %s\n", VAR_17);
    while ((VAR_26 = VAR_14[VAR_27])) {

        VAR_15 = FUNC_12(VAR_26);

        VAR_21 = FUNC_7(VAR_19, VAR_12, 0, VAR_10, (const BYTE *) VAR_26, VAR_15 + 1);
        FUNC_15(!VAR_21, "got %d for RegSetValueExA: %s\n", VAR_21, VAR_26);


        VAR_24 = VAR_15 + 2;
        FUNC_14(VAR_18, '#', VAR_23);
        VAR_18[VAR_23] = 0;
        VAR_22 = FUNC_16( VAR_18, &VAR_24);
        FUNC_15(((VAR_22 == VAR_4) && (VAR_24 == 0)) ||
            (FUNC_8(VAR_22) &&
            ((VAR_24 == VAR_15) || (VAR_24 == VAR_15+1)) &&
            !FUNC_11(VAR_18, VAR_26)),
            "+2_#%d: got 0x%x with %d and %s\n", VAR_27, VAR_22, VAR_24, VAR_18);

        VAR_24 = VAR_15 + 1;
        FUNC_14(VAR_18, '#', VAR_23);
        VAR_18[VAR_23] = 0;
        VAR_22 = FUNC_16( VAR_18, &VAR_24);
        FUNC_15(((VAR_22 == VAR_4) && (VAR_24 == 0)) ||
            (FUNC_8(VAR_22) &&
            ((VAR_24 == VAR_15) || (VAR_24 == VAR_15+1)) &&
            !FUNC_11(VAR_18, VAR_26)),
            "+1_#%d: got 0x%x with %d and %s\n", VAR_27, VAR_22, VAR_24, VAR_18);

        VAR_24 = VAR_15;
        FUNC_14(VAR_18, '#', VAR_23);
        VAR_18[VAR_23] = 0;
        VAR_22 = FUNC_16( VAR_18, &VAR_24);
        FUNC_15(((VAR_22 == VAR_4) && (VAR_24 == 0)) ||
            (((VAR_22 == VAR_11) && !FUNC_11(VAR_18, VAR_17) && (VAR_24 == FUNC_12(VAR_17))) ||
            ((VAR_22 == VAR_11) && !FUNC_13(VAR_18, VAR_17, VAR_24)) ||
            ((VAR_22 == VAR_5) && !VAR_24) ||
            ((VAR_22 == FUNC_9(VAR_1)) && VAR_24 == VAR_15)),
            "==_#%d: got 0x%x with %d and %s\n", VAR_27, VAR_22, VAR_24, VAR_18);

        if (VAR_15 > 1) {
            VAR_24 = VAR_15 - 1;
            FUNC_14(VAR_18, '#', VAR_23);
            VAR_18[VAR_23] = 0;
            VAR_22 = FUNC_16( VAR_18, &VAR_24);
            FUNC_15(((VAR_22 == VAR_4) && (VAR_24 == 0)) ||
                (((VAR_22 == VAR_11) && !FUNC_11(VAR_18, VAR_17) && (VAR_24 == FUNC_12(VAR_17))) ||
                ((VAR_22 == VAR_11) && !FUNC_13(VAR_18, VAR_17, VAR_24)) ||
                ((VAR_22 == VAR_5) && !VAR_24) ||
                ((VAR_22 == FUNC_9(VAR_1)) && VAR_24 == VAR_15 - 1)),
                "-1_#%d: got 0x%x with %d and %s\n", VAR_27, VAR_22, VAR_24, VAR_18);
        }

        VAR_24 = 1;
        FUNC_14(VAR_18, '#', VAR_23);
        VAR_18[VAR_23] = 0;
        VAR_22 = FUNC_16( VAR_18, &VAR_24);
        FUNC_15(((VAR_22 == VAR_4) && (VAR_24 == 0)) ||
            (((VAR_22 == VAR_11) && !FUNC_11(VAR_18, VAR_17) && (VAR_24 == FUNC_12(VAR_17))) ||
            ((VAR_22 == VAR_11) && !FUNC_13(VAR_18, VAR_17, VAR_24)) ||
            ((VAR_22 == VAR_5) && !VAR_24) ||
            ((VAR_22 == FUNC_9(VAR_1)) && VAR_24 == 1)),
            "=1_#%d: got 0x%x with %d and %s\n", VAR_27, VAR_22, VAR_24, VAR_18);

        VAR_24 = VAR_23;
        VAR_22 = FUNC_16( ((void*)0), &VAR_24);



        FUNC_15( ((VAR_22 == VAR_11) && ((VAR_24 == VAR_15) || (VAR_24 == VAR_15 + 1))) ||
            ((VAR_22 == VAR_3) && (VAR_24 == VAR_23)),
            "NULL,max #%d: got 0x%x with %d and %s\n", VAR_27, VAR_22, VAR_24, VAR_18);

        VAR_27++;
    }


    FUNC_4(VAR_19, VAR_12);

    VAR_24 = VAR_23;
    FUNC_14(VAR_18, '#', VAR_23);
    VAR_18[VAR_23] = 0;
    VAR_22 = FUNC_16( VAR_18, &VAR_24);
    FUNC_15( ((VAR_22 == VAR_11) && (VAR_24 == FUNC_12(VAR_17))),
        "max: got 0x%x with %d and %s (expected S_OK with %d and '%s'\n",
        VAR_22, VAR_24, VAR_18, FUNC_12(VAR_17), VAR_17);

    VAR_24 = 2;
    FUNC_14(VAR_18, '#', VAR_23);
    VAR_18[VAR_23] = 0;
    VAR_22 = FUNC_16( VAR_18, &VAR_24);
    FUNC_15( (((VAR_22 == VAR_11) || (VAR_22 == VAR_4)) && !FUNC_13(VAR_18, VAR_17, VAR_24)) ||
        ((VAR_22 == VAR_5) && !VAR_24) ||
        ((VAR_22 == FUNC_9(VAR_0)) && !VAR_24),
        "=2: got 0x%x with %d and %s\n", VAR_22, VAR_24, VAR_18);

    VAR_24 = 1;
    FUNC_14(VAR_18, '#', VAR_23);
    VAR_18[VAR_23] = 0;
    VAR_22 = FUNC_16( VAR_18, &VAR_24);




    FUNC_15( (((VAR_22 == VAR_11) || (VAR_22 == VAR_4)) && !FUNC_13(VAR_18, VAR_17, VAR_24)) ||
        ((VAR_22 == VAR_5) && !VAR_24) ||
        ((VAR_22 == FUNC_9(VAR_0)) && !VAR_24),
        "=1: got 0x%x with %d and %s\n", VAR_22, VAR_24, VAR_18);

    VAR_24 = 0;
    FUNC_14(VAR_18, '#', VAR_23);
    VAR_18[VAR_23] = 0;
    VAR_22 = FUNC_16( VAR_18, &VAR_24);

    FUNC_15((VAR_22 == VAR_3) || (VAR_22 == VAR_4) || (VAR_22 == FUNC_9(VAR_0)),
        "got 0x%x\n", VAR_22);

    FUNC_14(VAR_18, '#', VAR_23);
    VAR_18[VAR_23] = 0;
    VAR_22 = FUNC_16( VAR_18, ((void*)0));

    FUNC_15((VAR_22 == VAR_3) || (VAR_22 == VAR_4),
        "got 0x%x (expected E_FAIL or E_INVALIDARG)\n", VAR_22);


    VAR_22 = FUNC_16( ((void*)0), ((void*)0));

    FUNC_15((VAR_22 == VAR_3) || (VAR_22 == VAR_4),
        "got 0x%x (expected E_FAIL or E_INVALIDARG)\n", VAR_22);

restore_original:
    if (!VAR_20) {
        VAR_24 = FUNC_12(VAR_16);
        VAR_21 = FUNC_7(VAR_19, VAR_12, 0, VAR_10, (const BYTE *) VAR_16, VAR_24 ? VAR_24 + 1: 0);
        FUNC_15(!VAR_21, "RegSetValueEx(%s) failed: %d\n", VAR_16, VAR_21);
    }
    else
    {
        FUNC_4(VAR_19, VAR_12);
    }
    FUNC_3(VAR_19);
}
