
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int top; int* d; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BN_ULONG FUNC_0(const BIGNUM *VAR_2, int VAR_3)
{
    BN_ULONG VAR_4 = 0;
    int VAR_5;

    VAR_5 = VAR_3 / VAR_0;
    VAR_3 %= VAR_0;
    if (VAR_5 >= 0 && VAR_5 < VAR_2->top) {
        VAR_4 = VAR_2->d[VAR_5] & VAR_1;
        if (VAR_3) {
            VAR_4 >>= VAR_3;
            if (++VAR_5 < VAR_2->top)
                VAR_4 |= VAR_2->d[VAR_5] << (VAR_0 - VAR_3);
        }
    }

    return VAR_4 & VAR_1;
}
