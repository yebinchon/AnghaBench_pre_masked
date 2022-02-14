
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct provider_store_st {int lock; int providers; } ;
struct TYPE_8__ {int error_lib; struct provider_store_st* store; int * libctx; } ;
typedef int OSSL_provider_init_fn ;
typedef TYPE_1__ OSSL_PROVIDER ;
typedef int OPENSSL_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int *,char*,char const*) ;
 struct provider_store_st* FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *,char const*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (char const*,int *) ;
 scalar_t__ FUNC_10 (int ,TYPE_1__*) ;

OSSL_PROVIDER *FUNC_11(OPENSSL_CTX *VAR_4, const char *VAR_5,
                                 OSSL_provider_init_fn *VAR_6,
                                 int VAR_7)
{
    struct provider_store_st *VAR_8 = ((void*)0);
    OSSL_PROVIDER *VAR_9 = ((void*)0);

    if ((VAR_8 = FUNC_5(VAR_4)) == ((void*)0))
        return ((void*)0);

    if ((VAR_9 = FUNC_6(VAR_4, VAR_5,
                                   VAR_7)) != ((void*)0)) {
        FUNC_7(VAR_9);
        FUNC_4(VAR_2, VAR_1, ((void*)0),
                       "name=%s", VAR_5);
        return ((void*)0);
    }


    if ((VAR_9 = FUNC_9(VAR_5, VAR_6)) == ((void*)0))
        return ((void*)0);

    FUNC_1(VAR_8->lock);
    if (!FUNC_8(VAR_9)) {
        FUNC_7(VAR_9);
        VAR_9 = ((void*)0);
    } else if (FUNC_10(VAR_8->providers, VAR_9) == 0) {
        FUNC_7(VAR_9);
        FUNC_7(VAR_9);
        VAR_9 = ((void*)0);
    } else {
        VAR_9->libctx = VAR_4;
        VAR_9->store = VAR_8;

        VAR_9->error_lib = FUNC_3();

    }
    FUNC_0(VAR_8->lock);

    if (VAR_9 == ((void*)0))
        FUNC_2(VAR_0, VAR_3);






    return VAR_9;
}
