
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int mutex; int obj_count; int bytes_used; TYPE_1__* wbuf; int version; } ;
typedef TYPE_3__ store_page ;
struct TYPE_10__ {int objects_used; int objects_written; int bytes_used; int bytes_written; } ;
struct TYPE_12__ {TYPE_2__ stats; TYPE_3__* pages; } ;
typedef TYPE_4__ store_engine ;
struct TYPE_13__ {size_t page_id; scalar_t__ len; int page_version; scalar_t__ offset; } ;
typedef TYPE_5__ obj_io ;
struct TYPE_9__ {scalar_t__ free; int buf_pos; scalar_t__ size; scalar_t__ offset; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;

void FUNC_3(void *VAR_0, obj_io *VAR_1) {
    store_engine *VAR_2 = (store_engine *)VAR_0;
    store_page *VAR_3 = &VAR_2->pages[VAR_1->page_id];

    VAR_1->offset = VAR_3->wbuf->offset + (VAR_3->wbuf->size - VAR_3->wbuf->free);
    VAR_1->page_version = VAR_3->version;
    VAR_3->wbuf->buf_pos += VAR_1->len;
    VAR_3->wbuf->free -= VAR_1->len;
    VAR_3->bytes_used += VAR_1->len;
    VAR_3->obj_count++;
    FUNC_0(VAR_2);
    VAR_2->stats.bytes_written += VAR_1->len;
    VAR_2->stats.bytes_used += VAR_1->len;
    VAR_2->stats.objects_written++;
    VAR_2->stats.objects_used++;
    FUNC_1(VAR_2);

    FUNC_2(&VAR_3->mutex);
}
