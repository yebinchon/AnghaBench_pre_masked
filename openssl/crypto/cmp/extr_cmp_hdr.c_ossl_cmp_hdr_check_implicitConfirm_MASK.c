
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int infoType; } ;
struct TYPE_5__ {int generalInfo; } ;
typedef TYPE_1__ OSSL_CMP_PKIHEADER ;
typedef TYPE_2__ OSSL_CMP_ITAV ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ,int) ;

int FUNC_4(const OSSL_CMP_PKIHEADER *VAR_1)
{
    int VAR_2;
    int VAR_3;
    OSSL_CMP_ITAV *VAR_4;

    if (!FUNC_1(VAR_1 != ((void*)0)))
        return 0;

    VAR_2 = FUNC_2(VAR_1->generalInfo);
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        VAR_4 = FUNC_3(VAR_1->generalInfo, VAR_3);
        if (VAR_4 != ((void*)0)
                && FUNC_0(VAR_4->infoType) == VAR_0)
            return 1;
    }

    return 0;
}
