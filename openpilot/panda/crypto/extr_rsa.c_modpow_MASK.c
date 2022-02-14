
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int len; int exponent; int* rr; } ;
typedef TYPE_1__ RSAPublicKey ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,int*) ;
 int FUNC_1 (TYPE_1__ const*,int*,int*,int*) ;
 int FUNC_2 (TYPE_1__ const*,int*) ;

__attribute__((used)) static void FUNC_3(const RSAPublicKey* VAR_1,
                   uint8_t* VAR_2) {
    uint32_t VAR_3[VAR_0];
    uint32_t VAR_4[VAR_0];
    uint32_t VAR_5[VAR_0];
    uint32_t* VAR_6 = 0;
    int VAR_7;


    for (VAR_7 = 0; VAR_7 < VAR_1->len; ++VAR_7) {
        uint32_t VAR_8 =
            (VAR_2[((VAR_1->len - 1 - VAR_7) * 4) + 0] << 24) |
            (VAR_2[((VAR_1->len - 1 - VAR_7) * 4) + 1] << 16) |
            (VAR_2[((VAR_1->len - 1 - VAR_7) * 4) + 2] << 8) |
            (VAR_2[((VAR_1->len - 1 - VAR_7) * 4) + 3] << 0);
        VAR_3[VAR_7] = VAR_8;
    }

    if (VAR_1->exponent == 65537) {
        VAR_6 = VAR_5;
        FUNC_1(VAR_1, VAR_4, VAR_3, VAR_1->rr);
        for (VAR_7 = 0; VAR_7 < 16; VAR_7 += 2) {
            FUNC_1(VAR_1, VAR_5, VAR_4, VAR_4);
            FUNC_1(VAR_1, VAR_4, VAR_5, VAR_5);
        }
        FUNC_1(VAR_1, VAR_6, VAR_4, VAR_3);
    } else if (VAR_1->exponent == 3) {
        VAR_6 = VAR_4;
        FUNC_1(VAR_1, VAR_4, VAR_3, VAR_1->rr);
        FUNC_1(VAR_1, VAR_5, VAR_4, VAR_4);
        FUNC_1(VAR_1, VAR_6, VAR_5, VAR_3);
    }


    if (FUNC_0(VAR_1, VAR_6)) {
        FUNC_2(VAR_1, VAR_6);
    }


    for (VAR_7 = VAR_1->len - 1; VAR_7 >= 0; --VAR_7) {
        uint32_t VAR_9 = VAR_6[VAR_7];
        *VAR_2++ = VAR_9 >> 24;
        *VAR_2++ = VAR_9 >> 16;
        *VAR_2++ = VAR_9 >> 8;
        *VAR_2++ = VAR_9 >> 0;
    }
}
