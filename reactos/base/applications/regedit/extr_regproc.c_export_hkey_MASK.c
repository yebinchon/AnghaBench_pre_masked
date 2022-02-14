
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int FILE ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (char**,int*,int*,int,int *,int,scalar_t__) ;
 int FUNC_4 (char**,int*,int*,char*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int **,int*,int) ;
 int FUNC_7 (char**,int*,int) ;
 int FUNC_8 (int *,char*,scalar_t__) ;





 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int,char*,int*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_11 (int ,int,char*,int*,int *,int*,int *,int*) ;
 scalar_t__ FUNC_12 (int ,char*,int *) ;
 scalar_t__ FUNC_13 (int ,int *,int *,int *,int *,int*,int *,int *,int*,int*,int *,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_14 (int ,char*,char*,...) ;
 int FUNC_15 () ;
 int FUNC_16 (char*,char const*) ;
 int FUNC_17 (char const*) ;
 int FUNC_18 (char*,char const*,...) ;
 int VAR_5 ;
 int FUNC_19 (char*) ;

__attribute__((used)) static void FUNC_20(FILE *VAR_6, HKEY VAR_7,
                 WCHAR **VAR_8, DWORD *VAR_9,
                 WCHAR **VAR_10, DWORD *VAR_11,
                 BYTE **VAR_12, DWORD *VAR_13,
                 WCHAR **VAR_14, DWORD *VAR_15,
                 BOOL VAR_16)
{
    DWORD VAR_17;
    DWORD VAR_18;
    DWORD VAR_19;
    DWORD VAR_20;
    DWORD VAR_21;
    BOOL VAR_22;
    LONG VAR_23;
    WCHAR VAR_24[] = {'\r','\n','[','%','s',']','\r','\n',0};


    if (FUNC_13(VAR_7, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                        &VAR_17, ((void*)0),
                        ((void*)0), &VAR_18, &VAR_19, ((void*)0), ((void*)0)
                       ) != VAR_2) {
        FUNC_5();
    }
    VAR_20 = FUNC_19(*VAR_8);
    FUNC_7(VAR_8, VAR_9,
                               VAR_17 + VAR_20 + 1);
    FUNC_7(VAR_10, VAR_11,
                               VAR_18);
    FUNC_6(VAR_12, VAR_13, VAR_19);
    FUNC_7(VAR_14, VAR_15, FUNC_17(*VAR_8) + 4);

    FUNC_18(*VAR_14, VAR_24, *VAR_8);
    FUNC_8(VAR_6, *VAR_14, VAR_16);


    VAR_21 = 0;
    VAR_22 = VAR_4;
    while(VAR_22) {
        DWORD VAR_25;
        DWORD VAR_26 = *VAR_11;
        DWORD VAR_27 = *VAR_13;
        VAR_23 = FUNC_11(VAR_7, VAR_21, *VAR_10, &VAR_26, ((void*)0),
                           &VAR_25, *VAR_12, &VAR_27);
        if (VAR_23 == VAR_0) {

            FUNC_7(VAR_10, VAR_11, VAR_26);
            FUNC_6(VAR_12, VAR_13, VAR_27);
        } else if (VAR_23 != VAR_2) {
            VAR_22 = VAR_3;
            if (VAR_23 != VAR_1) {
                FUNC_5();
            }
        } else {
            DWORD VAR_28;
            VAR_21++;

            if ((*VAR_10)[0]) {
                const WCHAR VAR_29[] = {'"','%','s','"','=',0};

                VAR_28 = 0;
                FUNC_4(VAR_14, VAR_15, &VAR_28, *VAR_10, FUNC_17(*VAR_10));
                FUNC_7(VAR_10, VAR_11, FUNC_17(*VAR_14) + 1);
                FUNC_16(*VAR_10, *VAR_14);

                VAR_28 = 3 + FUNC_17(*VAR_10);
                FUNC_7(VAR_14, VAR_15, VAR_28);
                FUNC_18(*VAR_14, VAR_29, *VAR_10);
            } else {
                const WCHAR VAR_30[] = {'@','=',0};
                VAR_28 = 2;
                FUNC_7(VAR_14, VAR_15, VAR_28);
                FUNC_16(*VAR_14, VAR_30);
            }

            switch (VAR_25) {
            case 128:
            {
                WCHAR* VAR_31 = (WCHAR*)*VAR_12;

                if (VAR_27 < sizeof(WCHAR) || VAR_27 % sizeof(WCHAR) ||
                    VAR_31[VAR_27 / sizeof(WCHAR) - 1]) {
                    FUNC_3(VAR_14, VAR_15, &VAR_28, VAR_25, *VAR_12, VAR_27, VAR_16);
                } else {
                    const WCHAR VAR_32[] = {'"',0};
                    const WCHAR VAR_33[] = {'"','\r','\n',0};
                    DWORD VAR_34;

                    VAR_34 = FUNC_17(VAR_32);
                    FUNC_7(VAR_14, VAR_15, VAR_28 + VAR_34);
                    FUNC_16(*VAR_14 + VAR_28, VAR_32);
                    VAR_28 += VAR_34;




                    FUNC_4(VAR_14, VAR_15, &VAR_28, VAR_31, VAR_27 / sizeof(WCHAR) - 1);

                    FUNC_7(VAR_14, VAR_15, VAR_28 + FUNC_17(VAR_33));
                    FUNC_16(*VAR_14 + VAR_28, VAR_33);
                }
                break;
            }

            case 131:
            {
                WCHAR VAR_35[] = {'d','w','o','r','d',':','%','0','8','x','\r','\n',0};

                FUNC_7(VAR_14, VAR_15, VAR_28 + 15);
                FUNC_18(*VAR_14 + VAR_28, VAR_35, *((DWORD *)*VAR_12));
                break;
            }

            default:
            {
                char* VAR_36 = FUNC_0(*VAR_8);
                char* VAR_37 = FUNC_0(*VAR_10);
                FUNC_14(VAR_5,"%S: warning - unsupported registry format '%ld', "
                        "treat as binary\n",
                        FUNC_15(), VAR_25);
                FUNC_14(VAR_5,"key name: \"%s\"\n", VAR_36);
                FUNC_14(VAR_5,"value name:\"%s\"\n\n", VAR_37);
                FUNC_2(FUNC_1(), 0, VAR_36);
                FUNC_2(FUNC_1(), 0, VAR_37);
            }

            case 130:
            case 129:

            case 132:
                FUNC_3(VAR_14, VAR_15, &VAR_28, VAR_25, *VAR_12, VAR_27, VAR_16);
            }
            FUNC_8(VAR_6, *VAR_14, VAR_16);
        }
    }

    VAR_21 = 0;
    VAR_22 = VAR_4;
    (*VAR_8)[VAR_20] = '\\';
    while(VAR_22) {
        DWORD VAR_38 = *VAR_9 - VAR_20 - 1;

        VAR_23 = FUNC_10(VAR_7, VAR_21, *VAR_8 + VAR_20 + 1, &VAR_38,
                           ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        if (VAR_23 == VAR_0) {

            FUNC_7(VAR_8, VAR_9, VAR_20 + 1 + VAR_38);
        } else if (VAR_23 != VAR_2) {
            VAR_22 = VAR_3;
            if (VAR_23 != VAR_1) {
                FUNC_5();
            }
        } else {
            HKEY VAR_39;

            VAR_21++;
            if (FUNC_12(VAR_7, *VAR_8 + VAR_20 + 1,
                           &VAR_39) == VAR_2) {
                FUNC_20(VAR_6, VAR_39, VAR_8, VAR_9,
                            VAR_10, VAR_11, VAR_12, VAR_13,
                            VAR_14, VAR_15, VAR_16);
                FUNC_9(VAR_39);
            } else {
                FUNC_5();
            }
        }
    }
    (*VAR_8)[VAR_20] = '\0';
}
