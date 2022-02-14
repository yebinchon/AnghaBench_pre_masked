
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_6__ {TYPE_1__* validity; } ;
struct TYPE_5__ {int * notAfter; int * notBefore; } ;
typedef TYPE_1__ OSSL_CRMF_OPTIONALVALIDITY ;
typedef int OSSL_CRMF_MSG ;
typedef TYPE_2__ OSSL_CRMF_CERTTEMPLATE ;
typedef int ASN1_TIME ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__* FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 () ;

int FUNC_5(OSSL_CRMF_MSG *VAR_2, time_t VAR_3, time_t VAR_4)
{
    OSSL_CRMF_OPTIONALVALIDITY *VAR_5 = ((void*)0);
    ASN1_TIME *VAR_6 = ((void*)0);
    ASN1_TIME *VAR_7 = ((void*)0);
    OSSL_CRMF_CERTTEMPLATE *VAR_8 = FUNC_3(VAR_2);

    if (VAR_8 == ((void*)0)) {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    }

    if (VAR_3 != 0 && ((VAR_6 = FUNC_1(((void*)0), VAR_3)) == ((void*)0)))
        goto err;
    if (VAR_4 != 0 && ((VAR_7 = FUNC_1(((void*)0), VAR_4)) == ((void*)0)))
        goto err;
    if ((VAR_5 = FUNC_4()) == ((void*)0))
        goto err;

    VAR_5->notBefore = VAR_6;
    VAR_5->notAfter = VAR_7;

    VAR_8->validity = VAR_5;

    return 1;
 err:
    FUNC_0(VAR_6);
    FUNC_0(VAR_7);
    return 0;
}
