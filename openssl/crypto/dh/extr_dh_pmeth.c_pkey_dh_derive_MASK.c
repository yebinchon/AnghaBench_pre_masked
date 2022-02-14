
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ kdf_type; size_t kdf_outlen; int kdf_md; int kdf_ukmlen; int kdf_ukm; int kdf_oid; scalar_t__ pad; } ;
struct TYPE_14__ {TYPE_5__* peerkey; TYPE_2__* pkey; TYPE_7__* data; } ;
struct TYPE_12__ {TYPE_3__* dh; } ;
struct TYPE_13__ {TYPE_4__ pkey; } ;
struct TYPE_11__ {int * pub_key; } ;
struct TYPE_9__ {int * dh; } ;
struct TYPE_10__ {TYPE_1__ pkey; } ;
typedef TYPE_6__ EVP_PKEY_CTX ;
typedef TYPE_7__ DH_PKEY_CTX ;
typedef int DH ;
typedef int BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,size_t,unsigned char*,size_t,int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (unsigned char*,int *,int *) ;
 scalar_t__ FUNC_2 (unsigned char*,int *,int *) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (unsigned char*,size_t) ;
 unsigned char* FUNC_6 (size_t) ;

__attribute__((used)) static int FUNC_7(EVP_PKEY_CTX *VAR_4, unsigned char *VAR_5,
                          size_t *VAR_6)
{
    int VAR_7;
    DH *VAR_8;
    DH_PKEY_CTX *VAR_9 = VAR_4->data;
    BIGNUM *VAR_10;
    if (!VAR_4->pkey || !VAR_4->peerkey) {
        FUNC_4(VAR_0, VAR_1);
        return 0;
    }
    VAR_8 = VAR_4->pkey->pkey.dh;
    VAR_10 = VAR_4->peerkey->pkey.dh->pub_key;
    if (VAR_9->kdf_type == VAR_2) {
        if (VAR_5 == ((void*)0)) {
            *VAR_6 = FUNC_3(VAR_8);
            return 1;
        }
        if (VAR_9->pad)
            VAR_7 = FUNC_2(VAR_5, VAR_10, VAR_8);
        else
            VAR_7 = FUNC_1(VAR_5, VAR_10, VAR_8);
        if (VAR_7 < 0)
            return VAR_7;
        *VAR_6 = VAR_7;
        return 1;
    }

    else if (VAR_9->kdf_type == VAR_3) {

        unsigned char *VAR_11 = ((void*)0);
        size_t VAR_12 = 0;
        if (!VAR_9->kdf_outlen || !VAR_9->kdf_oid)
            return 0;
        if (VAR_5 == ((void*)0)) {
            *VAR_6 = VAR_9->kdf_outlen;
            return 1;
        }
        if (*VAR_6 != VAR_9->kdf_outlen)
            return 0;
        VAR_7 = 0;
        VAR_12 = FUNC_3(VAR_8);
        VAR_11 = FUNC_6(VAR_12);
        if (VAR_11 == ((void*)0)) {
            goto err;
        }
        if (FUNC_2(VAR_11, VAR_10, VAR_8) <= 0)
            goto err;
        if (!FUNC_0(VAR_5, *VAR_6, VAR_11, VAR_12, VAR_9->kdf_oid,
                          VAR_9->kdf_ukm, VAR_9->kdf_ukmlen, VAR_9->kdf_md))
            goto err;
        *VAR_6 = VAR_9->kdf_outlen;
        VAR_7 = 1;
 err:
        FUNC_5(VAR_11, VAR_12);
        return VAR_7;
    }

    return 0;
}
