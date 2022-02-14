
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ written; int active; int mutex; TYPE_4__* wbuf; } ;
typedef TYPE_1__ store_page ;
struct TYPE_7__ {scalar_t__ page_size; int mutex; TYPE_3__* io_stack; TYPE_4__* wbuf_stack; TYPE_1__* pages; } ;
typedef TYPE_2__ store_engine ;
struct TYPE_8__ {size_t page_id; struct TYPE_8__* next; scalar_t__ data; } ;
typedef TYPE_3__ obj_io ;
struct TYPE_9__ {int flushed; scalar_t__ offset; scalar_t__ size; struct TYPE_9__* next; } ;
typedef TYPE_4__ _store_wbuf ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, obj_io *VAR_1, int VAR_2) {
    store_engine *VAR_3 = (store_engine *)VAR_0;
    store_page *VAR_4 = &VAR_3->pages[VAR_1->page_id];
    _store_wbuf *VAR_5 = (_store_wbuf *) VAR_1->data;



    VAR_5->flushed = 1;
    FUNC_1(&VAR_4->mutex);
    FUNC_0(VAR_4->wbuf != ((void*)0) && VAR_4->wbuf == VAR_5);
    FUNC_0(VAR_4->written == VAR_5->offset);
    VAR_4->written += VAR_5->size;
    VAR_4->wbuf = ((void*)0);

    if (VAR_4->written == VAR_3->page_size)
        VAR_4->active = 0;


    FUNC_1(&VAR_3->mutex);
    VAR_5->next = VAR_3->wbuf_stack;
    VAR_3->wbuf_stack = VAR_5;

    VAR_1->next = VAR_3->io_stack;
    VAR_3->io_stack = VAR_1;
    FUNC_2(&VAR_3->mutex);
    FUNC_2(&VAR_4->mutex);
}
