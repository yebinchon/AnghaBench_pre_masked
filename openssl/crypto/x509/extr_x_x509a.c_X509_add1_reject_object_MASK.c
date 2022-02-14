
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * reject; } ;
typedef TYPE_1__ X509_CERT_AUX ;
typedef int X509 ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int const*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(X509 *VAR_0, const ASN1_OBJECT *VAR_1)
{
    X509_CERT_AUX *VAR_2;
    ASN1_OBJECT *VAR_3;
    if ((VAR_3 = FUNC_1(VAR_1)) == ((void*)0))
        return 0;
    if ((VAR_2 = FUNC_2(VAR_0)) == ((void*)0))
        goto err;
    if (VAR_2->reject == ((void*)0)
        && (VAR_2->reject = FUNC_3()) == ((void*)0))
        goto err;
    return FUNC_4(VAR_2->reject, VAR_3);
 err:
    FUNC_0(VAR_3);
    return 0;
}
