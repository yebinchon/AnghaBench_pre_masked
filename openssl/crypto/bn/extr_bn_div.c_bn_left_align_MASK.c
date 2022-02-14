
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* d; int top; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(BIGNUM *VAR_2)
{
    BN_ULONG *VAR_3 = VAR_2->d, VAR_4, VAR_5, VAR_6;
    int VAR_7 = VAR_2->top;
    int VAR_8 = FUNC_0(VAR_3[VAR_7 - 1]), VAR_9, VAR_10;

    VAR_9 = VAR_0 - VAR_8;
    VAR_8 %= VAR_0;
    VAR_6 = (BN_ULONG)0 - VAR_8;
    VAR_6 |= VAR_6 >> 8;

    for (VAR_10 = 0, VAR_5 = 0; VAR_10 < VAR_7; VAR_10++) {
        VAR_4 = VAR_3[VAR_10];
        VAR_3[VAR_10] = ((VAR_4 << VAR_9) | VAR_5) & VAR_1;
        VAR_5 = (VAR_4 >> VAR_8) & VAR_6;
    }

    return VAR_9;
}
