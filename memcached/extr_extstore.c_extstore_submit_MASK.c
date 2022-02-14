
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cond; int mutex; int depth; TYPE_2__* queue; } ;
typedef TYPE_1__ store_io_thread ;
typedef int store_engine ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ obj_io ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(void *VAR_0, obj_io *VAR_1) {
    store_engine *VAR_2 = (store_engine *)VAR_0;
    store_io_thread *VAR_3 = FUNC_0(VAR_2);

    FUNC_3(&VAR_3->mutex);
    if (VAR_3->queue == ((void*)0)) {
        VAR_3->queue = VAR_1;
    } else {



        obj_io *VAR_4 = VAR_3->queue;
        while (VAR_4->next != ((void*)0)) {
            VAR_4 = VAR_4->next;
            FUNC_1(VAR_4 != VAR_3->queue);
        }
        VAR_4->next = VAR_1;
    }

    obj_io *VAR_5 = VAR_1;
    while (VAR_5 != ((void*)0)) {
        VAR_3->depth++;
        VAR_5 = VAR_5->next;
    }
    FUNC_4(&VAR_3->mutex);


    FUNC_2(&VAR_3->cond);

    return 0;
}
