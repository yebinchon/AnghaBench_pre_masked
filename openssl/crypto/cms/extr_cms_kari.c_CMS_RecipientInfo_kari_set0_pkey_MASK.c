
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * pctx; } ;
struct TYPE_5__ {TYPE_3__* kari; } ;
struct TYPE_6__ {TYPE_1__ d; } ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef TYPE_2__ CMS_RecipientInfo ;
typedef TYPE_3__ CMS_KeyAgreeRecipientInfo ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;

int FUNC_3(CMS_RecipientInfo *VAR_0, EVP_PKEY *VAR_1)
{
    EVP_PKEY_CTX *VAR_2;
    CMS_KeyAgreeRecipientInfo *VAR_3 = VAR_0->d.kari;

    FUNC_0(VAR_3->pctx);
    VAR_3->pctx = ((void*)0);
    if (VAR_1 == ((void*)0))
        return 1;
    VAR_2 = FUNC_1(VAR_1, ((void*)0));
    if (VAR_2 == ((void*)0) || FUNC_2(VAR_2) <= 0)
        goto err;
    VAR_3->pctx = VAR_2;
    return 1;
 err:
    FUNC_0(VAR_2);
    return 0;
}
