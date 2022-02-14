
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int (* init ) (TYPE_1__*) ;int flags; } ;
struct TYPE_10__ {int references; TYPE_5__* meth; int ex_data; int flags; int * engine; int * lock; } ;
typedef int ENGINE ;
typedef TYPE_1__ DH ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*,int *) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_5__* FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 TYPE_5__* FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int) ;
 int FUNC_10 (TYPE_1__*) ;

DH *FUNC_11(ENGINE *VAR_5)
{
    DH *VAR_6 = FUNC_9(sizeof(*VAR_6));

    if (VAR_6 == ((void*)0)) {
        FUNC_4(VAR_1, VAR_4);
        return ((void*)0);
    }

    VAR_6->references = 1;
    VAR_6->lock = FUNC_0();
    if (VAR_6->lock == ((void*)0)) {
        FUNC_4(VAR_1, VAR_4);
        FUNC_8(VAR_6);
        return ((void*)0);
    }

    VAR_6->meth = FUNC_3();

    VAR_6->flags = VAR_6->meth->flags;
    if (VAR_5) {
        if (!FUNC_7(VAR_5)) {
            FUNC_4(VAR_1, VAR_2);
            goto err;
        }
        VAR_6->engine = VAR_5;
    } else
        VAR_6->engine = FUNC_6();
    if (VAR_6->engine) {
        VAR_6->meth = FUNC_5(VAR_6->engine);
        if (VAR_6->meth == ((void*)0)) {
            FUNC_4(VAR_1, VAR_2);
            goto err;
        }
    }


    VAR_6->flags = VAR_6->meth->flags;

    if (!FUNC_1(VAR_0, VAR_6, &VAR_6->ex_data))
        goto err;

    if ((VAR_6->meth->init != ((void*)0)) && !VAR_6->meth->init(VAR_6)) {
        FUNC_4(VAR_1, VAR_3);
        goto err;
    }

    return VAR_6;

 err:
    FUNC_2(VAR_6);
    return ((void*)0);
}
