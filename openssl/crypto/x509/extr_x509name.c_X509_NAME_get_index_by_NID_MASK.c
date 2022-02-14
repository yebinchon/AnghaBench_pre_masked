
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_NAME ;
typedef int ASN1_OBJECT ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;

int FUNC_2(X509_NAME *VAR_0, int VAR_1, int VAR_2)
{
    ASN1_OBJECT *VAR_3;

    VAR_3 = FUNC_0(VAR_1);
    if (VAR_3 == ((void*)0))
        return -2;
    return FUNC_1(VAR_0, VAR_3, VAR_2);
}
