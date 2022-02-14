
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int seedlen; } ;
typedef TYPE_1__ RAND_DRBG ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(RAND_DRBG *VAR_0, unsigned char *VAR_1,
                     unsigned char *VAR_2, size_t VAR_3)
{
    size_t VAR_4;
    int VAR_5;
    const unsigned char *VAR_6;
    unsigned char VAR_7 = 0, *VAR_8;

    FUNC_0(VAR_0->seedlen >= 1 && VAR_3 >= 1 && VAR_3 <= VAR_0->seedlen);

    VAR_8 = &VAR_1[VAR_0->seedlen - 1];
    VAR_6 = &VAR_2[VAR_3 - 1];

    for (VAR_4 = VAR_3; VAR_4 > 0; VAR_4--, VAR_8--, VAR_6--) {
        VAR_5 = *VAR_8 + *VAR_6 + VAR_7;
        VAR_7 = (unsigned char)(VAR_5 >> 8);
        *VAR_8 = (unsigned char)(VAR_5 & 0xff);
    }

    if (VAR_7 != 0) {

        for (VAR_4 = VAR_0->seedlen - VAR_3; VAR_4 > 0; --VAR_4, VAR_8--) {
            *VAR_8 += 1;
            if (*VAR_8 != 0)
                break;
        }
    }
    return 1;
}
