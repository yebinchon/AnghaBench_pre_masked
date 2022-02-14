
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RC5_32_KEY ;


 int FUNC_0 (unsigned long*,int *) ;
 int FUNC_1 (unsigned long*,int *) ;
 int FUNC_2 (unsigned char const*,unsigned long) ;
 int FUNC_3 (unsigned char const*,unsigned long,unsigned long,long) ;
 int FUNC_4 (unsigned long,unsigned char*) ;
 int FUNC_5 (unsigned long,unsigned long,unsigned char*,long) ;

void FUNC_6(const unsigned char *VAR_0, unsigned char *VAR_1,
                        long VAR_2, RC5_32_KEY *VAR_3, unsigned char *VAR_4,
                        int VAR_5)
{
    register unsigned long VAR_6, VAR_7;
    register unsigned long VAR_8, VAR_9, VAR_10, VAR_11;
    register long VAR_12 = VAR_2;
    unsigned long VAR_13[2];

    if (VAR_5) {
        FUNC_2(VAR_4, VAR_8);
        FUNC_2(VAR_4, VAR_9);
        VAR_4 -= 8;
        for (VAR_12 -= 8; VAR_12 >= 0; VAR_12 -= 8) {
            FUNC_2(VAR_0, VAR_6);
            FUNC_2(VAR_0, VAR_7);
            VAR_6 ^= VAR_8;
            VAR_7 ^= VAR_9;
            VAR_13[0] = VAR_6;
            VAR_13[1] = VAR_7;
            FUNC_1(VAR_13, VAR_3);
            VAR_8 = VAR_13[0];
            FUNC_4(VAR_8, VAR_1);
            VAR_9 = VAR_13[1];
            FUNC_4(VAR_9, VAR_1);
        }
        if (VAR_12 != -8) {
            FUNC_3(VAR_0, VAR_6, VAR_7, VAR_12 + 8);
            VAR_6 ^= VAR_8;
            VAR_7 ^= VAR_9;
            VAR_13[0] = VAR_6;
            VAR_13[1] = VAR_7;
            FUNC_1(VAR_13, VAR_3);
            VAR_8 = VAR_13[0];
            FUNC_4(VAR_8, VAR_1);
            VAR_9 = VAR_13[1];
            FUNC_4(VAR_9, VAR_1);
        }
        FUNC_4(VAR_8, VAR_4);
        FUNC_4(VAR_9, VAR_4);
    } else {
        FUNC_2(VAR_4, VAR_10);
        FUNC_2(VAR_4, VAR_11);
        VAR_4 -= 8;
        for (VAR_12 -= 8; VAR_12 >= 0; VAR_12 -= 8) {
            FUNC_2(VAR_0, VAR_6);
            VAR_13[0] = VAR_6;
            FUNC_2(VAR_0, VAR_7);
            VAR_13[1] = VAR_7;
            FUNC_0(VAR_13, VAR_3);
            VAR_8 = VAR_13[0] ^ VAR_10;
            VAR_9 = VAR_13[1] ^ VAR_11;
            FUNC_4(VAR_8, VAR_1);
            FUNC_4(VAR_9, VAR_1);
            VAR_10 = VAR_6;
            VAR_11 = VAR_7;
        }
        if (VAR_12 != -8) {
            FUNC_2(VAR_0, VAR_6);
            VAR_13[0] = VAR_6;
            FUNC_2(VAR_0, VAR_7);
            VAR_13[1] = VAR_7;
            FUNC_0(VAR_13, VAR_3);
            VAR_8 = VAR_13[0] ^ VAR_10;
            VAR_9 = VAR_13[1] ^ VAR_11;
            FUNC_5(VAR_8, VAR_9, VAR_1, VAR_12 + 8);
            VAR_10 = VAR_6;
            VAR_11 = VAR_7;
        }
        FUNC_4(VAR_10, VAR_4);
        FUNC_4(VAR_11, VAR_4);
    }
    VAR_6 = VAR_7 = VAR_8 = VAR_9 = VAR_10 = VAR_11 = 0;
    VAR_13[0] = VAR_13[1] = 0;
}
