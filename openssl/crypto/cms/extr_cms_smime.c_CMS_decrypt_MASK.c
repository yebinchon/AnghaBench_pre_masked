
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_12__ {TYPE_2__* envelopedData; } ;
struct TYPE_13__ {TYPE_3__ d; } ;
struct TYPE_11__ {TYPE_1__* encryptedContentInfo; } ;
struct TYPE_10__ {int debug; int havenocert; } ;
typedef int EVP_PKEY ;
typedef TYPE_4__ CMS_ContentInfo ;
typedef int BIO ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_4__*,int *) ;
 int FUNC_1 (TYPE_4__*,int *,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *,int *,unsigned int) ;
 int FUNC_7 (int *,int *) ;

int FUNC_8(CMS_ContentInfo *VAR_4, EVP_PKEY *VAR_5, X509 *VAR_6,
                BIO *VAR_7, BIO *VAR_8, unsigned int VAR_9)
{
    int VAR_10;
    BIO *VAR_11;

    if (FUNC_4(FUNC_2(VAR_4)) != VAR_3) {
        FUNC_3(VAR_1, VAR_2);
        return 0;
    }
    if (!VAR_7 && !FUNC_5(VAR_4))
        return 0;
    if (VAR_9 & VAR_0)
        VAR_4->d.envelopedData->encryptedContentInfo->debug = 1;
    else
        VAR_4->d.envelopedData->encryptedContentInfo->debug = 0;
    if (!VAR_6)
        VAR_4->d.envelopedData->encryptedContentInfo->havenocert = 1;
    else
        VAR_4->d.envelopedData->encryptedContentInfo->havenocert = 0;
    if (VAR_5 == ((void*)0) && VAR_6 == ((void*)0) && VAR_7 == ((void*)0) && VAR_8 == ((void*)0))
        return 1;
    if (VAR_5 != ((void*)0) && !FUNC_1(VAR_4, VAR_5, VAR_6))
        return 0;
    VAR_11 = FUNC_0(VAR_4, VAR_7);
    if (VAR_11 == ((void*)0))
        return 0;
    VAR_10 = FUNC_6(VAR_8, VAR_11, VAR_9);
    FUNC_7(VAR_11, VAR_7);
    return VAR_10;
}
