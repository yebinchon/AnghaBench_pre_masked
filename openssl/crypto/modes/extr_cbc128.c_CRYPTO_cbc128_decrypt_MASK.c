
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* block128_f ) (unsigned char const*,unsigned char*,void const*) ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char const*,int) ;
 int FUNC_1 (unsigned char const*,unsigned char*,void const*) ;
 int FUNC_2 (unsigned char const*,unsigned char*,void const*) ;
 int FUNC_3 (unsigned char const*,unsigned char*,void const*) ;
 int FUNC_4 (unsigned char const*,unsigned char*,void const*) ;
 int FUNC_5 (unsigned char const*,unsigned char*,void const*) ;

void FUNC_6(const unsigned char *VAR_1, unsigned char *VAR_2,
                           size_t VAR_3, const void *VAR_4,
                           unsigned char VAR_5[16], block128_f VAR_6)
{
    size_t VAR_7;
    union {
        size_t t[16 / sizeof(size_t)];
        unsigned char c[16];
    } VAR_8;

    if (VAR_3 == 0)
        return;


    if (VAR_1 != VAR_2) {
        const unsigned char *VAR_9 = VAR_5;

        if (VAR_0 &&
            ((size_t)VAR_1 | (size_t)VAR_2 | (size_t)VAR_5) % sizeof(size_t) != 0) {
            while (VAR_3 >= 16) {
                (*VAR_6) (VAR_1, VAR_2, VAR_4);
                for (VAR_7 = 0; VAR_7 < 16; ++VAR_7)
                    VAR_2[VAR_7] ^= VAR_9[VAR_7];
                VAR_9 = VAR_1;
                VAR_3 -= 16;
                VAR_1 += 16;
                VAR_2 += 16;
            }
        } else if (16 % sizeof(size_t) == 0) {
            while (VAR_3 >= 16) {
                size_t *VAR_10 = (size_t *)VAR_2, *VAR_11 = (size_t *)VAR_9;

                (*VAR_6) (VAR_1, VAR_2, VAR_4);
                for (VAR_7 = 0; VAR_7 < 16 / sizeof(size_t); VAR_7++)
                    VAR_10[VAR_7] ^= VAR_11[VAR_7];
                VAR_9 = VAR_1;
                VAR_3 -= 16;
                VAR_1 += 16;
                VAR_2 += 16;
            }
        }
        FUNC_0(VAR_5, VAR_9, 16);
    } else {
        if (VAR_0 &&
            ((size_t)VAR_1 | (size_t)VAR_2 | (size_t)VAR_5) % sizeof(size_t) != 0) {
            unsigned char VAR_12;
            while (VAR_3 >= 16) {
                (*VAR_6) (VAR_1, VAR_8.c, VAR_4);
                for (VAR_7 = 0; VAR_7 < 16; ++VAR_7) {
                    VAR_12 = VAR_1[VAR_7];
                    VAR_2[VAR_7] = VAR_8.c[VAR_7] ^ VAR_5[VAR_7];
                    VAR_5[VAR_7] = VAR_12;
                }
                VAR_3 -= 16;
                VAR_1 += 16;
                VAR_2 += 16;
            }
        } else if (16 % sizeof(size_t) == 0) {
            while (VAR_3 >= 16) {
                size_t VAR_13, *VAR_14 = (size_t *)VAR_2, *VAR_15 = (size_t *)VAR_5;
                const size_t *VAR_16 = (const size_t *)VAR_1;

                (*VAR_6) (VAR_1, VAR_8.c, VAR_4);
                for (VAR_7 = 0; VAR_7 < 16 / sizeof(size_t); VAR_7++) {
                    VAR_13 = VAR_16[VAR_7];
                    VAR_14[VAR_7] = VAR_8.t[VAR_7] ^ VAR_15[VAR_7];
                    VAR_15[VAR_7] = VAR_13;
                }
                VAR_3 -= 16;
                VAR_1 += 16;
                VAR_2 += 16;
            }
        }
    }

    while (VAR_3) {
        unsigned char VAR_17;
        (*VAR_6) (VAR_1, VAR_8.c, VAR_4);
        for (VAR_7 = 0; VAR_7 < 16 && VAR_7 < VAR_3; ++VAR_7) {
            VAR_17 = VAR_1[VAR_7];
            VAR_2[VAR_7] = VAR_8.c[VAR_7] ^ VAR_5[VAR_7];
            VAR_5[VAR_7] = VAR_17;
        }
        if (VAR_3 <= 16) {
            for (; VAR_7 < 16; ++VAR_7)
                VAR_5[VAR_7] = VAR_1[VAR_7];
            break;
        }
        VAR_3 -= 16;
        VAR_1 += 16;
        VAR_2 += 16;
    }
}
