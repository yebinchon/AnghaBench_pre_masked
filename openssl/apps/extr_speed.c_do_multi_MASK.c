
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,char*) ;
 double FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (int) ;
 double** VAR_1 ;
 int FUNC_7 (int) ;
 double** VAR_2 ;
 double** VAR_3 ;
 double** VAR_4 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int,char*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (char*,int,int *) ;
 scalar_t__ FUNC_13 () ;
 int VAR_5 ;
 int FUNC_14 (int*) ;
 int FUNC_15 (char*,...) ;
 double** VAR_6 ;
 double** VAR_7 ;
 double** VAR_8 ;
 int FUNC_16 (char**,char*) ;
 int VAR_9 ;
 char* FUNC_17 (char*,char) ;
 scalar_t__ FUNC_18 (char*,char*,int) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int FUNC_19(int VAR_11, int VAR_12)
{
    int VAR_13;
    int VAR_14[2];
    int *VAR_15;
    static char VAR_16[] = ":";

    VAR_15 = FUNC_3(sizeof(*VAR_15) * VAR_11, "fd buffer for do_multi");
    for (VAR_13 = 0; VAR_13 < VAR_11; ++VAR_13) {
        if (FUNC_14(VAR_14) == -1) {
            FUNC_1(VAR_0, "pipe failure\n");
            FUNC_8(1);
        }
        FUNC_11(VAR_9);
        (void)FUNC_0(VAR_0);
        if (FUNC_13()) {
            FUNC_6(VAR_14[1]);
            VAR_15[VAR_13] = VAR_14[0];
        } else {
            FUNC_6(VAR_14[0]);
            FUNC_6(1);
            if (FUNC_7(VAR_14[1]) == -1) {
                FUNC_1(VAR_0, "dup failed\n");
                FUNC_8(1);
            }
            FUNC_6(VAR_14[1]);
            VAR_5 = 1;
            VAR_10 = 0;
            FUNC_2(VAR_15);
            return 0;
        }
        FUNC_15("Forked child %d\n", VAR_13);
    }


    for (VAR_13 = 0; VAR_13 < VAR_11; ++VAR_13) {
        FILE *VAR_17;
        char VAR_18[1024];
        char *VAR_19;

        VAR_17 = FUNC_10(VAR_15[VAR_13], "r");
        while (FUNC_12(VAR_18, sizeof(VAR_18), VAR_17)) {
            VAR_19 = FUNC_17(VAR_18, '\n');
            if (VAR_19)
                *VAR_19 = '\0';
            if (VAR_18[0] != '+') {
                FUNC_1(VAR_0,
                           "Don't understand line '%s' from child %d\n", VAR_18,
                           VAR_13);
                continue;
            }
            FUNC_15("Got: %s from %d\n", VAR_18, VAR_13);
            if (FUNC_18(VAR_18, "+F:", 3) == 0) {
                int VAR_20;
                int VAR_21;

                VAR_19 = VAR_18 + 3;
                VAR_20 = FUNC_5(FUNC_16(&VAR_19, VAR_16));
                FUNC_16(&VAR_19, VAR_16);
                for (VAR_21 = 0; VAR_21 < VAR_12; ++VAR_21)
                    VAR_6[VAR_20][VAR_21] += FUNC_4(FUNC_16(&VAR_19, VAR_16));
            } else if (FUNC_18(VAR_18, "+F2:", 4) == 0) {
                int VAR_22;
                double VAR_23;

                VAR_19 = VAR_18 + 4;
                VAR_22 = FUNC_5(FUNC_16(&VAR_19, VAR_16));
                FUNC_16(&VAR_19, VAR_16);

                VAR_23 = FUNC_4(FUNC_16(&VAR_19, VAR_16));
                VAR_7[VAR_22][0] += VAR_23;

                VAR_23 = FUNC_4(FUNC_16(&VAR_19, VAR_16));
                VAR_7[VAR_22][1] += VAR_23;
            }

            else if (FUNC_18(VAR_18, "+F3:", 4) == 0) {
                int VAR_24;
                double VAR_25;

                VAR_19 = VAR_18 + 4;
                VAR_24 = FUNC_5(FUNC_16(&VAR_19, VAR_16));
                FUNC_16(&VAR_19, VAR_16);

                VAR_25 = FUNC_4(FUNC_16(&VAR_19, VAR_16));
                VAR_1[VAR_24][0] += VAR_25;

                VAR_25 = FUNC_4(FUNC_16(&VAR_19, VAR_16));
                VAR_1[VAR_24][1] += VAR_25;
            }


            else if (FUNC_18(VAR_18, "+F4:", 4) == 0) {
                int VAR_26;
                double VAR_27;

                VAR_19 = VAR_18 + 4;
                VAR_26 = FUNC_5(FUNC_16(&VAR_19, VAR_16));
                FUNC_16(&VAR_19, VAR_16);

                VAR_27 = FUNC_4(FUNC_16(&VAR_19, VAR_16));
                VAR_3[VAR_26][0] += VAR_27;

                VAR_27 = FUNC_4(FUNC_16(&VAR_19, VAR_16));
                VAR_3[VAR_26][1] += VAR_27;
            } else if (FUNC_18(VAR_18, "+F5:", 4) == 0) {
                int VAR_28;
                double VAR_29;

                VAR_19 = VAR_18 + 4;
                VAR_28 = FUNC_5(FUNC_16(&VAR_19, VAR_16));
                FUNC_16(&VAR_19, VAR_16);

                VAR_29 = FUNC_4(FUNC_16(&VAR_19, VAR_16));
                VAR_2[VAR_28][0] += VAR_29;
            } else if (FUNC_18(VAR_18, "+F6:", 4) == 0) {
                int VAR_30;
                double VAR_31;

                VAR_19 = VAR_18 + 4;
                VAR_30 = FUNC_5(FUNC_16(&VAR_19, VAR_16));
                FUNC_16(&VAR_19, VAR_16);

                VAR_31 = FUNC_4(FUNC_16(&VAR_19, VAR_16));
                VAR_4[VAR_30][0] += VAR_31;

                VAR_31 = FUNC_4(FUNC_16(&VAR_19, VAR_16));
                VAR_4[VAR_30][1] += VAR_31;
            }

            else if (FUNC_18(VAR_18, "+F7:", 4) == 0) {
                int VAR_32;
                double VAR_33;

                VAR_19 = VAR_18 + 4;
                VAR_32 = FUNC_5(FUNC_16(&VAR_19, VAR_16));
                FUNC_16(&VAR_19, VAR_16);

                VAR_33 = FUNC_4(FUNC_16(&VAR_19, VAR_16));
                VAR_8[VAR_32][0] += VAR_33;

                VAR_33 = FUNC_4(FUNC_16(&VAR_19, VAR_16));
                VAR_8[VAR_32][1] += VAR_33;
            }



            else if (FUNC_18(VAR_18, "+H:", 3) == 0) {
                ;
            } else
                FUNC_1(VAR_0, "Unknown type '%s' from child %d\n", VAR_18,
                           VAR_13);
        }

        FUNC_9(VAR_17);
    }
    FUNC_2(VAR_15);
    return 1;
}
