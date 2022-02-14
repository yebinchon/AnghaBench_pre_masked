
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * mdctx; } ;
typedef TYPE_1__ PROV_DSA_CTX ;


 int FUNC_0 (int *,unsigned char const*,size_t) ;

int FUNC_1(void *VAR_0, const unsigned char *VAR_1,
                                 size_t VAR_2)
{
    PROV_DSA_CTX *VAR_3 = (PROV_DSA_CTX *)VAR_0;

    if (VAR_3 == ((void*)0) || VAR_3->mdctx == ((void*)0))
        return 0;

    return FUNC_0(VAR_3->mdctx, VAR_1, VAR_2);
}
