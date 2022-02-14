
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* enc_key; } ;
struct TYPE_5__ {int length; int data; } ;
typedef TYPE_2__ PKCS7_RECIP_INFO ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int,int ,int ,int ,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *,unsigned char*,size_t*,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (unsigned char*,int) ;
 int FUNC_6 (unsigned char*) ;
 unsigned char* FUNC_7 (size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(unsigned char **VAR_6, int *VAR_7,
                               PKCS7_RECIP_INFO *VAR_8, EVP_PKEY *VAR_9,
                               size_t VAR_10)
{
    EVP_PKEY_CTX *VAR_11 = ((void*)0);
    unsigned char *VAR_12 = ((void*)0);
    size_t VAR_13;
    int VAR_14 = -1;

    VAR_11 = FUNC_2(VAR_9, ((void*)0));
    if (VAR_11 == ((void*)0))
        return -1;

    if (FUNC_4(VAR_11) <= 0)
        goto err;

    if (FUNC_0(VAR_11, -1, VAR_3,
                          VAR_2, 0, VAR_8) <= 0) {
        FUNC_8(VAR_4, VAR_5);
        goto err;
    }

    if (FUNC_3(VAR_11, ((void*)0), &VAR_13,
                         VAR_8->enc_key->data, VAR_8->enc_key->length) <= 0)
        goto err;

    VAR_12 = FUNC_7(VAR_13);

    if (VAR_12 == ((void*)0)) {
        FUNC_8(VAR_4, VAR_1);
        goto err;
    }

    if (FUNC_3(VAR_11, VAR_12, &VAR_13,
                         VAR_8->enc_key->data, VAR_8->enc_key->length) <= 0
            || VAR_13 == 0
            || (VAR_10 != 0 && VAR_13 != VAR_10)) {
        VAR_14 = 0;
        FUNC_8(VAR_4, VAR_0);
        goto err;
    }

    VAR_14 = 1;

    FUNC_5(*VAR_6, *VAR_7);
    *VAR_6 = VAR_12;
    *VAR_7 = VAR_13;

 err:
    FUNC_1(VAR_11);
    if (!VAR_14)
        FUNC_6(VAR_12);

    return VAR_14;
}
