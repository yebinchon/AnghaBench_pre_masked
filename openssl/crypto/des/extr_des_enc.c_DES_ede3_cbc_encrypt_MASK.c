
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DES_key_schedule ;
typedef unsigned char* DES_cblock ;
typedef int DES_LONG ;


 int FUNC_0 (int *,int *,int *,int *) ;
 int FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 (unsigned char const*,int ) ;
 int FUNC_3 (unsigned char const*,int ,int ,long) ;
 int FUNC_4 (int ,unsigned char*) ;
 int FUNC_5 (int ,int ,unsigned char*,long) ;

void FUNC_6(const unsigned char *VAR_0, unsigned char *VAR_1,
                          long VAR_2, DES_key_schedule *VAR_3,
                          DES_key_schedule *VAR_4, DES_key_schedule *VAR_5,
                          DES_cblock *VAR_6, int VAR_7)
{
    register DES_LONG VAR_8, VAR_9;
    register DES_LONG VAR_10, VAR_11, VAR_12, VAR_13;
    register const unsigned char *VAR_14;
    unsigned char *VAR_15;
    register long VAR_16 = VAR_2;
    DES_LONG VAR_17[2];
    unsigned char *VAR_18;

    VAR_14 = VAR_0;
    VAR_15 = VAR_1;
    VAR_18 = &(*VAR_6)[0];

    if (VAR_7) {
        FUNC_2(VAR_18, VAR_10);
        FUNC_2(VAR_18, VAR_11);
        for (VAR_16 -= 8; VAR_16 >= 0; VAR_16 -= 8) {
            FUNC_2(VAR_14, VAR_8);
            FUNC_2(VAR_14, VAR_9);
            VAR_8 ^= VAR_10;
            VAR_9 ^= VAR_11;

            VAR_17[0] = VAR_8;
            VAR_17[1] = VAR_9;
            FUNC_1((DES_LONG *)VAR_17, VAR_3, VAR_4, VAR_5);
            VAR_10 = VAR_17[0];
            VAR_11 = VAR_17[1];

            FUNC_4(VAR_10, VAR_15);
            FUNC_4(VAR_11, VAR_15);
        }
        if (VAR_16 != -8) {
            FUNC_3(VAR_14, VAR_8, VAR_9, VAR_16 + 8);
            VAR_8 ^= VAR_10;
            VAR_9 ^= VAR_11;

            VAR_17[0] = VAR_8;
            VAR_17[1] = VAR_9;
            FUNC_1((DES_LONG *)VAR_17, VAR_3, VAR_4, VAR_5);
            VAR_10 = VAR_17[0];
            VAR_11 = VAR_17[1];

            FUNC_4(VAR_10, VAR_15);
            FUNC_4(VAR_11, VAR_15);
        }
        VAR_18 = &(*VAR_6)[0];
        FUNC_4(VAR_10, VAR_18);
        FUNC_4(VAR_11, VAR_18);
    } else {
        register DES_LONG VAR_19, VAR_20;

        FUNC_2(VAR_18, VAR_12);
        FUNC_2(VAR_18, VAR_13);
        for (VAR_16 -= 8; VAR_16 >= 0; VAR_16 -= 8) {
            FUNC_2(VAR_14, VAR_8);
            FUNC_2(VAR_14, VAR_9);

            VAR_19 = VAR_8;
            VAR_20 = VAR_9;

            VAR_17[0] = VAR_8;
            VAR_17[1] = VAR_9;
            FUNC_0((DES_LONG *)VAR_17, VAR_3, VAR_4, VAR_5);
            VAR_10 = VAR_17[0];
            VAR_11 = VAR_17[1];

            VAR_10 ^= VAR_12;
            VAR_11 ^= VAR_13;
            FUNC_4(VAR_10, VAR_15);
            FUNC_4(VAR_11, VAR_15);
            VAR_12 = VAR_19;
            VAR_13 = VAR_20;
        }
        if (VAR_16 != -8) {
            FUNC_2(VAR_14, VAR_8);
            FUNC_2(VAR_14, VAR_9);

            VAR_19 = VAR_8;
            VAR_20 = VAR_9;

            VAR_17[0] = VAR_8;
            VAR_17[1] = VAR_9;
            FUNC_0((DES_LONG *)VAR_17, VAR_3, VAR_4, VAR_5);
            VAR_10 = VAR_17[0];
            VAR_11 = VAR_17[1];

            VAR_10 ^= VAR_12;
            VAR_11 ^= VAR_13;
            FUNC_5(VAR_10, VAR_11, VAR_15, VAR_16 + 8);
            VAR_12 = VAR_19;
            VAR_13 = VAR_20;
        }

        VAR_18 = &(*VAR_6)[0];
        FUNC_4(VAR_12, VAR_18);
        FUNC_4(VAR_13, VAR_18);
    }
    VAR_8 = VAR_9 = VAR_10 = VAR_11 = VAR_12 = VAR_13 = 0;
    VAR_17[0] = VAR_17[1] = 0;
}
