
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * pctx; } ;
typedef int EVP_PKEY_CTX ;
typedef TYPE_1__ EVP_MD_CTX ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(EVP_MD_CTX *VAR_1, EVP_PKEY_CTX *VAR_2)
{




    if (!FUNC_2(VAR_1, VAR_0))
        FUNC_3(VAR_1->pctx);

    VAR_1->pctx = VAR_2;

    if (VAR_2 != ((void*)0)) {

        FUNC_1(VAR_1, VAR_0);
    } else {
        FUNC_0(VAR_1, VAR_0);
    }
}
