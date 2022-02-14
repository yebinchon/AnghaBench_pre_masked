
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int mutex; int refcount; scalar_t__ offset; int fd; scalar_t__ written; int active; int version; int closed; int free; } ;
typedef TYPE_2__ store_page ;
struct TYPE_14__ {int depth; int mutex; TYPE_5__* queue; int cond; TYPE_4__* e; } ;
typedef TYPE_3__ store_io_thread ;
struct TYPE_12__ {int objects_read; int bytes_read; } ;
struct TYPE_15__ {int io_depth; TYPE_1__ stats; TYPE_2__* pages; } ;
typedef TYPE_4__ store_engine ;
struct TYPE_16__ {size_t page_id; int mode; int (* cb ) (TYPE_4__*,TYPE_5__*,int) ;scalar_t__ offset; int len; int buf; int iovcnt; int * iov; int page_version; struct TYPE_16__* next; } ;
typedef TYPE_5__ obj_io ;


 int FUNC_0 (char*) ;


 int VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int ,scalar_t__) ;
 int FUNC_7 (int ,int *,int ,scalar_t__) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,int ,scalar_t__) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int *,int ) ;
 int FUNC_14 (TYPE_4__*,TYPE_5__*,int) ;

__attribute__((used)) static void *FUNC_15(void *VAR_1) {
    store_io_thread *VAR_2 = (store_io_thread *)VAR_1;
    store_engine *VAR_3 = VAR_2->e;
    while (1) {
        obj_io *VAR_4 = ((void*)0);
        FUNC_9(&VAR_2->mutex);
        if (VAR_2->queue == ((void*)0)) {
            FUNC_8(&VAR_2->cond, &VAR_2->mutex);
        }


        if (VAR_2->queue != ((void*)0)) {
            int VAR_5;
            obj_io *VAR_6 = ((void*)0);
            VAR_4 = VAR_2->queue;
            VAR_6 = VAR_4;
            for (VAR_5 = 1; VAR_5 < VAR_3->io_depth; VAR_5++) {
                if (VAR_6->next) {
                    VAR_6 = VAR_6->next;
                } else {
                    break;
                }
            }
            VAR_2->depth -= VAR_5;
            VAR_2->queue = VAR_6->next;
            VAR_6->next = ((void*)0);
        }
        FUNC_10(&VAR_2->mutex);

        obj_io *VAR_7 = VAR_4;
        while (VAR_7) {


            obj_io *VAR_8 = VAR_7->next;
            int VAR_9 = 0;
            int VAR_10 = 1;
            store_page *VAR_11 = &VAR_3->pages[VAR_7->page_id];

            switch (VAR_7->mode) {
                case 129:

                    FUNC_9(&VAR_11->mutex);
                    if (!VAR_11->free && !VAR_11->closed && VAR_11->version == VAR_7->page_version) {
                        if (VAR_11->active && VAR_7->offset >= VAR_11->written) {
                            VAR_9 = FUNC_3(VAR_11, VAR_7);
                            VAR_10 = 0;
                        } else {
                            VAR_11->refcount++;
                        }
                        FUNC_1(VAR_3);
                        VAR_3->stats.bytes_read += VAR_7->len;
                        VAR_3->stats.objects_read++;
                        FUNC_2(VAR_3);
                    } else {
                        VAR_10 = 0;
                        VAR_9 = -2;
                    }
                    FUNC_10(&VAR_11->mutex);
                    if (VAR_10) {
                        if (VAR_7->iov == ((void*)0)) {
                            VAR_9 = FUNC_6(VAR_11->fd, VAR_7->buf, VAR_7->len, VAR_11->offset + VAR_7->offset);
                        } else {
                            VAR_9 = FUNC_7(VAR_11->fd, VAR_7->iov, VAR_7->iovcnt, VAR_11->offset + VAR_7->offset);
                        }

                    }
                    break;
                case 128:
                    VAR_10 = 0;


                    VAR_9 = FUNC_11(VAR_11->fd, VAR_7->buf, VAR_7->len, VAR_11->offset + VAR_7->offset);
                    break;
            }
            if (VAR_9 == 0) {
                FUNC_0("read returned nothing\n");
            }






            VAR_7->cb(VAR_3, VAR_7, VAR_9);
            if (VAR_10) {
                FUNC_9(&VAR_11->mutex);
                VAR_11->refcount--;
                FUNC_10(&VAR_11->mutex);
            }
            VAR_7 = VAR_8;
        }
    }

    return ((void*)0);
}
