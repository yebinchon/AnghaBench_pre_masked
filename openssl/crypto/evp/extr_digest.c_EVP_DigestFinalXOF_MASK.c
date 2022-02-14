
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* digest; int md_data; int provctx; } ;
struct TYPE_10__ {int (* dfinal ) (int ,unsigned char*,size_t*,size_t) ;int flags; int (* final ) (TYPE_2__*,unsigned char*) ;int ctx_size; int (* cleanup ) (TYPE_2__*) ;scalar_t__ (* md_ctrl ) (TYPE_2__*,int ,int,int *) ;int * prov; } ;
typedef int OSSL_PARAM ;
typedef TYPE_2__ EVP_MD_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 size_t VAR_6 ;
 int FUNC_4 (int ,int ) ;
 int VAR_7 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,size_t*) ;
 int FUNC_7 (int ,unsigned char*,size_t*,size_t) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ,int,int *) ;
 int FUNC_9 (TYPE_2__*,unsigned char*) ;
 int FUNC_10 (TYPE_2__*) ;

int FUNC_11(EVP_MD_CTX *VAR_8, unsigned char *VAR_9, size_t VAR_10)
{
    int VAR_11 = 0;
    OSSL_PARAM VAR_12[2];
    size_t VAR_13 = 0;

    if (VAR_8->digest == ((void*)0) || VAR_8->digest->prov == ((void*)0))
        goto legacy;

    if (VAR_8->digest->dfinal == ((void*)0)) {
        FUNC_3(VAR_0, VAR_4);
        return 0;
    }

    VAR_12[VAR_13++] = FUNC_6(VAR_7, &VAR_10);
    VAR_12[VAR_13++] = FUNC_5();

    if (FUNC_2(VAR_8, VAR_12) > 0)
        VAR_11 = VAR_8->digest->dfinal(VAR_8->provctx, VAR_9, &VAR_10, VAR_10);
    FUNC_0(VAR_8);
    return VAR_11;

legacy:
    if (VAR_8->digest->flags & VAR_3
        && VAR_10 <= VAR_6
        && VAR_8->digest->md_ctrl(VAR_8, VAR_1, (int)VAR_10, ((void*)0))) {
        VAR_11 = VAR_8->digest->final(VAR_8, VAR_9);
        if (VAR_8->digest->cleanup != ((void*)0)) {
            VAR_8->digest->cleanup(VAR_8);
            FUNC_1(VAR_8, VAR_2);
        }
        FUNC_4(VAR_8->md_data, VAR_8->digest->ctx_size);
    } else {
        FUNC_3(VAR_0, VAR_5);
    }

    return VAR_11;
}
