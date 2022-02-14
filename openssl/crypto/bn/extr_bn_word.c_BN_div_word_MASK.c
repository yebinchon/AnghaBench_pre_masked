
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int top; int* d; scalar_t__ neg; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,int,int) ;

BN_ULONG FUNC_4(BIGNUM *VAR_2, BN_ULONG VAR_3)
{
    BN_ULONG VAR_4 = 0;
    int VAR_5, VAR_6;

    FUNC_2(VAR_2);
    VAR_3 &= VAR_1;

    if (!VAR_3)

        return (BN_ULONG)-1;
    if (VAR_2->top == 0)
        return 0;


    VAR_6 = VAR_0 - FUNC_1(VAR_3);
    VAR_3 <<= VAR_6;
    if (!FUNC_0(VAR_2, VAR_2, VAR_6))
        return (BN_ULONG)-1;

    for (VAR_5 = VAR_2->top - 1; VAR_5 >= 0; VAR_5--) {
        BN_ULONG VAR_7, VAR_8;

        VAR_7 = VAR_2->d[VAR_5];
        VAR_8 = FUNC_3(VAR_4, VAR_7, VAR_3);
        VAR_4 = (VAR_7 - ((VAR_8 * VAR_3) & VAR_1)) & VAR_1;
        VAR_2->d[VAR_5] = VAR_8;
    }
    if ((VAR_2->top > 0) && (VAR_2->d[VAR_2->top - 1] == 0))
        VAR_2->top--;
    VAR_4 >>= VAR_6;
    if (!VAR_2->top)
        VAR_2->neg = 0;
    FUNC_2(VAR_2);
    return VAR_4;
}
