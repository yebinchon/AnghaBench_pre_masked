
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * key; } ;
typedef TYPE_1__ OSSL_PARAM ;


 scalar_t__ FUNC_0 (char const*,int *) ;

OSSL_PARAM *FUNC_1(OSSL_PARAM *VAR_0, const char *VAR_1)
{
    if (VAR_0 != ((void*)0) && VAR_1 != ((void*)0))
        for (; VAR_0->key != ((void*)0); VAR_0++)
            if (FUNC_0(VAR_1, VAR_0->key) == 0)
                return VAR_0;
    return ((void*)0);
}
