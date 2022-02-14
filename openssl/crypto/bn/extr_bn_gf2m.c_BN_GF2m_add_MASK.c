
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ top; int* d; } ;
typedef TYPE_1__ BIGNUM ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (TYPE_1__*,scalar_t__) ;

int FUNC_3(BIGNUM *VAR_0, const BIGNUM *VAR_1, const BIGNUM *VAR_2)
{
    int VAR_3;
    const BIGNUM *VAR_4, *VAR_5;

    FUNC_0(VAR_1);
    FUNC_0(VAR_2);

    if (VAR_1->top < VAR_2->top) {
        VAR_4 = VAR_2;
        VAR_5 = VAR_1;
    } else {
        VAR_4 = VAR_1;
        VAR_5 = VAR_2;
    }

    if (FUNC_2(VAR_0, VAR_4->top) == ((void*)0))
        return 0;

    for (VAR_3 = 0; VAR_3 < VAR_5->top; VAR_3++) {
        VAR_0->d[VAR_3] = VAR_4->d[VAR_3] ^ VAR_5->d[VAR_3];
    }
    for (; VAR_3 < VAR_4->top; VAR_3++) {
        VAR_0->d[VAR_3] = VAR_4->d[VAR_3];
    }

    VAR_0->top = VAR_4->top;
    FUNC_1(VAR_0);

    return 1;
}
