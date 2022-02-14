
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* wbuf; int allocated; } ;
typedef TYPE_1__ store_page ;
struct TYPE_7__ {int mutex; TYPE_3__* wbuf_stack; } ;
typedef TYPE_2__ store_engine ;
struct TYPE_8__ {int full; int flushed; int buf; int buf_pos; scalar_t__ size; scalar_t__ free; int offset; struct TYPE_8__* next; } ;
typedef TYPE_3__ _store_wbuf ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(store_engine *VAR_0, store_page *VAR_1) {
    _store_wbuf *VAR_2 = ((void*)0);
    FUNC_0(!VAR_1->wbuf);
    FUNC_1(&VAR_0->mutex);
    if (VAR_0->wbuf_stack) {
        VAR_2 = VAR_0->wbuf_stack;
        VAR_0->wbuf_stack = VAR_2->next;
        VAR_2->next = 0;
    }
    FUNC_2(&VAR_0->mutex);
    if (VAR_2) {
        VAR_2->offset = VAR_1->allocated;
        VAR_1->allocated += VAR_2->size;
        VAR_2->free = VAR_2->size;
        VAR_2->buf_pos = VAR_2->buf;
        VAR_2->full = 0;
        VAR_2->flushed = 0;

        VAR_1->wbuf = VAR_2;
    }
}
