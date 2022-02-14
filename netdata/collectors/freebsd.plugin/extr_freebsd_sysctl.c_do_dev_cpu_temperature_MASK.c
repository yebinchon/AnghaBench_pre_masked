
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef int collected_number ;
typedef int RRDSET ;
typedef int RRDDIM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int*,int,int*,int) ;
 int FUNC_2 (int*,int ,int) ;
 int VAR_4 ;
 void* FUNC_3 (int*,int) ;
 int * FUNC_4 (int *,char*,int *,int,int,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int * FUNC_6 (char*,char*,int *,char*,char*,char*,char*,char*,char*,int ,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,char*,int) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(int VAR_5, usec_t VAR_6) {
    (void)VAR_6;

    int VAR_7;
    static int *VAR_8 = ((void*)0);
    static int *VAR_9 = ((void*)0);
    static int VAR_10 = 0;
    char VAR_11[VAR_0 + 21];
    char VAR_12[VAR_0 + 9];

    if (FUNC_10(VAR_4 != VAR_10)) {
        VAR_9 = FUNC_3(VAR_9, sizeof(int) * VAR_4);
        VAR_8 = FUNC_3(VAR_8, sizeof(int) * VAR_4 * 4);
        if (FUNC_10(VAR_4 > VAR_10))
            FUNC_2(&VAR_8[VAR_10 * 4], 0, sizeof(int) * (VAR_4 - VAR_10) * 4);
    }
    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        if (FUNC_10(!(VAR_8[VAR_7 * 4])))
            FUNC_9(VAR_11, "dev.cpu.%d.temperature", VAR_7);
        if (FUNC_10(FUNC_1(VAR_11, &VAR_8[VAR_7 * 4], 4, &VAR_9[VAR_7], sizeof(int)))) {
            FUNC_0("DISABLED: cpu.temperature chart");
            FUNC_0("DISABLED: dev.cpu.temperature module");
            return 1;
        }
    }



    static RRDSET *VAR_13;
    static RRDDIM **VAR_14;

    if (FUNC_10(VAR_4 != VAR_10)) {
        VAR_14 = FUNC_3(*VAR_14, sizeof(RRDDIM) * VAR_4);
        if (FUNC_10(VAR_4 > VAR_10))
            FUNC_2(VAR_14[VAR_10], 0, sizeof(RRDDIM) * (VAR_4 - VAR_10));
    }

    if (FUNC_10(!VAR_13)) {
        VAR_13 = FUNC_6(
                "cpu",
                "temperature",
                ((void*)0),
                "temperature",
                "cpu.temperatute",
                "Core temperature",
                "Celsius",
                "freebsd.plugin",
                "dev.cpu.temperature",
                VAR_1,
                VAR_5,
                VAR_2
        );
    }
    else FUNC_8(VAR_13);

    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        if (FUNC_10(!VAR_14[VAR_7])) {
            FUNC_9(VAR_12, "cpu%d.temp", VAR_7);
            VAR_14[VAR_7] = FUNC_4(VAR_13, VAR_12, ((void*)0), 1, 1, VAR_3);
        }

        FUNC_5(VAR_13, VAR_14[VAR_7], (collected_number) ((double)VAR_9[VAR_7] / 10 - 273.15));
    }

    FUNC_7(VAR_13);

    VAR_10 = VAR_4;

    return 0;
}
