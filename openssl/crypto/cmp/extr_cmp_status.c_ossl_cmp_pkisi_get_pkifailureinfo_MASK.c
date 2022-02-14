
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * failInfo; } ;
typedef TYPE_1__ OSSL_CMP_PKISI ;


 scalar_t__ FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

int FUNC_2(const OSSL_CMP_PKISI *VAR_1)
{
    int VAR_2;
    int VAR_3 = 0;

    if (!FUNC_1(VAR_1 != ((void*)0) && VAR_1->failInfo != ((void*)0)))
        return -1;
    for (VAR_2 = 0; VAR_2 <= VAR_0; VAR_2++)
        if (FUNC_0(VAR_1->failInfo, VAR_2))
            VAR_3 |= 1 << VAR_2;
    return VAR_3;
}
