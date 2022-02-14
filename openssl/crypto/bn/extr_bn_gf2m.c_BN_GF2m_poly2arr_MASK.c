
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int top; int* d; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*) ;

int FUNC_1(const BIGNUM *VAR_2, int VAR_3[], int VAR_4)
{
    int VAR_5, VAR_6, VAR_7 = 0;
    BN_ULONG VAR_8;

    if (FUNC_0(VAR_2))
        return 0;

    for (VAR_5 = VAR_2->top - 1; VAR_5 >= 0; VAR_5--) {
        if (!VAR_2->d[VAR_5])

            continue;
        VAR_8 = VAR_1;
        for (VAR_6 = VAR_0 - 1; VAR_6 >= 0; VAR_6--) {
            if (VAR_2->d[VAR_5] & VAR_8) {
                if (VAR_7 < VAR_4)
                    VAR_3[VAR_7] = VAR_0 * VAR_5 + VAR_6;
                VAR_7++;
            }
            VAR_8 >>= 1;
        }
    }

    if (VAR_7 < VAR_4) {
        VAR_3[VAR_7] = -1;
        VAR_7++;
    }

    return VAR_7;
}
