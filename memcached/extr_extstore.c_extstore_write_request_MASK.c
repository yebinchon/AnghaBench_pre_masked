
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ allocated; int mutex; int id; TYPE_1__* wbuf; int active; } ;
typedef TYPE_2__ store_page ;
struct TYPE_14__ {unsigned int page_bucketcount; scalar_t__ page_size; int mutex; TYPE_2__** page_buckets; } ;
typedef TYPE_3__ store_engine ;
struct TYPE_15__ {scalar_t__ len; int page_id; int buf; } ;
typedef TYPE_4__ obj_io ;
struct TYPE_12__ {int full; scalar_t__ free; int buf_pos; } ;


 TYPE_2__* FUNC_0 (TYPE_3__*,unsigned int,unsigned int) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(void *VAR_0, unsigned int VAR_1,
        unsigned int VAR_2, obj_io *VAR_3) {
    store_engine *VAR_4 = (store_engine *)VAR_0;
    store_page *VAR_5;
    int VAR_6 = -1;
    if (VAR_1 >= VAR_4->page_bucketcount)
        return VAR_6;

    FUNC_3(&VAR_4->mutex);
    VAR_5 = VAR_4->page_buckets[VAR_1];
    if (!VAR_5) {
        VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_2);
    }
    FUNC_4(&VAR_4->mutex);
    if (!VAR_5)
        return VAR_6;

    FUNC_3(&VAR_5->mutex);



    if (!VAR_5->active ||
            ((!VAR_5->wbuf || VAR_5->wbuf->full) && VAR_5->allocated >= VAR_4->page_size)) {
        FUNC_4(&VAR_5->mutex);
        FUNC_3(&VAR_4->mutex);
        FUNC_0(VAR_4, VAR_1, VAR_2);
        FUNC_4(&VAR_4->mutex);
        return VAR_6;
    }


    if (VAR_5->wbuf && VAR_5->wbuf->free < VAR_3->len && !VAR_5->wbuf->full) {
        FUNC_2(VAR_4, VAR_5);
        VAR_5->wbuf->full = 1;
    }

    if (!VAR_5->wbuf && VAR_5->allocated < VAR_4->page_size) {
        FUNC_1(VAR_4, VAR_5);
    }



    if (VAR_5->wbuf && !VAR_5->wbuf->full && VAR_5->wbuf->free >= VAR_3->len) {
        VAR_3->buf = VAR_5->wbuf->buf_pos;
        VAR_3->page_id = VAR_5->id;
        return 0;
    }

    FUNC_4(&VAR_5->mutex);

    return VAR_6;
}
