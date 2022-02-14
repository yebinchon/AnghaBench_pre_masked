
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DES_key_schedule ;
typedef unsigned char* DES_cblock ;
typedef int DES_LONG ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int *,int ) ;
 int FUNC_1 (unsigned char const*,int) ;
 int FUNC_2 (unsigned char const*,int,int,long) ;
 int FUNC_3 (int,unsigned char*) ;
 int FUNC_4 (int,int,unsigned char*,long) ;

void FUNC_5(const unsigned char *VAR_2, unsigned char *VAR_3,
                      long VAR_4, DES_key_schedule *VAR_5,
                      DES_cblock *VAR_6, int VAR_7)
{
    register DES_LONG VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    DES_LONG VAR_14[2];
    const unsigned char *VAR_15;
    unsigned char *VAR_16, *VAR_17;

    VAR_15 = VAR_2;
    VAR_16 = VAR_3;
    VAR_17 = &(*VAR_6)[0];

    if (VAR_7) {
        FUNC_1(VAR_17, VAR_10);
        FUNC_1(VAR_17, VAR_11);
        for (; VAR_4 > 0; VAR_4 -= 8) {
            if (VAR_4 >= 8) {
                FUNC_1(VAR_15, VAR_8);
                FUNC_1(VAR_15, VAR_9);
            } else
                FUNC_2(VAR_15, VAR_8, VAR_9, VAR_4);
            VAR_14[0] = VAR_8 ^ VAR_10;
            VAR_14[1] = VAR_9 ^ VAR_11;
            FUNC_0((DES_LONG *)VAR_14, VAR_5, VAR_1);
            VAR_12 = VAR_14[0];
            VAR_13 = VAR_14[1];
            VAR_10 = VAR_8 ^ VAR_12;
            VAR_11 = VAR_9 ^ VAR_13;
            FUNC_3(VAR_12, VAR_16);
            FUNC_3(VAR_13, VAR_16);
        }
    } else {
        FUNC_1(VAR_17, VAR_10);
        FUNC_1(VAR_17, VAR_11);
        for (; VAR_4 > 0; VAR_4 -= 8) {
            FUNC_1(VAR_15, VAR_8);
            FUNC_1(VAR_15, VAR_9);
            VAR_14[0] = VAR_8;
            VAR_14[1] = VAR_9;
            FUNC_0((DES_LONG *)VAR_14, VAR_5, VAR_0);
            VAR_12 = VAR_14[0] ^ VAR_10;
            VAR_13 = VAR_14[1] ^ VAR_11;
            if (VAR_4 >= 8) {
                FUNC_3(VAR_12, VAR_16);
                FUNC_3(VAR_13, VAR_16);
            } else
                FUNC_4(VAR_12, VAR_13, VAR_16, VAR_4);
            VAR_10 = VAR_12 ^ VAR_8;
            VAR_11 = VAR_13 ^ VAR_9;
        }
    }
    VAR_14[0] = VAR_14[1] = 0;
    VAR_8 = VAR_9 = VAR_10 = VAR_11 = VAR_12 = VAR_13 = 0;
}
