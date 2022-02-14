
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * reqExtensions; } ;
typedef TYPE_1__ OSSL_CMP_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ,int) ;

int FUNC_2(OSSL_CMP_CTX *VAR_2)
{
    if (VAR_2 == ((void*)0)) {
        FUNC_0(0, VAR_0);
        return -1;
    }

    return VAR_2->reqExtensions != ((void*)0)
        && FUNC_1(VAR_2->reqExtensions,
                                 VAR_1, -1) >= 0;
}
