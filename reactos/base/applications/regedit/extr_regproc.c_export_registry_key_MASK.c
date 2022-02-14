
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef scalar_t__ HKEY ;
typedef int FILE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ CHAR ;
typedef scalar_t__ BYTE ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__* FUNC_1 (scalar_t__*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__* FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,scalar_t__*) ;
 scalar_t__ VAR_5 ;
 int * FUNC_5 (scalar_t__*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__**,scalar_t__*,int ) ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__*,scalar_t__*) ;
 int VAR_9 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *,scalar_t__,scalar_t__**,scalar_t__*,scalar_t__**,scalar_t__*,scalar_t__**,scalar_t__*,scalar_t__**,scalar_t__*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,char*,int ,scalar_t__*) ;
 int FUNC_14 () ;
 int FUNC_15 (scalar_t__*,scalar_t__*) ;
 int FUNC_16 (scalar_t__*) ;
 int FUNC_17 (scalar_t__*,scalar_t__*,scalar_t__**) ;
 scalar_t__* VAR_10 ;
 scalar_t__** VAR_11 ;
 int VAR_12 ;

BOOL FUNC_18(WCHAR *VAR_13, WCHAR *VAR_14, DWORD VAR_15)
{
    WCHAR *VAR_16;
    WCHAR *VAR_17;
    BYTE *VAR_18;
    WCHAR *VAR_19;
    DWORD VAR_20 = VAR_5;
    DWORD VAR_21 = VAR_5;
    DWORD VAR_22 = VAR_8;
    DWORD VAR_23 = VAR_5 + VAR_8;
    FILE *VAR_24 = ((void*)0);
    BOOL VAR_25 = (VAR_15 == VAR_7);

    VAR_16 = FUNC_3(FUNC_2(), 0,
                                 VAR_20 * sizeof(*VAR_16));
    VAR_17 = FUNC_3(FUNC_2(), 0,
                             VAR_21 * sizeof(*VAR_17));
    VAR_18 = FUNC_3(FUNC_2(), 0, VAR_22);
    VAR_19 = FUNC_3(FUNC_2(), 0, VAR_23 * sizeof(*VAR_19));
    FUNC_0(VAR_16 && VAR_17 && VAR_18 && VAR_19);

    if (VAR_14 && VAR_14[0]) {
        HKEY VAR_26;
        WCHAR *VAR_27 = ((void*)0);
        HKEY VAR_28;

        FUNC_7(&VAR_16, &VAR_20,
                                   FUNC_16(VAR_14));
        FUNC_15(VAR_16, VAR_14);


        if (!FUNC_17(VAR_14, &VAR_26, &VAR_27)) {
            CHAR* VAR_29 = FUNC_1(VAR_14);
            FUNC_13(VAR_12,"%S: Incorrect registry class specification in '%s'\n",
                    FUNC_14(), VAR_29);
            FUNC_4(FUNC_2(), 0, VAR_29);
            FUNC_10(1);
        }
        if (!VAR_27[0]) {

            VAR_24 = FUNC_5(VAR_13, VAR_25);
            FUNC_11(VAR_24, VAR_26,
                        &VAR_16, &VAR_20,
                        &VAR_17, &VAR_21,
                        &VAR_18, &VAR_22, &VAR_19,
                        &VAR_23, VAR_25);
        } else if (FUNC_9(VAR_26, VAR_27, &VAR_28) == VAR_0) {
            VAR_24 = FUNC_5(VAR_13, VAR_25);
            FUNC_11(VAR_24, VAR_28,
                        &VAR_16, &VAR_20,
                        &VAR_17, &VAR_21,
                        &VAR_18, &VAR_22, &VAR_19,
                        &VAR_23, VAR_25);
            FUNC_8(VAR_28);
        } else {
            CHAR* VAR_30 = FUNC_1(VAR_14);
            FUNC_13(VAR_12,"%S: Can't export. Registry key '%s' does not exist!\n",
                    FUNC_14(), VAR_30);
            FUNC_4(FUNC_2(), 0, VAR_30);
            FUNC_6();
        }
    } else {
        unsigned int VAR_31;


        VAR_24 = FUNC_5(VAR_13, VAR_25);
        for (VAR_31 = 0; VAR_31 < VAR_6; VAR_31++) {

            if (VAR_10[VAR_31] != VAR_1 &&
                    VAR_10[VAR_31] != VAR_3 &&
                    VAR_10[VAR_31] != VAR_2 &&
                    VAR_10[VAR_31] != VAR_4) {
                FUNC_15(VAR_16, VAR_11[VAR_31]);
                FUNC_11(VAR_24, VAR_10[VAR_31],
                            &VAR_16, &VAR_20,
                            &VAR_17, &VAR_21,
                            &VAR_18, &VAR_22, &VAR_19,
                            &VAR_23, VAR_25);
            }
        }
    }

    if (VAR_24) {
        FUNC_12(VAR_24);
    }
    FUNC_4(FUNC_2(), 0, VAR_14);
    FUNC_4(FUNC_2(), 0, VAR_17);
    FUNC_4(FUNC_2(), 0, VAR_18);
    FUNC_4(FUNC_2(), 0, VAR_19);
    return VAR_9;
}
