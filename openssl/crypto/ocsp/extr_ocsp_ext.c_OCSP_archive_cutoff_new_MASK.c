
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_EXTENSION ;
typedef int ASN1_GENERALIZEDTIME ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*) ;
 int VAR_0 ;
 int * FUNC_3 (int ,int ,int *) ;

X509_EXTENSION *FUNC_4(char *VAR_1)
{
    X509_EXTENSION *VAR_2 = ((void*)0);
    ASN1_GENERALIZEDTIME *VAR_3 = ((void*)0);

    if ((VAR_3 = FUNC_1()) == ((void*)0))
        goto err;
    if (!(FUNC_2(VAR_3, VAR_1)))
        goto err;
    VAR_2 = FUNC_3(VAR_0, 0, VAR_3);
 err:
    FUNC_0(VAR_3);
    return VAR_2;
}
