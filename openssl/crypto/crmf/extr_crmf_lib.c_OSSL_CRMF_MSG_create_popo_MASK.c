
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * subsequentMessage; } ;
struct TYPE_13__ {TYPE_1__ value; int type; } ;
struct TYPE_12__ {TYPE_3__* popo; int certReq; } ;
struct TYPE_10__ {TYPE_7__* keyEncipherment; int * signature; int * raVerified; } ;
struct TYPE_11__ {int type; TYPE_2__ value; } ;
typedef int OSSL_CRMF_POPOSIGNINGKEY ;
typedef TYPE_3__ OSSL_CRMF_POPO ;
typedef TYPE_4__ OSSL_CRMF_MSG ;
typedef int EVP_PKEY ;
typedef int ASN1_INTEGER ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,int *,int) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 TYPE_7__* FUNC_5 () ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;

 int VAR_4 ;


 int FUNC_8 (TYPE_3__*) ;
 TYPE_3__* FUNC_9 () ;
 int VAR_5 ;

int FUNC_10(OSSL_CRMF_MSG *VAR_6, EVP_PKEY *VAR_7,
                              int VAR_8, int VAR_9)
{
    OSSL_CRMF_POPO *VAR_10 = ((void*)0);
    ASN1_INTEGER *VAR_11 = ((void*)0);

    if (VAR_6 == ((void*)0) || (VAR_9 == 128 && VAR_7 == ((void*)0))) {
        FUNC_4(VAR_0, VAR_1);
        return 0;
    }

    if (VAR_9 == VAR_4)
        goto end;
    if ((VAR_10 = FUNC_9()) == ((void*)0))
        goto err;
    VAR_10->type = VAR_9;

    switch (VAR_9) {
    case 129:
        if ((VAR_10->value.raVerified = FUNC_2()) == ((void*)0))
            goto err;
        break;

    case 128:
        {
            OSSL_CRMF_POPOSIGNINGKEY *VAR_12 = FUNC_7();
            if (VAR_12 == ((void*)0)
                    || !FUNC_3(VAR_12, VAR_6->certReq, VAR_7, VAR_8)){
                FUNC_6(VAR_12);
                goto err;
            }
            VAR_10->value.signature = VAR_12;
        }
        break;

    case 130:
        if ((VAR_10->value.keyEncipherment = FUNC_5()) == ((void*)0))
            goto err;
        VAR_11 = FUNC_0();
        VAR_10->value.keyEncipherment->type =
            VAR_3;
        VAR_10->value.keyEncipherment->value.subsequentMessage = VAR_11;
        if (VAR_11 == ((void*)0)
                || !FUNC_1(VAR_11, VAR_5))
            goto err;
        break;

    default:
        FUNC_4(VAR_0,
                VAR_2);
        goto err;
    }

 end:
    FUNC_8(VAR_6->popo);
    VAR_6->popo = VAR_10;

    return 1;
 err:
    FUNC_8(VAR_10);
    return 0;
}
