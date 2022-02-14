
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* block128_f ) (unsigned char*,unsigned char*,void const*) ;


 int FUNC_0 (unsigned char*,unsigned char*,void const*) ;
 int FUNC_1 (unsigned char*,unsigned char*,void const*) ;
 int FUNC_2 (unsigned char*,unsigned char*,void const*) ;
 int FUNC_3 (unsigned char*,unsigned char*,void const*) ;
 int FUNC_4 (unsigned char*,unsigned char*,void const*) ;
 int FUNC_5 (unsigned char*,unsigned char*,void const*) ;

void FUNC_6(const unsigned char *VAR_0, unsigned char *VAR_1,
                           size_t VAR_2, const void *VAR_3,
                           unsigned char VAR_4[16], int *VAR_5,
                           int VAR_6, block128_f VAR_7)
{
    unsigned int VAR_8;
    size_t VAR_9 = 0;

    VAR_8 = *VAR_5;

    if (VAR_6) {

        if (16 % sizeof(size_t) == 0) {
            do {
                while (VAR_8 && VAR_2) {
                    *(VAR_1++) = VAR_4[VAR_8] ^= *(VAR_0++);
                    --VAR_2;
                    VAR_8 = (VAR_8 + 1) % 16;
                }





                while (VAR_2 >= 16) {
                    (*VAR_7) (VAR_4, VAR_4, VAR_3);
                    for (; VAR_8 < 16; VAR_8 += sizeof(size_t)) {
                        *(size_t *)(VAR_1 + VAR_8) =
                            *(size_t *)(VAR_4 + VAR_8) ^= *(size_t *)(VAR_0 + VAR_8);
                    }
                    VAR_2 -= 16;
                    VAR_1 += 16;
                    VAR_0 += 16;
                    VAR_8 = 0;
                }
                if (VAR_2) {
                    (*VAR_7) (VAR_4, VAR_4, VAR_3);
                    while (VAR_2--) {
                        VAR_1[VAR_8] = VAR_4[VAR_8] ^= VAR_0[VAR_8];
                        ++VAR_8;
                    }
                }
                *VAR_5 = VAR_8;
                return;
            } while (0);
        }


        while (VAR_9 < VAR_2) {
            if (VAR_8 == 0) {
                (*VAR_7) (VAR_4, VAR_4, VAR_3);
            }
            VAR_1[VAR_9] = VAR_4[VAR_8] ^= VAR_0[VAR_9];
            ++VAR_9;
            VAR_8 = (VAR_8 + 1) % 16;
        }
        *VAR_5 = VAR_8;
    } else {

        if (16 % sizeof(size_t) == 0) {
            do {
                while (VAR_8 && VAR_2) {
                    unsigned char VAR_10;
                    *(VAR_1++) = VAR_4[VAR_8] ^ (VAR_10 = *(VAR_0++));
                    VAR_4[VAR_8] = VAR_10;
                    --VAR_2;
                    VAR_8 = (VAR_8 + 1) % 16;
                }





                while (VAR_2 >= 16) {
                    (*VAR_7) (VAR_4, VAR_4, VAR_3);
                    for (; VAR_8 < 16; VAR_8 += sizeof(size_t)) {
                        size_t VAR_11 = *(size_t *)(VAR_0 + VAR_8);
                        *(size_t *)(VAR_1 + VAR_8) = *(size_t *)(VAR_4 + VAR_8) ^ VAR_11;
                        *(size_t *)(VAR_4 + VAR_8) = VAR_11;
                    }
                    VAR_2 -= 16;
                    VAR_1 += 16;
                    VAR_0 += 16;
                    VAR_8 = 0;
                }
                if (VAR_2) {
                    (*VAR_7) (VAR_4, VAR_4, VAR_3);
                    while (VAR_2--) {
                        unsigned char VAR_12;
                        VAR_1[VAR_8] = VAR_4[VAR_8] ^ (VAR_12 = VAR_0[VAR_8]);
                        VAR_4[VAR_8] = VAR_12;
                        ++VAR_8;
                    }
                }
                *VAR_5 = VAR_8;
                return;
            } while (0);
        }


        while (VAR_9 < VAR_2) {
            unsigned char VAR_13;
            if (VAR_8 == 0) {
                (*VAR_7) (VAR_4, VAR_4, VAR_3);
            }
            VAR_1[VAR_9] = VAR_4[VAR_8] ^ (VAR_13 = VAR_0[VAR_9]);
            VAR_4[VAR_8] = VAR_13;
            ++VAR_9;
            VAR_8 = (VAR_8 + 1) % 16;
        }
        *VAR_5 = VAR_8;
    }
}
