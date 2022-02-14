
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct extstore_page_data {int dummy; } ;
struct extstore_conf_file {scalar_t__ fd; scalar_t__ page_count; int free_bucket; scalar_t__ offset; struct extstore_conf_file* next; int file; } ;
struct extstore_conf {int page_size; int wbuf_size; int page_buckets; int wbuf_count; int io_threadcount; int io_depth; } ;
typedef int store_page ;
typedef int store_maint_thread ;
typedef int store_io_thread ;
struct TYPE_10__ {int page_count; int page_size; void* page_data; } ;
struct TYPE_12__ {int page_size; int page_count; int page_bucketcount; int version; int io_threadcount; TYPE_7__* maint_thread; TYPE_7__* io_threads; int io_depth; int stats_mutex; int mutex; TYPE_4__* io_stack; TYPE_5__* wbuf_stack; void* page_buckets; TYPE_1__ stats; TYPE_2__* pages; TYPE_2__** free_page_buckets; TYPE_2__* page_freelist; int page_free; } ;
typedef TYPE_3__ store_engine ;
typedef int pthread_t ;
struct TYPE_13__ {struct TYPE_13__* next; } ;
typedef TYPE_4__ obj_io ;
typedef enum extstore_res { ____Placeholder_extstore_res } extstore_res ;
struct TYPE_14__ {struct TYPE_14__* next; } ;
typedef TYPE_5__ _store_wbuf ;
struct TYPE_15__ {int cond; int mutex; TYPE_3__* e; } ;
struct TYPE_11__ {int id; scalar_t__ fd; int free_bucket; int free; struct TYPE_11__* next; scalar_t__ offset; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 void* FUNC_0 (int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ,int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int ,TYPE_7__*) ;
 int FUNC_7 (int *,int *) ;
 TYPE_5__* FUNC_8 (int) ;

void *FUNC_9(struct extstore_conf_file *VAR_13, struct extstore_conf *VAR_14,
        enum extstore_res *VAR_15) {
    int VAR_16;
    struct extstore_conf_file *VAR_17 = ((void*)0);
    pthread_t VAR_18;

    if (VAR_14->page_size % VAR_14->wbuf_size != 0) {
        *VAR_15 = VAR_0;
        return ((void*)0);
    }

    if (VAR_14->page_buckets > VAR_14->wbuf_count) {
        *VAR_15 = VAR_2;
        return ((void*)0);
    }
    if (VAR_14->page_buckets < 1) {
        *VAR_15 = VAR_1;
        return ((void*)0);
    }


    if (VAR_14->page_size % (1024 * 1024 * 2) != 0 ||
        VAR_14->wbuf_size % (1024 * 1024 * 2) != 0) {
        *VAR_15 = VAR_5;
        return ((void*)0);
    }

    store_engine *VAR_19 = FUNC_0(1, sizeof(store_engine));
    if (VAR_19 == ((void*)0)) {
        *VAR_15 = VAR_3;
        return ((void*)0);
    }

    VAR_19->page_size = VAR_14->page_size;
    uint64_t VAR_20 = 0;
    for (VAR_17 = VAR_13; VAR_17 != ((void*)0); VAR_17 = VAR_17->next) {
        VAR_17->fd = FUNC_3(VAR_17->file, VAR_8 | VAR_7 | VAR_9, 0644);
        if (VAR_17->fd < 0) {
            *VAR_15 = VAR_4;



            FUNC_2(VAR_19);
            return ((void*)0);
        }
        VAR_20 += VAR_17->page_count;
        VAR_17->offset = 0;
    }

    if (VAR_20 >= VAR_10) {
        *VAR_15 = VAR_6;
        FUNC_2(VAR_19);
        return ((void*)0);
    }
    VAR_19->page_count = VAR_20;

    VAR_19->pages = FUNC_0(VAR_19->page_count, sizeof(store_page));
    if (VAR_19->pages == ((void*)0)) {
        *VAR_15 = VAR_3;

        FUNC_2(VAR_19);
        return ((void*)0);
    }


