
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * freeText; } ;
typedef TYPE_1__ OSSL_CMP_PKIHEADER ;
typedef int ASN1_UTF8STRING ;


 int FUNC_0 (int) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(OSSL_CMP_PKIHEADER *VAR_0, ASN1_UTF8STRING *VAR_1)
{
    if (!FUNC_0(VAR_0 != ((void*)0) && VAR_1 != ((void*)0)))
        return 0;

    if (VAR_0->freeText == ((void*)0)
            && (VAR_0->freeText = FUNC_1()) == ((void*)0))
        return 0;

    return FUNC_2(VAR_0->freeText, VAR_1);
}
