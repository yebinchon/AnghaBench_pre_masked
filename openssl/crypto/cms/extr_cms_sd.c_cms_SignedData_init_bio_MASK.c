
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int X509_ALGOR ;
struct TYPE_12__ {TYPE_2__* signedData; } ;
struct TYPE_14__ {TYPE_3__ d; } ;
struct TYPE_13__ {int digestAlgorithms; } ;
struct TYPE_11__ {TYPE_1__* encapContentInfo; } ;
struct TYPE_10__ {scalar_t__ partial; } ;
typedef TYPE_4__ CMS_SignedData ;
typedef TYPE_5__ CMS_ContentInfo ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 TYPE_4__* FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ,int) ;

BIO *FUNC_7(CMS_ContentInfo *VAR_0)
{
    int VAR_1;
    CMS_SignedData *VAR_2;
    BIO *VAR_3 = ((void*)0);
    VAR_2 = FUNC_3(VAR_0);
    if (!VAR_2)
        return ((void*)0);
    if (VAR_0->d.signedData->encapContentInfo->partial)
        FUNC_4(VAR_2);
    for (VAR_1 = 0; VAR_1 < FUNC_5(VAR_2->digestAlgorithms); VAR_1++) {
        X509_ALGOR *VAR_4;
        BIO *VAR_5;
        VAR_4 = FUNC_6(VAR_2->digestAlgorithms, VAR_1);
        VAR_5 = FUNC_2(VAR_4);
        if (!VAR_5)
            goto err;
        if (VAR_3)
            FUNC_1(VAR_3, VAR_5);
        else
            VAR_3 = VAR_5;
    }
    return VAR_3;
 err:
    FUNC_0(VAR_3);
    return ((void*)0);
}
