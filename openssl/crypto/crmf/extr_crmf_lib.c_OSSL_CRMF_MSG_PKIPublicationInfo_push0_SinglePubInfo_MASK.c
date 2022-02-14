
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pubInfos; } ;
typedef int OSSL_CRMF_SINGLEPUBINFO ;
typedef TYPE_1__ OSSL_CRMF_PKIPUBLICATIONINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(
                                 OSSL_CRMF_PKIPUBLICATIONINFO *VAR_2,
                                 OSSL_CRMF_SINGLEPUBINFO *VAR_3)
{
    if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
        FUNC_0(VAR_0,
                VAR_1);
        return 0;
    }
    if (VAR_2->pubInfos == ((void*)0))
        VAR_2->pubInfos = FUNC_1();
    if (VAR_2->pubInfos == ((void*)0))
        return 0;

    return FUNC_2(VAR_2->pubInfos, VAR_3);
}
