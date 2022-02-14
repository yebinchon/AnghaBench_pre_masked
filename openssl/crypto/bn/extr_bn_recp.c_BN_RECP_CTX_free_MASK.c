
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int Nr; int N; } ;
typedef TYPE_1__ BN_RECP_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(BN_RECP_CTX *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return;
    FUNC_0(&VAR_1->N);
    FUNC_0(&VAR_1->Nr);
    if (VAR_1->flags & VAR_0)
        FUNC_1(VAR_1);
}
