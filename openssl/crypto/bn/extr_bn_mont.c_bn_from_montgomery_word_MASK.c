
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int rtop ;
struct TYPE_8__ {int top; int* d; int neg; int flags; } ;
struct TYPE_7__ {int* n0; TYPE_2__ N; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BN_MONT_CTX ;
typedef TYPE_2__ BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*,int,int) ;
 scalar_t__ FUNC_1 (int*,int*,int*,int) ;
 int * FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_3(BIGNUM *VAR_2, BIGNUM *VAR_3, BN_MONT_CTX *VAR_4)
{
    BIGNUM *VAR_5;
    BN_ULONG *VAR_6, *VAR_7, *VAR_8, VAR_9, VAR_10, VAR_11;
    int VAR_12, VAR_13, VAR_14;
    unsigned int VAR_15;

    VAR_5 = &(VAR_4->N);
    VAR_12 = VAR_5->top;
    if (VAR_12 == 0) {
        VAR_2->top = 0;
        return 1;
    }

    VAR_13 = (2 * VAR_12);
    if (FUNC_2(VAR_3, VAR_13) == ((void*)0))
        return 0;

    VAR_3->neg ^= VAR_5->neg;
    VAR_7 = VAR_5->d;
    VAR_8 = VAR_3->d;


    for (VAR_15 = VAR_3->top, VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
        VAR_10 = (BN_ULONG)0 - ((VAR_14 - VAR_15) >> (8 * sizeof(VAR_15) - 1));
        VAR_8[VAR_14] &= VAR_10;
    }

    VAR_3->top = VAR_13;
    VAR_3->flags |= VAR_0;
    VAR_9 = VAR_4->n0[0];






    for (VAR_11 = 0, VAR_14 = 0; VAR_14 < VAR_12; VAR_14++, VAR_8++) {
        VAR_10 = FUNC_0(VAR_8, VAR_7, VAR_12, (VAR_8[0] * VAR_9) & VAR_1);
        VAR_10 = (VAR_10 + VAR_11 + VAR_8[VAR_12]) & VAR_1;
        VAR_11 |= (VAR_10 != VAR_8[VAR_12]);
        VAR_11 &= (VAR_10 <= VAR_8[VAR_12]);
        VAR_8[VAR_12] = VAR_10;
    }

    if (FUNC_2(VAR_2, VAR_12) == ((void*)0))
        return 0;
    VAR_2->top = VAR_12;
    VAR_2->flags |= VAR_0;
    VAR_2->neg = VAR_3->neg;

    VAR_8 = VAR_2->d;





    VAR_6 = &(VAR_3->d[VAR_12]);

    VAR_11 -= FUNC_1(VAR_8, VAR_6, VAR_7, VAR_12);





    for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
        VAR_8[VAR_14] = (VAR_11 & VAR_6[VAR_14]) | (~VAR_11 & VAR_8[VAR_14]);
        VAR_6[VAR_14] = 0;
    }

    return 1;
}
