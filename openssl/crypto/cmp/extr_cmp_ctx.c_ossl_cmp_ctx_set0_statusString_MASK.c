
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * statusString; } ;
typedef int OSSL_CMP_PKIFREETEXT ;
typedef TYPE_1__ OSSL_CMP_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(OSSL_CMP_CTX *VAR_1,
                                   OSSL_CMP_PKIFREETEXT *VAR_2)
{
    if (!FUNC_0(VAR_1 != ((void*)0)))
        return 0;
    FUNC_1(VAR_1->statusString, VAR_0);
    VAR_1->statusString = VAR_2;
    return 1;
}
