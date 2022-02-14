
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int top; scalar_t__* d; scalar_t__ neg; } ;
typedef scalar_t__ BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__*,scalar_t__ const*,scalar_t__ const*,int) ;
 int * FUNC_4 (TYPE_1__*,int) ;

int FUNC_5(BIGNUM *VAR_3, const BIGNUM *VAR_4, const BIGNUM *VAR_5)
{
    int VAR_6, VAR_7, VAR_8;
    BN_ULONG VAR_9, VAR_10, VAR_11, *VAR_12;
    const BN_ULONG *VAR_13, *VAR_14;

    FUNC_1(VAR_4);
    FUNC_1(VAR_5);

    VAR_6 = VAR_4->top;
    VAR_7 = VAR_5->top;
    VAR_8 = VAR_6 - VAR_7;

    if (VAR_8 < 0) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }

    if (FUNC_4(VAR_3, VAR_6) == ((void*)0))
        return 0;

    VAR_13 = VAR_4->d;
    VAR_14 = VAR_5->d;
    VAR_12 = VAR_3->d;

    VAR_11 = FUNC_3(VAR_12, VAR_13, VAR_14, VAR_7);
    VAR_13 += VAR_7;
    VAR_12 += VAR_7;

    while (VAR_8) {
        VAR_8--;
        VAR_9 = *(VAR_13++);
        VAR_10 = (VAR_9 - VAR_11) & VAR_1;
        *(VAR_12++) = VAR_10;
        VAR_11 &= (VAR_9 == 0);
    }

    while (VAR_6 && *--VAR_12 == 0)
        VAR_6--;

    VAR_3->top = VAR_6;
    VAR_3->neg = 0;
    FUNC_2(VAR_3);

    return 1;
}