    VAR_17 = ((void*)0);
    for (VAR_16 = 0; VAR_16 < VAR_19->page_count; VAR_16++) {

        while (1) {

            if (VAR_17 == ((void*)0) || VAR_17->next == ((void*)0)) {
                VAR_17 = VAR_13;
            } else {
                VAR_17 = VAR_17->next;
            }
            if (VAR_17->page_count) {
                VAR_17->page_count--;
                break;
            }
        }
        FUNC_7(&VAR_19->pages[VAR_16].mutex, ((void*)0));
        VAR_19->pages[VAR_16].id = VAR_16;
        VAR_19->pages[VAR_16].fd = VAR_17->fd;
        VAR_19->pages[VAR_16].free_bucket = VAR_17->free_bucket;
        VAR_19->pages[VAR_16].offset = VAR_17->offset;
        VAR_19->pages[VAR_16].free = 1;
        VAR_17->offset += VAR_19->page_size;
    }


    VAR_19->free_page_buckets = FUNC_0(VAR_14->page_buckets, sizeof(store_page *));
    VAR_19->page_bucketcount = VAR_14->page_buckets;

    for (VAR_16 = VAR_19->page_count-1; VAR_16 > 0; VAR_16--) {
        VAR_19->page_free++;
        if (VAR_19->pages[VAR_16].free_bucket == 0) {
            VAR_19->pages[VAR_16].next = VAR_19->page_freelist;
            VAR_19->page_freelist = &VAR_19->pages[VAR_16];
        } else {
            int VAR_21 = VAR_19->pages[VAR_16].free_bucket;
            VAR_19->pages[VAR_16].next = VAR_19->free_page_buckets[VAR_21];
            VAR_19->free_page_buckets[VAR_21] = &VAR_19->pages[VAR_16];
        }
    }


    VAR_19->version = 1;


    VAR_19->stats.page_data =
        FUNC_0(VAR_19->page_count, sizeof(struct extstore_page_data));
    VAR_19->stats.page_count = VAR_19->page_count;
    VAR_19->stats.page_size = VAR_19->page_size;


    VAR_19->page_buckets = FUNC_0(VAR_14->page_buckets, sizeof(store_page *));
    VAR_19->page_bucketcount = VAR_14->page_buckets;



    for (VAR_16 = 0; VAR_16 < VAR_14->wbuf_count; VAR_16++) {
        _store_wbuf *VAR_22 = FUNC_8(VAR_14->wbuf_size);
        obj_io *VAR_23 = FUNC_0(1, sizeof(obj_io));

        VAR_22->next = VAR_19->wbuf_stack;
        VAR_19->wbuf_stack = VAR_22;
        VAR_23->next = VAR_19->io_stack;
        VAR_19->io_stack = VAR_23;
    }

    FUNC_7(&VAR_19->mutex, ((void*)0));
    FUNC_7(&VAR_19->stats_mutex, ((void*)0));

    VAR_19->io_depth = VAR_14->io_depth;


    VAR_19->io_threads = FUNC_0(VAR_14->io_threadcount, sizeof(store_io_thread));
    for (VAR_16 = 0; VAR_16 < VAR_14->io_threadcount; VAR_16++) {
        FUNC_7(&VAR_19->io_threads[VAR_16].mutex, ((void*)0));
        FUNC_5(&VAR_19->io_threads[VAR_16].cond, ((void*)0));
        VAR_19->io_threads[VAR_16].e = VAR_19;

        FUNC_6(&VAR_18, ((void*)0), VAR_11, &VAR_19->io_threads[VAR_16]);
    }
    VAR_19->io_threadcount = VAR_14->io_threadcount;

    VAR_19->maint_thread = FUNC_0(1, sizeof(store_maint_thread));
    VAR_19->maint_thread->e = VAR_19;

    FUNC_7(&VAR_19->maint_thread->mutex, ((void*)0));
    FUNC_5(&VAR_19->maint_thread->cond, ((void*)0));
    FUNC_6(&VAR_18, ((void*)0), VAR_12, VAR_19->maint_thread);

    FUNC_1(VAR_19);

    return (void *)VAR_19;
}
