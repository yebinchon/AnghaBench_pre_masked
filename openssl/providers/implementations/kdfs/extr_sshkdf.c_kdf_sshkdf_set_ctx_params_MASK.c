
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {char type; int session_id_len; int session_id; int xcghash_len; int xcghash; int key_len; int key; int digest; int provctx; } ;
struct TYPE_8__ {scalar_t__ data_size; int * data; } ;
typedef TYPE_1__ OSSL_PARAM ;
typedef int OPENSSL_CTX ;
typedef TYPE_2__ KDF_SSHKDF ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (TYPE_1__ const*,int ) ;
 int * FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int *,TYPE_1__ const*,int *) ;
 int FUNC_4 (int *,int *,TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_5(void *VAR_6, const OSSL_PARAM VAR_7[])
{
    const OSSL_PARAM *VAR_8;
    KDF_SSHKDF *VAR_9 = VAR_6;
    OPENSSL_CTX *VAR_10 = FUNC_2(VAR_9->provctx);
    int VAR_11;

    if (!FUNC_3(&VAR_9->digest, VAR_7, VAR_10))
        return 0;

    if ((VAR_8 = FUNC_1(VAR_7, VAR_1)) != ((void*)0))
        if (!FUNC_4(&VAR_9->key, &VAR_9->key_len, VAR_8))
            return 0;

    if ((VAR_8 = FUNC_1(VAR_7, VAR_4))
        != ((void*)0))
        if (!FUNC_4(&VAR_9->xcghash, &VAR_9->xcghash_len, VAR_8))
            return 0;

    if ((VAR_8 = FUNC_1(VAR_7, VAR_2))
        != ((void*)0))
        if (!FUNC_4(&VAR_9->session_id, &VAR_9->session_id_len, VAR_8))
            return 0;

    if ((VAR_8 = FUNC_1(VAR_7, VAR_3))
        != ((void*)0)) {
        if (VAR_8->data == ((void*)0) || VAR_8->data_size == 0)
            return 0;
        VAR_11 = *(unsigned char *)VAR_8->data;
        if (VAR_11 < 65 || VAR_11 > 70) {
            FUNC_0(VAR_0, VAR_5);
            return 0;
        }
        VAR_9->type = (char)VAR_11;
    }
    return 1;
}
