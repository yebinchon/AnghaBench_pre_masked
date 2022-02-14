
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * mdctx; int mdsize; int * md; int libctx; } ;
typedef TYPE_1__ PROV_DSA_CTX ;
typedef int EVP_MD ;


 int FUNC_0 (int *,int *,int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 (int ,char const*,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void*,void*) ;

__attribute__((used)) static int FUNC_5(void *VAR_0, const char *VAR_1,
                                      const char *VAR_2, void *VAR_3)
{
    PROV_DSA_CTX *VAR_4 = (PROV_DSA_CTX *)VAR_0;
    EVP_MD *VAR_5;

    if (!FUNC_4(VAR_0, VAR_3))
        return 0;

    VAR_5 = FUNC_2(VAR_4->libctx, VAR_1, VAR_2);
    if (VAR_5 == ((void*)0))
        return 0;
    VAR_4->md = VAR_5;
    VAR_4->mdsize = FUNC_3(VAR_5);
    VAR_4->mdctx = FUNC_1();
    if (VAR_4->mdctx == ((void*)0))
        return 0;

    if (!FUNC_0(VAR_4->mdctx, VAR_5, ((void*)0)))
        return 0;

    return 1;
}
