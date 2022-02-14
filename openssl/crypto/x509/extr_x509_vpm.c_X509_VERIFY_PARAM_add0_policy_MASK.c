
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * policies; } ;
typedef TYPE_1__ X509_VERIFY_PARAM ;
typedef int ASN1_OBJECT ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(X509_VERIFY_PARAM *VAR_0,
                                  ASN1_OBJECT *VAR_1)
{
    if (VAR_0->policies == ((void*)0)) {
        VAR_0->policies = FUNC_0();
        if (VAR_0->policies == ((void*)0))
            return 0;
    }
    if (!FUNC_1(VAR_0->policies, VAR_1))
        return 0;
    return 1;
}
