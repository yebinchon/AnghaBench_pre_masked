
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DES_key_schedule ;
typedef unsigned char* DES_cblock ;
typedef int DES_LONG ;


 int VAR_0 ;
 int FUNC_0 (int*,int *,int ) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char const*,int,int,int) ;
 int FUNC_3 (int,unsigned char*) ;
 int FUNC_4 (int,int,unsigned char*,int) ;

void FUNC_5(const unsigned char *VAR_1, unsigned char *VAR_2, int VAR_3,
                     long VAR_4, DES_key_schedule *VAR_5,
                     DES_cblock *VAR_6)
{
    register DES_LONG VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13 = (VAR_3 + 7) / 8;
    register DES_LONG VAR_14, VAR_15;
    register long VAR_16 = VAR_4;
    register int VAR_17 = VAR_3;
    DES_LONG VAR_18[2];
    unsigned char *VAR_19;

    if (VAR_17 > 64)
        return;
    if (VAR_17 > 32) {
        VAR_14 = 0xffffffffL;
        if (VAR_17 >= 64)
            VAR_15 = VAR_14;
        else
            VAR_15 = (1L << (VAR_17 - 32)) - 1;
    } else {
        if (VAR_17 == 32)
            VAR_14 = 0xffffffffL;
        else
            VAR_14 = (1L << VAR_17) - 1;
        VAR_15 = 0x00000000L;
    }

    VAR_19 = &(*VAR_6)[0];
    FUNC_1(VAR_19, VAR_11);
    FUNC_1(VAR_19, VAR_12);
    VAR_18[0] = VAR_11;
    VAR_18[1] = VAR_12;
    while (VAR_16-- > 0) {
        VAR_18[0] = VAR_11;
        VAR_18[1] = VAR_12;
        FUNC_0((DES_LONG *)VAR_18, VAR_5, VAR_0);
        VAR_9 = VAR_18[0];
        VAR_10 = VAR_18[1];
        FUNC_2(VAR_1, VAR_7, VAR_8, VAR_13);
        VAR_1 += VAR_13;
        VAR_7 = (VAR_7 ^ VAR_9) & VAR_14;
        VAR_8 = (VAR_8 ^ VAR_10) & VAR_15;
        FUNC_4(VAR_7, VAR_8, VAR_2, VAR_13);
        VAR_2 += VAR_13;

        if (VAR_17 == 32) {
            VAR_11 = VAR_12;
            VAR_12 = VAR_9;
        } else if (VAR_17 == 64) {
            VAR_11 = VAR_9;
            VAR_12 = VAR_10;
        } else if (VAR_17 > 32) {
            VAR_11 = ((VAR_12 >> (VAR_17 - 32)) | (VAR_9 << (64 - VAR_17))) & 0xffffffffL;
            VAR_12 = ((VAR_9 >> (VAR_17 - 32)) | (VAR_10 << (64 - VAR_17))) & 0xffffffffL;
        } else {

            VAR_11 = ((VAR_11 >> VAR_17) | (VAR_12 << (32 - VAR_17))) & 0xffffffffL;
            VAR_12 = ((VAR_12 >> VAR_17) | (VAR_9 << (32 - VAR_17))) & 0xffffffffL;
        }
    }
    VAR_19 = &(*VAR_6)[0];
    FUNC_3(VAR_11, VAR_19);
    FUNC_3(VAR_12, VAR_19);
    VAR_11 = VAR_12 = VAR_7 = VAR_8 = VAR_18[0] = VAR_18[1] = VAR_9 = VAR_10 = 0;
}
