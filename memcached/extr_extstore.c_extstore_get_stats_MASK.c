
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct extstore_stats {int pages_free; int pages_used; scalar_t__ bytes_used; scalar_t__ bytes_fragmented; scalar_t__ io_queue; } ;
struct TYPE_6__ {int page_free; int page_count; int io_threadcount; int page_size; TYPE_1__* io_threads; int mutex; int stats; } ;
typedef TYPE_2__ store_engine ;
struct TYPE_5__ {int mutex; scalar_t__ depth; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct extstore_stats*,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(void *VAR_0, struct extstore_stats *VAR_1) {
    store_engine *VAR_2 = (store_engine *)VAR_0;
    FUNC_0(VAR_2);
    FUNC_2(VAR_1, &VAR_2->stats, sizeof(struct extstore_stats));
    FUNC_1(VAR_2);


    FUNC_3(&VAR_2->mutex);
    VAR_1->pages_free = VAR_2->page_free;
    VAR_1->pages_used = VAR_2->page_count - VAR_2->page_free;
    FUNC_4(&VAR_2->mutex);
    VAR_1->io_queue = 0;
    for (int VAR_3 = 0; VAR_3 < VAR_2->io_threadcount; VAR_3++) {
        FUNC_3(&VAR_2->io_threads[VAR_3].mutex);
        VAR_1->io_queue += VAR_2->io_threads[VAR_3].depth;
        FUNC_4(&VAR_2->io_threads[VAR_3].mutex);
    }


    VAR_1->bytes_fragmented = VAR_1->pages_used * VAR_2->page_size -
        VAR_1->bytes_used;
}
