
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_CMP_PKIHEADER ;
typedef int OSSL_CMP_ITAV ;
typedef int ASN1_TYPE ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;

int FUNC_7(OSSL_CMP_PKIHEADER *VAR_1)
{
    OSSL_CMP_ITAV *VAR_2;
    ASN1_TYPE *VAR_3;

    if (!FUNC_5(VAR_1 != ((void*)0)))
        return 0;
    VAR_3 = (ASN1_TYPE *)FUNC_0();
    if (VAR_3 == ((void*)0))
        return 0;
    if ((VAR_2 = FUNC_3(FUNC_2(VAR_0),
                                     VAR_3)) == ((void*)0))
        goto err;
    if (!FUNC_6(VAR_1, VAR_2))
        goto err;
    return 1;

 err:
    FUNC_1(VAR_3);
    FUNC_4(VAR_2);
    return 0;
}
