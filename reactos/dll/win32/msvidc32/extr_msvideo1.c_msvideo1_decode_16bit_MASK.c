
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 unsigned short FUNC_1 (unsigned char const*) ;

__attribute__((used)) static void
FUNC_2( int VAR_0, int VAR_1, const unsigned char *VAR_2, int VAR_3,
                       unsigned short *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;
    int VAR_8;
    int VAR_9, VAR_10;
    int VAR_11, VAR_12;
    int VAR_13, VAR_14;
    int VAR_15;
    int VAR_16;


    int VAR_17;
    unsigned char VAR_18, VAR_19;
    unsigned short VAR_20;
    int VAR_21;
    unsigned short VAR_22[8];

    VAR_17 = 0;
    VAR_21 = 0;
    VAR_13 = VAR_0 / 4;
    VAR_14 = VAR_1 / 4;
    VAR_8 = VAR_13 * VAR_14;
    VAR_15 = 4;



    VAR_16 = - (VAR_5 - 4);


    for (VAR_12 = VAR_14; VAR_12 > 0; VAR_12--) {



        VAR_6 = ((VAR_14 - VAR_12) * 4) * VAR_5;

        for (VAR_11 = VAR_13; VAR_11 > 0; VAR_11--) {

            if (VAR_21) {
                VAR_6 += VAR_15;
                VAR_21--;
                VAR_8--;
                continue;
            }

            VAR_7 = VAR_6;


            FUNC_0(2);
            VAR_18 = VAR_2[VAR_17++];
            VAR_19 = VAR_2[VAR_17++];


            if ((VAR_18 == 0) && (VAR_19 == 0) && (VAR_8 == 0)) {
                return;
            } else if ((VAR_19 & 0xFC) == 0x84) {

                VAR_21 = ((VAR_19 - 0x84) << 8) + VAR_18 - 1;
            } else if (VAR_19 < 0x80) {

                VAR_20 = (VAR_19 << 8) | VAR_18;

                FUNC_0(4);
                VAR_22[0] = FUNC_1(&VAR_2[VAR_17]);
                VAR_17 += 2;
                VAR_22[1] = FUNC_1(&VAR_2[VAR_17]);
                VAR_17 += 2;

                if (VAR_22[0] & 0x8000) {

                    FUNC_0(12);
                    VAR_22[2] = FUNC_1(&VAR_2[VAR_17]);
                    VAR_17 += 2;
                    VAR_22[3] = FUNC_1(&VAR_2[VAR_17]);
                    VAR_17 += 2;
                    VAR_22[4] = FUNC_1(&VAR_2[VAR_17]);
                    VAR_17 += 2;
                    VAR_22[5] = FUNC_1(&VAR_2[VAR_17]);
                    VAR_17 += 2;
                    VAR_22[6] = FUNC_1(&VAR_2[VAR_17]);
                    VAR_17 += 2;
                    VAR_22[7] = FUNC_1(&VAR_2[VAR_17]);
                    VAR_17 += 2;

                    for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
                        for (VAR_9 = 0; VAR_9 < 4; VAR_9++, VAR_20 >>= 1)
                            VAR_4[VAR_7++] =
                                VAR_22[((VAR_10 & 0x2) << 1) +
                                    (VAR_9 & 0x2) + ((VAR_20 & 0x1) ^ 1)];
                        VAR_7 -= VAR_16;
                    }
                } else {

                    for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
                        for (VAR_9 = 0; VAR_9 < 4; VAR_9++, VAR_20 >>= 1)
                            VAR_4[VAR_7++] = VAR_22[(VAR_20 & 0x1) ^ 1];
                        VAR_7 -= VAR_16;
                    }
                }
            } else {

                VAR_22[0] = (VAR_19 << 8) | VAR_18;

                for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
                    for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
                        VAR_4[VAR_7++] = VAR_22[0];
                    VAR_7 -= VAR_16;
                }
            }

            VAR_6 += VAR_15;
            VAR_8--;
        }
    }
}
