
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DES_key_schedule ;
typedef unsigned char* DES_cblock ;
typedef int DES_LONG ;


 int FUNC_0 (int *,int *,int *,int *) ;
 int FUNC_1 (unsigned char*,int ) ;
 int FUNC_2 (unsigned char const*,int ,int ,unsigned long) ;
 int FUNC_3 (int ,unsigned char*) ;
 int FUNC_4 (int ,int ,unsigned char*,unsigned long) ;
 int FUNC_5 (unsigned char*,unsigned char*,int) ;

void FUNC_6(const unsigned char *VAR_0, unsigned char *VAR_1,
                          int VAR_2, long VAR_3, DES_key_schedule *VAR_4,
                          DES_key_schedule *VAR_5, DES_key_schedule *VAR_6,
                          DES_cblock *VAR_7, int VAR_8)
{
    register DES_LONG VAR_9, VAR_10, VAR_11, VAR_12;
    register unsigned long VAR_13 = VAR_3, VAR_14 = ((unsigned int)VAR_2 + 7) / 8;
    register int VAR_15 = VAR_2, VAR_16;
    DES_LONG VAR_17[2];
    unsigned char *VAR_18;
    unsigned char VAR_19[16];

    if (VAR_15 > 64)
        return;
    VAR_18 = &(*VAR_7)[0];
    FUNC_1(VAR_18, VAR_11);
    FUNC_1(VAR_18, VAR_12);
    if (VAR_8) {
        while (VAR_13 >= VAR_14) {
            VAR_13 -= VAR_14;
            VAR_17[0] = VAR_11;
            VAR_17[1] = VAR_12;
            FUNC_0(VAR_17, VAR_4, VAR_5, VAR_6);
            FUNC_2(VAR_0, VAR_9, VAR_10, VAR_14);
            VAR_0 += VAR_14;
            VAR_9 ^= VAR_17[0];
            VAR_10 ^= VAR_17[1];
            FUNC_4(VAR_9, VAR_10, VAR_1, VAR_14);
            VAR_1 += VAR_14;




            if (VAR_15 == 32) {
                VAR_11 = VAR_12;
                VAR_12 = VAR_9;
            } else if (VAR_15 == 64) {
                VAR_11 = VAR_9;
                VAR_12 = VAR_10;
            } else {
                VAR_18 = &VAR_19[0];
                FUNC_3(VAR_11, VAR_18);
                FUNC_3(VAR_12, VAR_18);
                FUNC_3(VAR_9, VAR_18);
                FUNC_3(VAR_10, VAR_18);

                FUNC_5(VAR_19, VAR_19 + VAR_15 / 8, 8 + (VAR_15 % 8 ? 1 : 0));

                if (VAR_15 % 8 != 0)
                    for (VAR_16 = 0; VAR_16 < 8; ++VAR_16) {
                        VAR_19[VAR_16] <<= VAR_15 % 8;
                        VAR_19[VAR_16] |= VAR_19[VAR_16 + 1] >> (8 - VAR_15 % 8);
                    }
                VAR_18 = &VAR_19[0];
                FUNC_1(VAR_18, VAR_11);
                FUNC_1(VAR_18, VAR_12);
            }
        }
    } else {
        while (VAR_13 >= VAR_14) {
            VAR_13 -= VAR_14;
            VAR_17[0] = VAR_11;
            VAR_17[1] = VAR_12;
            FUNC_0(VAR_17, VAR_4, VAR_5, VAR_6);
            FUNC_2(VAR_0, VAR_9, VAR_10, VAR_14);
            VAR_0 += VAR_14;




            if (VAR_15 == 32) {
                VAR_11 = VAR_12;
                VAR_12 = VAR_9;
            } else if (VAR_15 == 64) {
                VAR_11 = VAR_9;
                VAR_12 = VAR_10;
            } else {
                VAR_18 = &VAR_19[0];
                FUNC_3(VAR_11, VAR_18);
                FUNC_3(VAR_12, VAR_18);
                FUNC_3(VAR_9, VAR_18);
                FUNC_3(VAR_10, VAR_18);

                FUNC_5(VAR_19, VAR_19 + VAR_15 / 8, 8 + (VAR_15 % 8 ? 1 : 0));

                if (VAR_15 % 8 != 0)
                    for (VAR_16 = 0; VAR_16 < 8; ++VAR_16) {
                        VAR_19[VAR_16] <<= VAR_15 % 8;
                        VAR_19[VAR_16] |= VAR_19[VAR_16 + 1] >> (8 - VAR_15 % 8);
                    }
                VAR_18 = &VAR_19[0];
                FUNC_1(VAR_18, VAR_11);
                FUNC_1(VAR_18, VAR_12);
            }
            VAR_9 ^= VAR_17[0];
            VAR_10 ^= VAR_17[1];
            FUNC_4(VAR_9, VAR_10, VAR_1, VAR_14);
            VAR_1 += VAR_14;
        }
    }
    VAR_18 = &(*VAR_7)[0];
    FUNC_3(VAR_11, VAR_18);
    FUNC_3(VAR_12, VAR_18);
    VAR_11 = VAR_12 = VAR_9 = VAR_10 = VAR_17[0] = VAR_17[1] = 0;
}
