
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int top; scalar_t__* d; } ;
typedef scalar_t__ BN_ULONG ;
typedef scalar_t__ BN_ULLONG ;
typedef TYPE_1__ BIGNUM ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 TYPE_1__* FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__ const*) ;

BN_ULONG FUNC_4(const BIGNUM *VAR_4, BN_ULONG VAR_5)
{

    BN_ULONG VAR_6 = 0;



    int VAR_7;

    if (VAR_5 == 0)
        return (BN_ULONG)-1;






    if (VAR_5 > ((BN_ULONG)1 << VAR_1)) {
        BIGNUM *VAR_8 = FUNC_1(VAR_4);
        if (VAR_8 == ((void*)0))
            return (BN_ULONG)-1;

        VAR_6 = FUNC_0(VAR_8, VAR_5);
        FUNC_2(VAR_8);

        return VAR_6;
    }


    FUNC_3(VAR_4);
    VAR_5 &= VAR_2;
    for (VAR_7 = VAR_4->top - 1; VAR_7 >= 0; VAR_7--) {






        VAR_6 = ((VAR_6 << VAR_1) | ((VAR_4->d[VAR_7] >> VAR_1) & VAR_3)) % VAR_5;
        VAR_6 = ((VAR_6 << VAR_1) | (VAR_4->d[VAR_7] & VAR_3)) % VAR_5;




    }
    return (BN_ULONG)VAR_6;
}
