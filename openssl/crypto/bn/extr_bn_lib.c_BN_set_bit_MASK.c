
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int top; int* d; int flags; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*,int) ;

int FUNC_2(BIGNUM *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;

    if (VAR_3 < 0)
        return 0;

    VAR_4 = VAR_3 / VAR_0;
    VAR_5 = VAR_3 % VAR_0;
    if (VAR_2->top <= VAR_4) {
        if (FUNC_1(VAR_2, VAR_4 + 1) == ((void*)0))
            return 0;
        for (VAR_6 = VAR_2->top; VAR_6 < VAR_4 + 1; VAR_6++)
            VAR_2->d[VAR_6] = 0;
        VAR_2->top = VAR_4 + 1;
        VAR_2->flags &= ~VAR_1;
    }

    VAR_2->d[VAR_4] |= (((BN_ULONG)1) << VAR_5);
    FUNC_0(VAR_2);
    return 1;
}
