
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sh ;
typedef int DES_key_schedule ;
typedef unsigned char* DES_cblock ;
typedef unsigned int DES_LONG ;


 int VAR_0 ;
 int FUNC_0 (unsigned int*,int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*,unsigned int) ;
 int FUNC_3 (unsigned char const*,unsigned int,unsigned int,int) ;
 int FUNC_4 (unsigned int,unsigned char*) ;
 int FUNC_5 (unsigned int,unsigned int,unsigned char*,int) ;
 int FUNC_6 (unsigned char*,unsigned char*,int) ;

void FUNC_7(const unsigned char *VAR_1, unsigned char *VAR_2, int VAR_3,
                     long VAR_4, DES_key_schedule *VAR_5,
                     DES_cblock *VAR_6, int VAR_7)
{
    register DES_LONG VAR_8, VAR_9, VAR_10, VAR_11;
    register unsigned long VAR_12 = VAR_4;
    register int VAR_13 = VAR_3 / 8, VAR_14 = (VAR_3 + 7) / 8, VAR_15, VAR_16 =
        VAR_3 % 8;
    DES_LONG VAR_17[2];
    unsigned char *VAR_18;

    unsigned char VAR_19[16];
    if (VAR_3 <= 0 || VAR_3 > 64)
        return;
    VAR_18 = &(*VAR_6)[0];
    FUNC_2(VAR_18, VAR_10);
    FUNC_2(VAR_18, VAR_11);
    if (VAR_7) {
        while (VAR_12 >= (unsigned long)VAR_14) {
            VAR_12 -= VAR_14;
            VAR_17[0] = VAR_10;
            VAR_17[1] = VAR_11;
            FUNC_0((DES_LONG *)VAR_17, VAR_5, VAR_0);
            FUNC_3(VAR_1, VAR_8, VAR_9, VAR_14);
            VAR_1 += VAR_14;
            VAR_8 ^= VAR_17[0];
            VAR_9 ^= VAR_17[1];
            FUNC_5(VAR_8, VAR_9, VAR_2, VAR_14);
            VAR_2 += VAR_14;




            if (VAR_3 == 32) {
                VAR_10 = VAR_11;
                VAR_11 = VAR_8;
            } else if (VAR_3 == 64) {
                VAR_10 = VAR_8;
                VAR_11 = VAR_9;
            } else {

                VAR_18 = &VAR_19[0];
                FUNC_4(VAR_10, VAR_18);
                FUNC_4(VAR_11, VAR_18);
                FUNC_4(VAR_8, VAR_18);
                FUNC_4(VAR_9, VAR_18);



                if (VAR_16 == 0)
                    FUNC_6(VAR_19, VAR_19 + VAR_13, 8);
                else
                    for (VAR_15 = 0; VAR_15 < 8; ++VAR_15)
                        VAR_19[VAR_15] = VAR_19[VAR_15 + VAR_13] << VAR_16 |
                            VAR_19[VAR_15 + VAR_13 + 1] >> (8 - VAR_16);



                VAR_18 = &VAR_19[0];
                FUNC_2(VAR_18, VAR_10);
                FUNC_2(VAR_18, VAR_11);

            }
        }
    } else {
        while (VAR_12 >= (unsigned long)VAR_14) {
            VAR_12 -= VAR_14;
            VAR_17[0] = VAR_10;
            VAR_17[1] = VAR_11;
            FUNC_0((DES_LONG *)VAR_17, VAR_5, VAR_0);
            FUNC_3(VAR_1, VAR_8, VAR_9, VAR_14);
            VAR_1 += VAR_14;




            if (VAR_3 == 32) {
                VAR_10 = VAR_11;
                VAR_11 = VAR_8;
            } else if (VAR_3 == 64) {
                VAR_10 = VAR_8;
                VAR_11 = VAR_9;
            } else {

                VAR_18 = &VAR_19[0];
                FUNC_4(VAR_10, VAR_18);
                FUNC_4(VAR_11, VAR_18);
                FUNC_4(VAR_8, VAR_18);
                FUNC_4(VAR_9, VAR_18);



                if (VAR_16 == 0)
                    FUNC_6(VAR_19, VAR_19 + VAR_13, 8);
                else
                    for (VAR_15 = 0; VAR_15 < 8; ++VAR_15)
                        VAR_19[VAR_15] = VAR_19[VAR_15 + VAR_13] << VAR_16 |
                            VAR_19[VAR_15 + VAR_13 + 1] >> (8 - VAR_16);



                VAR_18 = &VAR_19[0];
                FUNC_2(VAR_18, VAR_10);
                FUNC_2(VAR_18, VAR_11);

            }
            VAR_8 ^= VAR_17[0];
            VAR_9 ^= VAR_17[1];
            FUNC_5(VAR_8, VAR_9, VAR_2, VAR_14);
            VAR_2 += VAR_14;
        }
    }
    VAR_18 = &(*VAR_6)[0];
    FUNC_4(VAR_10, VAR_18);
    FUNC_4(VAR_11, VAR_18);
    VAR_10 = VAR_11 = VAR_8 = VAR_9 = VAR_17[0] = VAR_17[1] = 0;
}
