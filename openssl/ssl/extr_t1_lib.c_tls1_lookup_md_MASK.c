
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hash; int hash_idx; } ;
typedef TYPE_1__ SIGALG_LOOKUP ;
typedef int EVP_MD ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ) ;

int FUNC_1(const SIGALG_LOOKUP *VAR_1, const EVP_MD **VAR_2)
{
    const EVP_MD *VAR_3;
    if (VAR_1 == ((void*)0))
        return 0;

    if (VAR_1->hash == VAR_0) {
        VAR_3 = ((void*)0);
    } else {
        VAR_3 = FUNC_0(VAR_1->hash_idx);
        if (VAR_3 == ((void*)0))
            return 0;
    }
    if (VAR_2)
        *VAR_2 = VAR_3;
    return 1;
}
