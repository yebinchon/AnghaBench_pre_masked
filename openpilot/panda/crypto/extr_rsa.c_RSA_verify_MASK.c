
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int buf ;
struct TYPE_4__ {scalar_t__ len; int exponent; } ;
typedef TYPE_1__ RSAPublicKey ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (TYPE_1__ const*,int*) ;
 int FUNC_1 (char*,...) ;
 int* VAR_3 ;

int FUNC_2(const RSAPublicKey *VAR_4,
               const uint8_t *VAR_5,
               const int VAR_6,
               const uint8_t *VAR_7,
               const int VAR_8) {
    uint8_t VAR_9[VAR_0];
    int VAR_10;


    if (VAR_4->len != VAR_1) {
        return 0;
    }

    if (VAR_6 != sizeof(VAR_9)) {
        return 0;
    }

    if (VAR_8 != VAR_2) {
        return 0;
    }

    if (VAR_4->exponent != 3 && VAR_4->exponent != 65537) {
        return 0;
    }

    for (VAR_10 = 0; VAR_10 < VAR_6; ++VAR_10) {
        VAR_9[VAR_10] = VAR_5[VAR_10];
    }

    FUNC_0(VAR_4, VAR_9);
    for (VAR_10 = VAR_6 - VAR_8; VAR_10 < VAR_6; ++VAR_10) {
        VAR_9[VAR_10] ^= *VAR_7++;
    }
    for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10) {
        if (VAR_9[VAR_10] != VAR_3[VAR_10]) {
            return 0;
        }
    }

    return 1;
}
