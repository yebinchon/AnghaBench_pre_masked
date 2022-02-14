
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * statusString; } ;
typedef TYPE_1__ OSSL_CMP_PKISI ;
typedef int OSSL_CMP_PKIFREETEXT ;


 int FUNC_0 (int ) ;

OSSL_CMP_PKIFREETEXT *FUNC_1(const OSSL_CMP_PKISI *VAR_0)
{
    if (!FUNC_0(VAR_0 != ((void*)0)))
        return ((void*)0);
    return VAR_0->statusString;
}
