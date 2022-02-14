
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_EXTENSIONS ;
struct TYPE_3__ {int * extensions; } ;
typedef int OSSL_CRMF_MSG ;
typedef TYPE_1__ OSSL_CRMF_CERTTEMPLATE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

int FUNC_5(OSSL_CRMF_MSG *VAR_3,
                                  X509_EXTENSIONS *VAR_4)
{
    OSSL_CRMF_CERTTEMPLATE *VAR_5 = FUNC_1(VAR_3);

    if (VAR_5 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    if (FUNC_3(VAR_4) == 0) {
        FUNC_2(VAR_4);
        VAR_4 = ((void*)0);
    }

    FUNC_4(VAR_5->extensions, VAR_2);
    VAR_5->extensions = VAR_4;
    return 1;
}
