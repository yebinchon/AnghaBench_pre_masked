
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* signature; scalar_t__ signedAttrs; int pkey; int pctx; int * mctx; TYPE_1__* digestAlgorithm; } ;
struct TYPE_8__ {int length; int data; } ;
struct TYPE_7__ {int algorithm; } ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef TYPE_3__ CMS_SignerInfo ;
typedef int ASN1_VALUE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned char**,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int *,int const*,int *,int ) ;
 int FUNC_6 (int *,unsigned char*,int) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (unsigned char*) ;
 int FUNC_11 (TYPE_3__*,int) ;

int FUNC_12(CMS_SignerInfo *VAR_5)
{
    EVP_MD_CTX *VAR_6 = ((void*)0);
    unsigned char *VAR_7 = ((void*)0);
    int VAR_8, VAR_9 = -1;
    const EVP_MD *VAR_10 = ((void*)0);

    if (!VAR_5->pkey) {
        FUNC_3(VAR_1, VAR_2);
        return -1;
    }

    if (!FUNC_2(VAR_5))
        return -1;

    VAR_10 = FUNC_9(VAR_5->digestAlgorithm->algorithm);
    if (VAR_10 == ((void*)0))
        return -1;
    if (VAR_5->mctx == ((void*)0) && (VAR_5->mctx = FUNC_7()) == ((void*)0)) {
        FUNC_3(VAR_1, VAR_4);
        return -1;
    }
    VAR_6 = VAR_5->mctx;
    if (FUNC_5(VAR_6, &VAR_5->pctx, VAR_10, ((void*)0), VAR_5->pkey) <= 0)
        goto err;

    if (!FUNC_11(VAR_5, 1))
        goto err;

    VAR_8 = FUNC_1((ASN1_VALUE *)VAR_5->signedAttrs, &VAR_7,
                         FUNC_0(VAR_0));
    if (!VAR_7)
        goto err;
    VAR_9 = FUNC_6(VAR_6, VAR_7, VAR_8);
    FUNC_10(VAR_7);
    if (VAR_9 <= 0) {
        VAR_9 = -1;
        goto err;
    }
    VAR_9 = FUNC_4(VAR_6,
                              VAR_5->signature->data, VAR_5->signature->length);
    if (VAR_9 <= 0)
        FUNC_3(VAR_1, VAR_3);
 err:
    FUNC_8(VAR_6);
    return VAR_9;
}
