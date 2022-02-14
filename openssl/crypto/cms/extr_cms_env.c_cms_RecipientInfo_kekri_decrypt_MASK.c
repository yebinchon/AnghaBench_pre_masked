
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int actx ;
struct TYPE_13__ {TYPE_1__* envelopedData; } ;
struct TYPE_20__ {TYPE_2__ d; } ;
struct TYPE_19__ {unsigned char* key; int keylen; } ;
struct TYPE_18__ {int keylen; TYPE_5__* encryptedKey; int key; TYPE_4__* keyEncryptionAlgorithm; } ;
struct TYPE_14__ {TYPE_7__* kekri; } ;
struct TYPE_17__ {TYPE_3__ d; } ;
struct TYPE_16__ {int length; int data; } ;
struct TYPE_15__ {int algorithm; } ;
struct TYPE_12__ {TYPE_8__* encryptedContentInfo; } ;
typedef TYPE_6__ CMS_RecipientInfo ;
typedef TYPE_7__ CMS_KEKRecipientInfo ;
typedef TYPE_8__ CMS_EncryptedContentInfo ;
typedef TYPE_9__ CMS_ContentInfo ;
typedef int AES_KEY ;


 scalar_t__ FUNC_0 (int ,int,int *) ;
 int FUNC_1 (int *,int *,unsigned char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (unsigned char*) ;
 unsigned char* FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(CMS_ContentInfo *VAR_7,
                                           CMS_RecipientInfo *VAR_8)
{
    CMS_EncryptedContentInfo *VAR_9;
    CMS_KEKRecipientInfo *VAR_10;
    AES_KEY VAR_11;
    unsigned char *VAR_12 = ((void*)0);
    int VAR_13;
    int VAR_14 = 0, VAR_15;

    VAR_9 = VAR_7->d.envelopedData->encryptedContentInfo;

    VAR_10 = VAR_8->d.kekri;

    if (!VAR_10->key) {
        FUNC_2(VAR_0, VAR_4);
        return 0;
    }

    VAR_15 = FUNC_3(VAR_10->keyEncryptionAlgorithm->algorithm);
    if (FUNC_7(VAR_15) != VAR_10->keylen) {
        FUNC_2(VAR_0,
               VAR_3);
        return 0;
    }



    if (VAR_10->encryptedKey->length < 16) {
        FUNC_2(VAR_0,
               VAR_2);
        goto err;
    }

    if (FUNC_0(VAR_10->key, VAR_10->keylen << 3, &VAR_11)) {
        FUNC_2(VAR_0,
               VAR_1);
        goto err;
    }

    VAR_12 = FUNC_6(VAR_10->encryptedKey->length - 8);

    if (VAR_12 == ((void*)0)) {
        FUNC_2(VAR_0, VAR_6);
        goto err;
    }

    VAR_13 = FUNC_1(&VAR_11, ((void*)0), VAR_12,
                             VAR_10->encryptedKey->data,
                             VAR_10->encryptedKey->length);

    if (VAR_13 <= 0) {
        FUNC_2(VAR_0, VAR_5);
        goto err;
    }

    VAR_9->key = VAR_12;
    VAR_9->keylen = VAR_13;

    VAR_14 = 1;

 err:

    if (!VAR_14)
        FUNC_5(VAR_12);
    FUNC_4(&VAR_11, sizeof(VAR_11));

    return VAR_14;

}
