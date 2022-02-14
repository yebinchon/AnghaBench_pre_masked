
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * failInfo; } ;
typedef TYPE_1__ OSSL_CMP_PKISI ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;

int FUNC_3(const OSSL_CMP_PKISI *VAR_2, int VAR_3)
{
    if (!FUNC_2(VAR_2 != ((void*)0) && VAR_2->failInfo != ((void*)0)))
        return -1;
    if (VAR_3 < 0 || VAR_3 > VAR_1) {
        FUNC_1(0, VAR_0);
        return -1;
    }

    return FUNC_0(VAR_2->failInfo, VAR_3);
}
