
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct provider_store_st {int lock; int providers; } ;
struct TYPE_6__ {char* name; int member_0; } ;
typedef TYPE_1__ OSSL_PROVIDER ;
typedef int OPENSSL_CTX ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 struct provider_store_st* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int ,int) ;

OSSL_PROVIDER *FUNC_7(OPENSSL_CTX *VAR_1, const char *VAR_2,
                                  int VAR_3)
{
    struct provider_store_st *VAR_4 = ((void*)0);
    OSSL_PROVIDER *VAR_5 = ((void*)0);

    if ((VAR_4 = FUNC_3(VAR_1)) != ((void*)0)) {
        OSSL_PROVIDER VAR_6 = { 0, };
        int VAR_7;






        if (!VAR_3)
            FUNC_2(VAR_0, ((void*)0));


        VAR_6.name = (char *)VAR_2;
        FUNC_1(VAR_4->lock);
        if ((VAR_7 = FUNC_5(VAR_4->providers, &VAR_6)) == -1
            || (VAR_5 = FUNC_6(VAR_4->providers, VAR_7)) == ((void*)0)
            || !FUNC_4(VAR_5))
            VAR_5 = ((void*)0);
        FUNC_0(VAR_4->lock);
    }

    return VAR_5;
}
