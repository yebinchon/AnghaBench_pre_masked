
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* freectx ) (int *) ;} ;
struct TYPE_5__ {TYPE_3__* meth; int * data; } ;
typedef TYPE_1__ EVP_KDF_CTX ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

void FUNC_3(EVP_KDF_CTX *VAR_0)
{
    if (VAR_0 != ((void*)0)) {
        VAR_0->meth->freectx(VAR_0->data);
        VAR_0->data = ((void*)0);
        FUNC_0(VAR_0->meth);
        FUNC_1(VAR_0);
    }
}
