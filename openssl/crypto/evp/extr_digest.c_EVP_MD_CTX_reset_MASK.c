
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int engine; TYPE_1__* digest; scalar_t__ md_data; int * provctx; int * reqdigest; int * fetched_digest; int pctx; } ;
struct TYPE_8__ {scalar_t__ ctx_size; int (* cleanup ) (TYPE_2__*) ;int (* freectx ) (int *) ;} ;
typedef TYPE_2__ EVP_MD_CTX ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;

int FUNC_9(EVP_MD_CTX *VAR_3)
{
    if (VAR_3 == ((void*)0))
        return 1;







    if (!FUNC_2(VAR_3, VAR_1))
        FUNC_4(VAR_3->pctx);


    FUNC_3(VAR_3->fetched_digest);
    VAR_3->fetched_digest = ((void*)0);
    VAR_3->reqdigest = ((void*)0);

    if (VAR_3->provctx != ((void*)0)) {
        if (VAR_3->digest->freectx != ((void*)0))
            VAR_3->digest->freectx(VAR_3->provctx);
        VAR_3->provctx = ((void*)0);
        FUNC_1(VAR_3, VAR_0);
    }







    if (VAR_3->digest && VAR_3->digest->cleanup
        && !FUNC_2(VAR_3, VAR_0))
        VAR_3->digest->cleanup(VAR_3);
    if (VAR_3->digest && VAR_3->digest->ctx_size && VAR_3->md_data
        && !FUNC_2(VAR_3, VAR_2)) {
        FUNC_6(VAR_3->md_data, VAR_3->digest->ctx_size);
    }


    FUNC_0(VAR_3->engine);




    FUNC_5(VAR_3, sizeof(*VAR_3));

    return 1;
}
