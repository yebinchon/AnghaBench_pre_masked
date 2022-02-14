
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ flags; scalar_t__* n0; int Ni; int N; int RR; scalar_t__ ri; } ;
typedef TYPE_1__ BN_MONT_CTX ;


 int FUNC_0 (int *) ;

void FUNC_1(BN_MONT_CTX *VAR_0)
{
    VAR_0->ri = 0;
    FUNC_0(&VAR_0->RR);
    FUNC_0(&VAR_0->N);
    FUNC_0(&VAR_0->Ni);
    VAR_0->n0[0] = VAR_0->n0[1] = 0;
    VAR_0->flags = 0;
}
