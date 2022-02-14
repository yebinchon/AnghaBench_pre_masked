
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int top; int d; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int const*,int) ;

int FUNC_4(BIGNUM *VAR_2, const BN_ULONG *VAR_3, int VAR_4)
{
    if (FUNC_2(VAR_2, VAR_4) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    FUNC_3(VAR_2->d, VAR_3, sizeof(BN_ULONG) * VAR_4);
    VAR_2->top = VAR_4;
    FUNC_1(VAR_2);
    return 1;
}
