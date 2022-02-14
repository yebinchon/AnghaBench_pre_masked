
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int type; unsigned int flags; int state; TYPE_1__* meth; int * adin_pool; } ;
struct TYPE_8__ {int (* uninstantiate ) (TYPE_2__*) ;} ;
typedef TYPE_2__ RAND_DRBG ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 unsigned int* VAR_7 ;
 int* VAR_8 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;

int FUNC_8(RAND_DRBG *VAR_9, int VAR_10, unsigned int VAR_11)
{
    int VAR_12 = 1;

    if (VAR_10 == 0 && VAR_11 == 0) {
        VAR_10 = VAR_8[VAR_3];
        VAR_11 = VAR_7[VAR_3];
    }


    if (VAR_9->type != 0 && (VAR_10 != VAR_9->type || VAR_11 != VAR_9->flags)) {
        VAR_9->meth->uninstantiate(VAR_9);
        FUNC_6(VAR_9->adin_pool);
        VAR_9->adin_pool = ((void*)0);
    }

    VAR_9->state = VAR_1;
    VAR_9->flags = VAR_11;
    VAR_9->type = VAR_10;

    if (VAR_10 == 0) {

        VAR_9->meth = ((void*)0);
        return 1;
    } else if (FUNC_4(VAR_10)) {
        VAR_12 = FUNC_1(VAR_9);
    } else if (FUNC_5(VAR_10)) {
        if (VAR_11 & VAR_2)
            VAR_12 = FUNC_3(VAR_9);
        else
            VAR_12 = FUNC_2(VAR_9);
    } else {
        VAR_9->type = 0;
        VAR_9->flags = 0;
        VAR_9->meth = ((void*)0);
        FUNC_0(VAR_4, VAR_6);
        return 0;
    }

    if (VAR_12 == 0) {
        VAR_9->state = VAR_0;
        FUNC_0(VAR_4, VAR_5);
    }
    return VAR_12;
}
