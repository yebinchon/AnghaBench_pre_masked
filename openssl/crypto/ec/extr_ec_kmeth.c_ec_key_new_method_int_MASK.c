
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ (* init ) (TYPE_1__*) ;} ;
struct TYPE_10__ {int references; int version; TYPE_6__* meth; int ex_data; int conv_form; int * engine; int * lock; int * libctx; } ;
typedef int OPENSSL_CTX ;
typedef int ENGINE ;
typedef TYPE_1__ EC_KEY ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*,int *) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_6__* FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 TYPE_6__* FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;

EC_KEY *FUNC_11(OPENSSL_CTX *VAR_6, ENGINE *VAR_7)
{
    EC_KEY *VAR_8 = FUNC_9(sizeof(*VAR_8));

    if (VAR_8 == ((void*)0)) {
        FUNC_4(VAR_1, VAR_4);
        return ((void*)0);
    }

    VAR_8->libctx = VAR_6;

    VAR_8->references = 1;
    VAR_8->lock = FUNC_0();
    if (VAR_8->lock == ((void*)0)) {
        FUNC_4(VAR_1, VAR_4);
        FUNC_8(VAR_8);
        return ((void*)0);
    }

    VAR_8->meth = FUNC_3();

    if (VAR_7 != ((void*)0)) {
        if (!FUNC_7(VAR_7)) {
            FUNC_4(VAR_1, VAR_2);
            goto err;
        }
        VAR_8->engine = VAR_7;
    } else
        VAR_8->engine = FUNC_6();
    if (VAR_8->engine != ((void*)0)) {
        VAR_8->meth = FUNC_5(VAR_8->engine);
        if (VAR_8->meth == ((void*)0)) {
            FUNC_4(VAR_1, VAR_2);
            goto err;
        }
    }


    VAR_8->version = 1;
    VAR_8->conv_form = VAR_5;



    if (!FUNC_1(VAR_0, VAR_8, &VAR_8->ex_data)) {
        goto err;
    }


    if (VAR_8->meth->init != ((void*)0) && VAR_8->meth->init(VAR_8) == 0) {
        FUNC_4(VAR_1, VAR_3);
        goto err;
    }
    return VAR_8;

 err:
    FUNC_2(VAR_8);
    return ((void*)0);
}
