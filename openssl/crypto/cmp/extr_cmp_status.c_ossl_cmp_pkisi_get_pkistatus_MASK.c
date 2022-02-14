
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * status; } ;
typedef TYPE_1__ OSSL_CMP_PKISI ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

int FUNC_2(const OSSL_CMP_PKISI *VAR_0)
{
    if (!FUNC_0(VAR_0 != ((void*)0) && VAR_0->status != ((void*)0)))
        return -1;
    return FUNC_1(VAR_0->status);
}
