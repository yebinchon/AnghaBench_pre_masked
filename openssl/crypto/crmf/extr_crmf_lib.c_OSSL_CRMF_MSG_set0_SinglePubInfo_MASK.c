
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pubLocation; int pubMethod; } ;
typedef TYPE_1__ OSSL_CRMF_SINGLEPUBINFO ;
typedef int GENERAL_NAME ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_3(OSSL_CRMF_SINGLEPUBINFO *VAR_4,
                                     int VAR_5, GENERAL_NAME *VAR_6)
{
    if (VAR_4 == ((void*)0)
            || VAR_5 < VAR_2
            || VAR_5 > VAR_3) {
        FUNC_1(VAR_0,
                VAR_1);
        return 0;
    }

    if (!FUNC_0(VAR_4->pubMethod, VAR_5))
        return 0;
    FUNC_2(VAR_4->pubLocation);
    VAR_4->pubLocation = VAR_6;
    return 1;
}
