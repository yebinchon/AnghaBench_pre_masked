
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_EXTENSION ;
struct TYPE_3__ {int * extensions; } ;
typedef int OSSL_CRMF_MSG ;
typedef TYPE_1__ OSSL_CRMF_CERTTEMPLATE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(OSSL_CRMF_MSG *VAR_2,
                                  X509_EXTENSION *VAR_3)
{
    int VAR_4 = 0;
    OSSL_CRMF_CERTTEMPLATE *VAR_5 = FUNC_1(VAR_2);

    if (VAR_5 == ((void*)0) || VAR_3 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    if (VAR_5->extensions == ((void*)0)) {
        if ((VAR_5->extensions = FUNC_3()) == ((void*)0))
            goto err;
        VAR_4 = 1;
    }

    if (!FUNC_4(VAR_5->extensions, VAR_3))
        goto err;
    return 1;
 err:
    if (VAR_4 != 0) {
        FUNC_2(VAR_5->extensions);
        VAR_5->extensions = ((void*)0);
    }
    return 0;
}
