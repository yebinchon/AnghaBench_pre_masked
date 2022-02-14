
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int * sk; int * ctx; } ;
struct TYPE_16__ {int argp; int argl; int (* new_func ) (void*,void*,TYPE_4__*,int,int ,int ) ;} ;
struct TYPE_15__ {int meth; } ;
struct TYPE_14__ {int ex_data_lock; } ;
typedef TYPE_1__ OSSL_EX_DATA_GLOBAL ;
typedef int OPENSSL_CTX ;
typedef TYPE_2__ EX_CALLBACKS ;
typedef TYPE_3__ EX_CALLBACK ;
typedef TYPE_4__ CRYPTO_EX_DATA ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__**) ;
 TYPE_3__** FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_3__**) ;
 TYPE_2__* FUNC_6 (int *,int) ;
 TYPE_1__* FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 TYPE_3__* FUNC_9 (int ,int) ;
 int FUNC_10 (void*,void*,TYPE_4__*,int,int ,int ) ;

int FUNC_11(OPENSSL_CTX *VAR_2, int VAR_3, void *VAR_4,
                          CRYPTO_EX_DATA *VAR_5)
{
    int VAR_6, VAR_7;
    void *VAR_8;
    EX_CALLBACK **VAR_9 = ((void*)0);
    EX_CALLBACK *VAR_10[10];
    EX_CALLBACKS *VAR_11;
    OSSL_EX_DATA_GLOBAL *VAR_12 = FUNC_7(VAR_2);

    if (VAR_12 == ((void*)0))
        return 0;

    VAR_11 = FUNC_6(VAR_2, VAR_3);
    if (VAR_11 == ((void*)0))
        return 0;

    VAR_5->ctx = VAR_2;
    VAR_5->sk = ((void*)0);

    VAR_6 = FUNC_8(VAR_11->meth);
    if (VAR_6 > 0) {
        if (VAR_6 < (int)FUNC_5(VAR_10))
            VAR_9 = VAR_10;
        else
            VAR_9 = FUNC_4(sizeof(*VAR_9) * VAR_6);
        if (VAR_9 != ((void*)0))
            for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
                VAR_9[VAR_7] = FUNC_9(VAR_11->meth, VAR_7);
    }
    FUNC_0(VAR_12->ex_data_lock);

    if (VAR_6 > 0 && VAR_9 == ((void*)0)) {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    }
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        if (VAR_9[VAR_7] != ((void*)0) && VAR_9[VAR_7]->new_func != ((void*)0)) {
            VAR_8 = FUNC_1(VAR_5, VAR_7);
            VAR_9[VAR_7]->new_func(VAR_4, VAR_8, VAR_5, VAR_7,
                                 VAR_9[VAR_7]->argl, VAR_9[VAR_7]->argp);
        }
    }
    if (VAR_9 != VAR_10)
        FUNC_3(VAR_9);
    return 1;
}
