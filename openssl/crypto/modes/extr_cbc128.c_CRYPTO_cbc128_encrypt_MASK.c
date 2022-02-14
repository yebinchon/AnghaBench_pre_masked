
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* block128_f ) (unsigned char*,unsigned char*,void const*) ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char const*,int) ;
 int FUNC_1 (unsigned char*,unsigned char*,void const*) ;
 int FUNC_2 (unsigned char*,unsigned char*,void const*) ;
 int FUNC_3 (unsigned char*,unsigned char*,void const*) ;

void FUNC_4(const unsigned char *VAR_1, unsigned char *VAR_2,
                           size_t VAR_3, const void *VAR_4,
                           unsigned char VAR_5[16], block128_f VAR_6)
{
    size_t VAR_7;
    const unsigned char *VAR_8 = VAR_5;

    if (VAR_3 == 0)
        return;


    if (VAR_0 &&
        ((size_t)VAR_1 | (size_t)VAR_2 | (size_t)VAR_5) % sizeof(size_t) != 0) {
        while (VAR_3 >= 16) {
            for (VAR_7 = 0; VAR_7 < 16; ++VAR_7)
                VAR_2[VAR_7] = VAR_1[VAR_7] ^ VAR_8[VAR_7];
            (*VAR_6) (VAR_2, VAR_2, VAR_4);
            VAR_8 = VAR_2;
            VAR_3 -= 16;
            VAR_1 += 16;
            VAR_2 += 16;
        }
    } else {
        while (VAR_3 >= 16) {
            for (VAR_7 = 0; VAR_7 < 16; VAR_7 += sizeof(size_t))
                *(size_t *)(VAR_2 + VAR_7) =
                    *(size_t *)(VAR_1 + VAR_7) ^ *(size_t *)(VAR_8 + VAR_7);
            (*VAR_6) (VAR_2, VAR_2, VAR_4);
            VAR_8 = VAR_2;
            VAR_3 -= 16;
            VAR_1 += 16;
            VAR_2 += 16;
        }
    }

    while (VAR_3) {
        for (VAR_7 = 0; VAR_7 < 16 && VAR_7 < VAR_3; ++VAR_7)
            VAR_2[VAR_7] = VAR_1[VAR_7] ^ VAR_8[VAR_7];
        for (; VAR_7 < 16; ++VAR_7)
            VAR_2[VAR_7] = VAR_8[VAR_7];
        (*VAR_6) (VAR_2, VAR_2, VAR_4);
        VAR_8 = VAR_2;
        if (VAR_3 <= 16)
            break;
        VAR_3 -= 16;
        VAR_1 += 16;
        VAR_2 += 16;
    }
    FUNC_0(VAR_5, VAR_8, 16);
}
