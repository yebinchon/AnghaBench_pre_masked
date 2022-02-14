
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prop_name_idx; int prop_names; } ;
typedef TYPE_1__ PROPERTY_STRING_DATA ;
typedef int OSSL_PROPERTY_IDX ;
typedef int OPENSSL_CTX ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int ,int *,char const*) ;
 int VAR_1 ;

OSSL_PROPERTY_IDX FUNC_2(OPENSSL_CTX *VAR_2, const char *VAR_3,
                                     int VAR_4)
{
    PROPERTY_STRING_DATA *VAR_5
        = FUNC_0(VAR_2, VAR_0,
                               &VAR_1);

    if (VAR_5 == ((void*)0))
        return 0;
    return FUNC_1(VAR_5->prop_names,
                                VAR_4 ? &VAR_5->prop_name_idx : ((void*)0),
                                VAR_3);
}
