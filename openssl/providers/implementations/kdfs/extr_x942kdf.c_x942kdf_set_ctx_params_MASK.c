
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ nid; int keklen; } ;
struct TYPE_11__ {scalar_t__ cek_nid; int dkm_len; int ukm_len; int ukm; int secret_len; int secret; int digest; int provctx; } ;
struct TYPE_10__ {scalar_t__ data_type; int data; } ;
typedef TYPE_1__ OSSL_PARAM ;
typedef int OPENSSL_CTX ;
typedef TYPE_2__ KDF_X942 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_2 (TYPE_6__*) ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_3 (TYPE_1__ const*,int ) ;
 int * FUNC_4 (int ) ;
 int VAR_6 ;
 TYPE_6__* VAR_7 ;
 int FUNC_5 (int *,TYPE_1__ const*,int *) ;
 int FUNC_6 (int *,int *,TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_7(void *VAR_8, const OSSL_PARAM VAR_9[])
{
    const OSSL_PARAM *VAR_10;
    KDF_X942 *VAR_11 = VAR_8;
    OPENSSL_CTX *VAR_12 = FUNC_4(VAR_11->provctx);
    size_t VAR_13;

    if (!FUNC_5(&VAR_11->digest, VAR_9, VAR_12))
        return 0;

    if ((VAR_10 = FUNC_3(VAR_9, VAR_3)) != ((void*)0)
        || (VAR_10 = FUNC_3(VAR_9, VAR_2)) != ((void*)0))
        if (!FUNC_6(&VAR_11->secret, &VAR_11->secret_len, VAR_10))
            return 0;

    if ((VAR_10 = FUNC_3(VAR_9, VAR_4)) != ((void*)0))
        if (!FUNC_6(&VAR_11->ukm, &VAR_11->ukm_len, VAR_10))
            return 0;

    if ((VAR_10 = FUNC_3(VAR_9, VAR_1)) != ((void*)0)) {
        if (VAR_10->data_type != VAR_5)
            return 0;
        VAR_11->cek_nid = FUNC_1(VAR_10->data);
        for (VAR_13 = 0; VAR_13 < FUNC_2(VAR_7); VAR_13++)
            if (VAR_7[VAR_13].nid == VAR_11->cek_nid)
                goto cek_found;
        FUNC_0(VAR_0, VAR_6);
        return 0;
cek_found:
        VAR_11->dkm_len = VAR_7[VAR_13].keklen;
    }
    return 1;
}
