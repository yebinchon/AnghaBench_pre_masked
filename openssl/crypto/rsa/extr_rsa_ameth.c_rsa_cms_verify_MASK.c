
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int algorithm; } ;
typedef TYPE_1__ X509_ALGOR ;
typedef int EVP_PKEY_CTX ;
typedef int CMS_SignerInfo ;


 int FUNC_0 (int *,int *,int *,int *,TYPE_1__**) ;
 int * FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int,int *,int*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_7(CMS_SignerInfo *VAR_4)
{
    int VAR_5, VAR_6;
    X509_ALGOR *VAR_7;
    EVP_PKEY_CTX *VAR_8 = FUNC_1(VAR_4);

    FUNC_0(VAR_4, ((void*)0), ((void*)0), ((void*)0), &VAR_7);
    VAR_5 = FUNC_3(VAR_7->algorithm);
    if (VAR_5 == VAR_0)
        return FUNC_6(((void*)0), VAR_8, VAR_7, ((void*)0));

    if (FUNC_5(VAR_8)) {
        FUNC_4(VAR_2, VAR_3);
        return 0;
    }
    if (VAR_5 == VAR_1)
        return 1;

    if (FUNC_2(VAR_5, ((void*)0), &VAR_6)) {
        if (VAR_6 == VAR_1)
            return 1;
    }
    return 0;
}
