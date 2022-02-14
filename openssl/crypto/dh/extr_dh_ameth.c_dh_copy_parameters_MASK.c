
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * dh; } ;
struct TYPE_6__ {int * ameth; TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;


 int * FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(EVP_PKEY *VAR_1, const EVP_PKEY *VAR_2)
{
    if (VAR_1->pkey.dh == ((void*)0)) {
        VAR_1->pkey.dh = FUNC_0();
        if (VAR_1->pkey.dh == ((void*)0))
            return 0;
    }
    return FUNC_1(VAR_1->pkey.dh, VAR_2->pkey.dh,
                             VAR_2->ameth == &VAR_0);
}
