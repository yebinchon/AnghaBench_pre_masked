
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int id; TYPE_4__* wbuf; } ;
typedef TYPE_1__ store_page ;
struct TYPE_10__ {int mutex; TYPE_3__* io_stack; } ;
typedef TYPE_2__ store_engine ;
struct TYPE_11__ {int cb; scalar_t__ buf; scalar_t__ len; int offset; TYPE_4__* data; int page_id; int mode; struct TYPE_11__* next; } ;
typedef TYPE_3__ obj_io ;
struct TYPE_12__ {scalar_t__ buf; scalar_t__ size; int offset; scalar_t__ free; } ;
typedef TYPE_4__ _store_wbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(store_engine *VAR_2, store_page *VAR_3) {
    _store_wbuf *VAR_4;
    FUNC_2(&VAR_2->mutex);
    obj_io *VAR_5 = VAR_2->io_stack;
    VAR_2->io_stack = VAR_5->next;
    FUNC_3(&VAR_2->mutex);
    VAR_4 = VAR_3->wbuf;


    FUNC_1(VAR_4->buf + (VAR_4->size - VAR_4->free), 0, VAR_4->free);

    VAR_5->next = ((void*)0);
    VAR_5->mode = VAR_0;
    VAR_5->page_id = VAR_3->id;
    VAR_5->data = VAR_4;
    VAR_5->offset = VAR_4->offset;
    VAR_5->len = VAR_4->size;
    VAR_5->buf = VAR_4->buf;
    VAR_5->cb = VAR_1;

    FUNC_0(VAR_2, VAR_5);
}
