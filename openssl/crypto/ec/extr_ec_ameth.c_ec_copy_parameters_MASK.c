
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * ec; } ;
struct TYPE_6__ {TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef int EC_GROUP ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(EVP_PKEY *VAR_0, const EVP_PKEY *VAR_1)
{
    EC_GROUP *VAR_2 = FUNC_0(FUNC_2(VAR_1->pkey.ec));

    if (VAR_2 == ((void*)0))
        return 0;
    if (VAR_0->pkey.ec == ((void*)0)) {
        VAR_0->pkey.ec = FUNC_3();
        if (VAR_0->pkey.ec == ((void*)0))
            goto err;
    }
    if (FUNC_4(VAR_0->pkey.ec, VAR_2) == 0)
        goto err;
    FUNC_1(VAR_2);
    return 1;
 err:
    FUNC_1(VAR_2);
    return 0;
}
