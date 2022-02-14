
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ top; int * d; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *,scalar_t__,int ) ;
 int * FUNC_3 (TYPE_1__*,scalar_t__) ;

int FUNC_4(BIGNUM *VAR_1, BN_ULONG VAR_2)
{
    BN_ULONG VAR_3;

    FUNC_1(VAR_1);
    VAR_2 &= VAR_0;
    if (VAR_1->top) {
        if (VAR_2 == 0)
            FUNC_0(VAR_1);
        else {
            VAR_3 = FUNC_2(VAR_1->d, VAR_1->d, VAR_1->top, VAR_2);
            if (VAR_3) {
                if (FUNC_3(VAR_1, VAR_1->top + 1) == ((void*)0))
                    return 0;
                VAR_1->d[VAR_1->top++] = VAR_3;
            }
        }
    }
    FUNC_1(VAR_1);
    return 1;
}
