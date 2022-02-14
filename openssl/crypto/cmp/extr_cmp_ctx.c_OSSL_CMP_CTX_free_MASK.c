
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int length; int data; } ;
struct TYPE_5__ {int extraCertsIn; int caPubs; int newCert; int statusString; int genm_ITAVs; int p10CSR; int oldCert; int policies; int reqExtensions; int subjectAltNames; int subjectName; int issuer; int newPkey; int extraCertsOut; int geninfo_ITAVs; TYPE_4__* recipNonce; TYPE_4__* senderNonce; TYPE_4__* transactionID; int recipient; TYPE_4__* secretValue; TYPE_4__* referenceValue; int pkey; int clCert; int untrusted_certs; int trusted; int expected_sender; int validatedSrvCert; int srvCert; struct TYPE_5__* proxyName; struct TYPE_5__* serverName; struct TYPE_5__* serverPath; } ;
typedef TYPE_1__ OSSL_CMP_CTX ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int (*) (int )) ;

void FUNC_14(OSSL_CMP_CTX *VAR_5)
{
    if (VAR_5 == ((void*)0))
        return;

    FUNC_3(VAR_5->serverPath);
    FUNC_3(VAR_5->serverName);
    FUNC_3(VAR_5->proxyName);

    FUNC_7(VAR_5->srvCert);
    FUNC_7(VAR_5->validatedSrvCert);
    FUNC_4(VAR_5->expected_sender);
    FUNC_6(VAR_5->trusted);
    FUNC_13(VAR_5->untrusted_certs, FUNC_7);

    FUNC_7(VAR_5->clCert);
    FUNC_1(VAR_5->pkey);
    FUNC_0(VAR_5->referenceValue);
    if (VAR_5->secretValue != ((void*)0))
        FUNC_2(VAR_5->secretValue->data, VAR_5->secretValue->length);
    FUNC_0(VAR_5->secretValue);

    FUNC_4(VAR_5->recipient);
    FUNC_0(VAR_5->transactionID);
    FUNC_0(VAR_5->senderNonce);
    FUNC_0(VAR_5->recipNonce);
    FUNC_10(VAR_5->geninfo_ITAVs, VAR_2);
    FUNC_13(VAR_5->extraCertsOut, FUNC_7);

    FUNC_1(VAR_5->newPkey);
    FUNC_4(VAR_5->issuer);
    FUNC_4(VAR_5->subjectName);
    FUNC_9(VAR_5->subjectAltNames, VAR_1);
    FUNC_12(VAR_5->reqExtensions, VAR_4);
    FUNC_11(VAR_5->policies, VAR_3);
    FUNC_7(VAR_5->oldCert);
    FUNC_5(VAR_5->p10CSR);

    FUNC_10(VAR_5->genm_ITAVs, VAR_2);

    FUNC_8(VAR_5->statusString, VAR_0);
    FUNC_7(VAR_5->newCert);
    FUNC_13(VAR_5->caPubs, FUNC_7);
    FUNC_13(VAR_5->extraCertsIn, FUNC_7);

    FUNC_3(VAR_5);
}
