
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * mds; } ;
typedef TYPE_1__ TS_RESP_CTX ;
typedef int EVP_MD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int const*) ;

int FUNC_3(TS_RESP_CTX *VAR_2, const EVP_MD *VAR_3)
{
    if (VAR_2->mds == ((void*)0)
        && (VAR_2->mds = FUNC_1()) == ((void*)0))
        goto err;
    if (!FUNC_2(VAR_2->mds, VAR_3))
        goto err;

    return 1;
 err:
    FUNC_0(VAR_1, VAR_0);
    return 0;
}
