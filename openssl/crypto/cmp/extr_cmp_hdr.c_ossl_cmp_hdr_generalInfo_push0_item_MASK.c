
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int generalInfo; } ;
typedef TYPE_1__ OSSL_CMP_PKIHEADER ;
typedef int OSSL_CMP_ITAV ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int) ;

int FUNC_2(OSSL_CMP_PKIHEADER *VAR_0,
                                        OSSL_CMP_ITAV *VAR_1)
{
    if (!FUNC_1(VAR_0 != ((void*)0) && VAR_1 != ((void*)0)))
        return 0;
    return FUNC_0(&VAR_0->generalInfo, VAR_1);
}
