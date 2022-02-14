
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int X509_NAME ;
struct TYPE_13__ {int * freeText; int * transactionID; int * recipNonce; int * clCert; int * oldCert; int * issuer; int * recipient; int * expected_sender; int * srvCert; int * referenceValue; int * subjectName; } ;
struct TYPE_12__ {int * senderNonce; int transactionID; int recipNonce; } ;
typedef TYPE_1__ OSSL_CMP_PKIHEADER ;
typedef TYPE_2__ OSSL_CMP_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int **,int *,int ) ;

int FUNC_13(OSSL_CMP_CTX *VAR_4, OSSL_CMP_PKIHEADER *VAR_5)
{
    X509_NAME *VAR_6;
    X509_NAME *VAR_7 = ((void*)0);

    if (!FUNC_5(VAR_4 != ((void*)0) && VAR_5 != ((void*)0)))
        return 0;


    if (!FUNC_10(VAR_5, VAR_1))
        return 0;

    VAR_6 = VAR_4->clCert != ((void*)0) ?
        FUNC_4(VAR_4->clCert) : VAR_4->subjectName;







    if (VAR_6 == ((void*)0) && VAR_4->referenceValue == ((void*)0)) {
        FUNC_0(0, VAR_0);
        return 0;
    }
    if (!FUNC_9(VAR_5, VAR_6))
        return 0;


    if (VAR_4->srvCert != ((void*)0)) {
        VAR_7 = FUNC_4(VAR_4->srvCert);

        if (VAR_4->expected_sender == ((void*)0) && VAR_7 != ((void*)0)
                && !FUNC_1(VAR_4, VAR_7))
            return 0;
    } else if (VAR_4->recipient != ((void*)0)) {
        VAR_7 = VAR_4->recipient;
    } else if (VAR_4->issuer != ((void*)0)) {
        VAR_7 = VAR_4->issuer;
    } else if (VAR_4->oldCert != ((void*)0)) {
        VAR_7 = FUNC_3(VAR_4->oldCert);
    } else if (VAR_4->clCert != ((void*)0)) {
        VAR_7 = FUNC_3(VAR_4->clCert);
    }
    if (!FUNC_8(VAR_5, VAR_7))
        return 0;


    if (!FUNC_11(VAR_5))
        return 0;

    if (VAR_4->recipNonce != ((void*)0)
            && !FUNC_6(&VAR_5->recipNonce,
                                                VAR_4->recipNonce))
        return 0;
    if (VAR_4->transactionID == ((void*)0)
            && !FUNC_12(&VAR_4->transactionID, ((void*)0),
                                       VAR_3))
        return 0;
    if (!FUNC_6(&VAR_5->transactionID,
                                         VAR_4->transactionID))
        return 0;
    if (!FUNC_12(&VAR_5->senderNonce, ((void*)0),
                                VAR_2))
        return 0;


    if (!FUNC_2(VAR_4, VAR_5->senderNonce))
        return 0;






    if (VAR_4->freeText != ((void*)0)
            && !FUNC_7(VAR_5, VAR_4->freeText))
        return 0;

    return 1;
}
