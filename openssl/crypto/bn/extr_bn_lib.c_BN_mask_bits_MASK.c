
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int top; int* d; } ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(BIGNUM *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;

    FUNC_0(VAR_2);
    if (VAR_3 < 0)
        return 0;

    VAR_5 = VAR_3 / VAR_0;
    VAR_4 = VAR_3 % VAR_0;
    if (VAR_5 >= VAR_2->top)
        return 0;
    if (VAR_4 == 0)
        VAR_2->top = VAR_5;
    else {
        VAR_2->top = VAR_5 + 1;
        VAR_2->d[VAR_5] &= ~(VAR_1 << VAR_4);
    }
    FUNC_1(VAR_2);
    return 1;
}
