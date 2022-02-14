
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TCHAR ;
typedef scalar_t__ HKEY ;
typedef int FILE ;
typedef int DWORD ;
typedef scalar_t__ BYTE ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,scalar_t__*) ;
 int VAR_6 ;
 int * FUNC_4 (scalar_t__*) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__**,int*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__*,scalar_t__*) ;
 int VAR_9 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (scalar_t__*,scalar_t__*) ;
 int FUNC_11 (scalar_t__*) ;
 int FUNC_12 (int ,scalar_t__*) ;
 int FUNC_13 (int *,scalar_t__,scalar_t__**,int*,scalar_t__**,int*,scalar_t__**,int*) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (scalar_t__*) ;
 scalar_t__* FUNC_16 (scalar_t__*) ;
 scalar_t__* VAR_10 ;
 scalar_t__** VAR_11 ;

BOOL FUNC_17(TCHAR* VAR_12, TCHAR* VAR_13)
{
    HKEY VAR_14;

    TCHAR *VAR_15;
    TCHAR *VAR_16;
    BYTE *VAR_17;
    DWORD VAR_18 = VAR_6;
    DWORD VAR_19 = VAR_6;
    DWORD VAR_20 = VAR_8;
    FILE *VAR_21 = ((void*)0);



    VAR_15 = FUNC_2(FUNC_1(), 0, VAR_18 * sizeof(*VAR_15));
    VAR_16 = FUNC_2(FUNC_1(), 0, VAR_19 * sizeof(*VAR_16));
    VAR_17 = FUNC_2(FUNC_1(), 0, VAR_20);
    FUNC_0(VAR_15 && VAR_16 && VAR_17);

    if (VAR_13 && VAR_13[0]) {
        TCHAR *VAR_22;
        HKEY VAR_23;

        FUNC_6(&VAR_15, &VAR_18,
                                   FUNC_11(VAR_13));
        FUNC_10(VAR_15, VAR_13);


        VAR_14 = FUNC_15(VAR_13);
        if (VAR_14 == (HKEY)VAR_0) {
            FUNC_12(FUNC_9("Incorrect registry class specification in '%s\n"), VAR_13);

            return VAR_2;
        }
        VAR_22 = FUNC_16(VAR_13);
        FUNC_0(VAR_22);
        if (!VAR_22[0]) {

            VAR_21 = FUNC_4(VAR_12);
            FUNC_13(VAR_21, VAR_14,
                        &VAR_15, &VAR_18,
                        &VAR_16, &VAR_19,
                        &VAR_17, &VAR_20);
        } else if (FUNC_8(VAR_14, VAR_22, &VAR_23) == VAR_1) {
            VAR_21 = FUNC_4(VAR_12);
            FUNC_13(VAR_21, VAR_23,
                        &VAR_15, &VAR_18,
                        &VAR_16, &VAR_19,
                        &VAR_17, &VAR_20);
            FUNC_7(VAR_23);
        } else {
            FUNC_12(FUNC_9("Can't export. Registry key '%s does not exist!\n"), VAR_13);
            FUNC_5();
        }
        FUNC_3(FUNC_1(), 0, VAR_22);
    } else {
        int VAR_24;


        VAR_21 = FUNC_4(VAR_12);
        for (VAR_24 = 0; VAR_24 < VAR_7; VAR_24++) {

            if (VAR_10[VAR_24] != VAR_3 &&
                VAR_10[VAR_24] != VAR_5 &&
                VAR_10[VAR_24] != VAR_4) {
                FUNC_10(VAR_15, VAR_11[VAR_24]);
                FUNC_13(VAR_21, VAR_10[VAR_24],
                            &VAR_15, &VAR_18,
                            &VAR_16, &VAR_19,
                            &VAR_17, &VAR_20);
            }
        }
    }
    if (VAR_21) {
        FUNC_14(VAR_21);
    }

    FUNC_3(FUNC_1(), 0, VAR_17);
    FUNC_3(FUNC_1(), 0, VAR_16);
    FUNC_3(FUNC_1(), 0, VAR_15);
    return VAR_9;
}
