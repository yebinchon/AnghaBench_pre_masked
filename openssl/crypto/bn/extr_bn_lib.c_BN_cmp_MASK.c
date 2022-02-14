
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ neg; int top; scalar_t__* d; } ;
typedef scalar_t__ BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int FUNC_0 (TYPE_1__ const*) ;

int FUNC_1(const BIGNUM *VAR_0, const BIGNUM *VAR_1)
{
    int VAR_2;
    int VAR_3, VAR_4;
    BN_ULONG VAR_5, VAR_6;

    if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0))) {
        if (VAR_0 != ((void*)0))
            return -1;
        else if (VAR_1 != ((void*)0))
            return 1;
        else
            return 0;
    }

    FUNC_0(VAR_0);
    FUNC_0(VAR_1);

    if (VAR_0->neg != VAR_1->neg) {
        if (VAR_0->neg)
            return -1;
        else
            return 1;
    }
    if (VAR_0->neg == 0) {
        VAR_3 = 1;
        VAR_4 = -1;
    } else {
        VAR_3 = -1;
        VAR_4 = 1;
    }

    if (VAR_0->top > VAR_1->top)
        return VAR_3;
    if (VAR_0->top < VAR_1->top)
        return VAR_4;
    for (VAR_2 = VAR_0->top - 1; VAR_2 >= 0; VAR_2--) {
        VAR_5 = VAR_0->d[VAR_2];
        VAR_6 = VAR_1->d[VAR_2];
        if (VAR_5 > VAR_6)
            return VAR_3;
        if (VAR_5 < VAR_6)
            return VAR_4;
    }
    return 0;
}
