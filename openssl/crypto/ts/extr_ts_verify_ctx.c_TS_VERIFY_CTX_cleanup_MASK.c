
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tsa_name; int nonce; int data; int imprint; int md_alg; int policy; int certs; int store; } ;
typedef TYPE_1__ TS_VERIFY_CTX ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 int FUNC_8 (int ,int ) ;

void FUNC_9(TS_VERIFY_CTX *VAR_1)
{
    if (!VAR_1)
        return;

    FUNC_7(VAR_1->store);
    FUNC_8(VAR_1->certs, VAR_0);

    FUNC_1(VAR_1->policy);

    FUNC_6(VAR_1->md_alg);
    FUNC_4(VAR_1->imprint);

    FUNC_2(VAR_1->data);

    FUNC_0(VAR_1->nonce);

    FUNC_3(VAR_1->tsa_name);

    FUNC_5(VAR_1);
}
