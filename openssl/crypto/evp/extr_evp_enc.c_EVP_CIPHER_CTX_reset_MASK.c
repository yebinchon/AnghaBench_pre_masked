
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int engine; scalar_t__ cipher_data; TYPE_1__* cipher; int * fetched_cipher; int * provctx; } ;
struct TYPE_6__ {scalar_t__ ctx_size; int (* cleanup ) (TYPE_2__*) ;int (* freectx ) (int *) ;int * prov; } ;
typedef TYPE_2__ EVP_CIPHER_CTX ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;

int FUNC_7(EVP_CIPHER_CTX *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return 1;

    if (VAR_0->cipher == ((void*)0) || VAR_0->cipher->prov == ((void*)0))
        goto legacy;

    if (VAR_0->provctx != ((void*)0)) {
        if (VAR_0->cipher->freectx != ((void*)0))
            VAR_0->cipher->freectx(VAR_0->provctx);
        VAR_0->provctx = ((void*)0);
    }
    if (VAR_0->fetched_cipher != ((void*)0))
        FUNC_1(VAR_0->fetched_cipher);
    FUNC_4(VAR_0, 0, sizeof(*VAR_0));

    return 1;


 legacy:

    if (VAR_0->cipher != ((void*)0)) {
        if (VAR_0->cipher->cleanup && !VAR_0->cipher->cleanup(VAR_0))
            return 0;

        if (VAR_0->cipher_data && VAR_0->cipher->ctx_size)
            FUNC_2(VAR_0->cipher_data, VAR_0->cipher->ctx_size);
    }
    FUNC_3(VAR_0->cipher_data);

    FUNC_0(VAR_0->engine);

    FUNC_4(VAR_0, 0, sizeof(*VAR_0));
    return 1;
}
