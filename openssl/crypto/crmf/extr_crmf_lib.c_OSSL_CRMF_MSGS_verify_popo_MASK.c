
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int X509_PUBKEY ;
struct TYPE_13__ {TYPE_3__* certTemplate; int * publicKey; } ;
struct TYPE_12__ {TYPE_7__* certReq; TYPE_2__* popo; } ;
struct TYPE_11__ {int signature; int algorithmIdentifier; TYPE_7__* poposkInput; } ;
struct TYPE_10__ {int * subject; int * publicKey; } ;
struct TYPE_8__ {TYPE_4__* signature; } ;
struct TYPE_9__ {int type; TYPE_1__ value; } ;
typedef TYPE_4__ OSSL_CRMF_POPOSIGNINGKEY ;
typedef int OSSL_CRMF_MSGS ;
typedef TYPE_5__ OSSL_CRMF_MSG ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,TYPE_7__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 TYPE_5__* FUNC_5 (int const*,int) ;

int FUNC_6(const OSSL_CRMF_MSGS *VAR_6,
                               int VAR_7, int VAR_8)
{
    OSSL_CRMF_MSG *VAR_9 = ((void*)0);
    X509_PUBKEY *VAR_10 = ((void*)0);
    OSSL_CRMF_POPOSIGNINGKEY *VAR_11 = ((void*)0);

    if (VAR_6 == ((void*)0)
            || (VAR_9 = FUNC_5(VAR_6, VAR_7)) == ((void*)0)
            || VAR_9->popo == ((void*)0)) {
        FUNC_2(VAR_0,
                VAR_1);
        return 0;
    }

    switch (VAR_9->popo->type) {
    case 129:
        if (VAR_8)
            return 1;
        break;
    case 128:
        VAR_10 = VAR_9->certReq->certTemplate->publicKey;
        VAR_11 = VAR_9->popo->value.signature;
        if (VAR_11->poposkInput != ((void*)0)) {





            if (VAR_10 == ((void*)0)
                    || VAR_11->poposkInput->publicKey == ((void*)0)
                    || FUNC_3(VAR_10, VAR_11->poposkInput->publicKey)
                    || FUNC_1(
                           FUNC_0(VAR_5),
                           VAR_11->algorithmIdentifier, VAR_11->signature,
                           VAR_11->poposkInput, FUNC_4(VAR_10)) < 1)
                break;
        } else {
            if (VAR_10 == ((void*)0)
                    || VAR_9->certReq->certTemplate->subject == ((void*)0)
                    || FUNC_1(FUNC_0(VAR_4),
                                    VAR_11->algorithmIdentifier, VAR_11->signature,
                                    VAR_9->certReq,
                                    FUNC_4(VAR_10)) < 1)
                break;
        }
        return 1;
    case 130:






    case 131:
    default:
        FUNC_2(VAR_0,
                VAR_2);
        return 0;
    }
    FUNC_2(VAR_0,
            VAR_3);
    return 0;
}
