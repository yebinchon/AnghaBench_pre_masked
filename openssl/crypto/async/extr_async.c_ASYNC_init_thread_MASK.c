
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {size_t max_size; size_t curr_size; int * jobs; } ;
typedef TYPE_1__ async_pool ;
struct TYPE_11__ {int * funcargs; int fibrectx; } ;
typedef TYPE_2__ ASYNC_JOB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int *) ;
 TYPE_1__* FUNC_4 (int) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 () ;
 int FUNC_9 (int *,int *,int ) ;
 int VAR_6 ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *,size_t) ;
 int FUNC_12 (int *,TYPE_2__*) ;

int FUNC_13(size_t VAR_7, size_t VAR_8)
{
    async_pool *VAR_9;
    size_t VAR_10 = 0;

    if (VAR_8 > VAR_7) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }

    if (!FUNC_3(VAR_4, ((void*)0)))
        return 0;

    if (!FUNC_9(((void*)0), ((void*)0), VAR_5))
        return 0;

    VAR_9 = FUNC_4(sizeof(*VAR_9));
    if (VAR_9 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_3);
        return 0;
    }

    VAR_9->jobs = FUNC_11(((void*)0), VAR_8);
    if (VAR_9->jobs == ((void*)0)) {
        FUNC_0(VAR_0, VAR_3);
        FUNC_2(VAR_9);
        return 0;
    }

    VAR_9->max_size = VAR_7;


    while (VAR_8--) {
        ASYNC_JOB *VAR_11;
        VAR_11 = FUNC_8();
        if (VAR_11 == ((void*)0) || !FUNC_6(&VAR_11->fibrectx)) {




            FUNC_7(VAR_11);
            break;
        }
        VAR_11->funcargs = ((void*)0);
        FUNC_12(VAR_9->jobs, VAR_11);
        VAR_10++;
    }
    VAR_9->curr_size = VAR_10;
    if (!FUNC_1(&VAR_6, VAR_9)) {
        FUNC_0(VAR_0, VAR_1);
        goto err;
    }

    return 1;
err:
    FUNC_5(VAR_9);
    FUNC_10(VAR_9->jobs);
    FUNC_2(VAR_9);
    return 0;
}
