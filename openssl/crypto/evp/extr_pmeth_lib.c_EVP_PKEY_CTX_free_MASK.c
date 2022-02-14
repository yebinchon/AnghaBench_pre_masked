
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int engine; int peerkey; int pkey; int keymgmt; TYPE_1__* pmeth; } ;
struct TYPE_7__ {int (* cleanup ) (TYPE_2__*) ;} ;
typedef TYPE_2__ EVP_PKEY_CTX ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

void FUNC_6(EVP_PKEY_CTX *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;
    if (VAR_0->pmeth && VAR_0->pmeth->cleanup)
        VAR_0->pmeth->cleanup(VAR_0);

    FUNC_4(VAR_0);
    FUNC_1(VAR_0->keymgmt);

    FUNC_2(VAR_0->pkey);
    FUNC_2(VAR_0->peerkey);

    FUNC_0(VAR_0->engine);

    FUNC_3(VAR_0);
}
