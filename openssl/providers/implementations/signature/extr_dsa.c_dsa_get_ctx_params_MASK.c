
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * md; int mdname; int mdsize; } ;
typedef TYPE_1__ PROV_DSA_CTX ;
typedef int OSSL_PARAM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(void *VAR_2, OSSL_PARAM *VAR_3)
{
    PROV_DSA_CTX *VAR_4 = (PROV_DSA_CTX *)VAR_2;
    OSSL_PARAM *VAR_5;

    if (VAR_4 == ((void*)0) || VAR_3 == ((void*)0))
        return 0;

    VAR_5 = FUNC_1(VAR_3, VAR_1);
    if (VAR_5 != ((void*)0) && !FUNC_2(VAR_5, VAR_4->mdsize))
        return 0;

    VAR_5 = FUNC_1(VAR_3, VAR_0);
    if (VAR_5 != ((void*)0) && !FUNC_3(VAR_5, VAR_4->md == ((void*)0)
                                                    ? VAR_4->mdname
                                                    : FUNC_0(VAR_4->md)))
        return 0;

    return 1;
}
