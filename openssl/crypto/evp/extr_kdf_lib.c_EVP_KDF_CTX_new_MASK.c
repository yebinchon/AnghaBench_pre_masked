
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int (* freectx ) (int *) ;int prov; int * (* newctx ) (int ) ;} ;
struct TYPE_8__ {TYPE_2__* meth; int * data; } ;
typedef TYPE_1__ EVP_KDF_CTX ;
typedef TYPE_2__ EVP_KDF ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

EVP_KDF_CTX *FUNC_7(EVP_KDF *VAR_2)
{
    EVP_KDF_CTX *VAR_3 = ((void*)0);

    if (VAR_2 == ((void*)0))
        return ((void*)0);

    VAR_3 = FUNC_3(sizeof(EVP_KDF_CTX));
    if (VAR_3 == ((void*)0)
        || (VAR_3->data = VAR_2->newctx(FUNC_4(VAR_2->prov))) == ((void*)0)
        || !FUNC_0(VAR_2)) {
        FUNC_1(VAR_1, VAR_0);
        if (VAR_3 != ((void*)0))
            VAR_2->freectx(VAR_3->data);
        FUNC_2(VAR_3);
        VAR_3 = ((void*)0);
    } else {
        VAR_3->meth = VAR_2;
    }
    return VAR_3;
}
