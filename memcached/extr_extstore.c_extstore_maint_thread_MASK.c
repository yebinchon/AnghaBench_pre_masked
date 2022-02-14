
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct extstore_page_data {scalar_t__ free_bucket; scalar_t__ version; int bucket; scalar_t__ bytes_used; } ;
struct TYPE_10__ {size_t id; scalar_t__ free_bucket; scalar_t__ obj_count; int closed; scalar_t__ version; scalar_t__ refcount; int mutex; scalar_t__ bytes_used; int bucket; scalar_t__ free; scalar_t__ active; } ;
typedef TYPE_2__ store_page ;
struct TYPE_11__ {int mutex; int cond; TYPE_4__* e; } ;
typedef TYPE_3__ store_maint_thread ;
struct TYPE_9__ {int page_data; int bytes_evicted; int objects_evicted; int page_evictions; } ;
struct TYPE_12__ {int page_count; scalar_t__ page_free; TYPE_1__ stats; TYPE_2__* pages; int mutex; int * page_freelist; } ;
typedef TYPE_4__ store_engine ;


 int FUNC_0 (char*,size_t,unsigned long long) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*) ;
 struct extstore_page_data* FUNC_4 (int,int) ;
 int FUNC_5 (int ,struct extstore_page_data*,int) ;
 int FUNC_6 (struct extstore_page_data*,int ,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void *FUNC_10(void *VAR_1) {
    store_maint_thread *VAR_2 = (store_maint_thread *)VAR_1;
    store_engine *VAR_3 = VAR_2->e;
    struct extstore_page_data *VAR_4 =
        FUNC_4(VAR_3->page_count, sizeof(struct extstore_page_data));
    FUNC_8(&VAR_2->mutex);
    while (1) {
        int VAR_5;
        bool VAR_6 = 0;
        unsigned int VAR_7 = 0;
        uint64_t VAR_8 = VAR_0;

        FUNC_7(&VAR_2->cond, &VAR_2->mutex);
        FUNC_8(&VAR_3->mutex);


        if (VAR_3->page_free == 0 || VAR_3->page_freelist == ((void*)0)) {
            VAR_6 = 1;
        }
        FUNC_9(&VAR_3->mutex);
        FUNC_6(VAR_4, 0, sizeof(struct extstore_page_data) * VAR_3->page_count);

        for (VAR_5 = 0; VAR_5 < VAR_3->page_count; VAR_5++) {
            store_page *VAR_9 = &VAR_3->pages[VAR_5];
            FUNC_8(&VAR_9->mutex);
            VAR_4[VAR_9->id].free_bucket = VAR_9->free_bucket;
            if (VAR_9->active || VAR_9->free) {
                FUNC_9(&VAR_9->mutex);
                continue;
            }
            if (VAR_9->obj_count > 0 && !VAR_9->closed) {
                VAR_4[VAR_9->id].version = VAR_9->version;
                VAR_4[VAR_9->id].bytes_used = VAR_9->bytes_used;
                VAR_4[VAR_9->id].bucket = VAR_9->bucket;






                if (VAR_9->free_bucket == 0 && VAR_9->version < VAR_8) {
                    VAR_8 = VAR_9->version;
                    VAR_7 = VAR_5;
                }
            }
            if ((VAR_9->obj_count == 0 || VAR_9->closed) && VAR_9->refcount == 0) {
                FUNC_3(VAR_3, VAR_9);

                VAR_6 = 0;
            }
            FUNC_9(&VAR_9->mutex);
        }

        if (VAR_6 && VAR_8 != VAR_0) {
            store_page *VAR_10 = &VAR_3->pages[VAR_7];
            FUNC_0("EXTSTORE: evicting page [%d] [v: %llu]\n",
                    VAR_10->id, (unsigned long long) VAR_10->version);
            FUNC_8(&VAR_10->mutex);
            if (!VAR_10->closed) {
                VAR_10->closed = 1;
                FUNC_1(VAR_3);
                VAR_3->stats.page_evictions++;
                VAR_3->stats.objects_evicted += VAR_10->obj_count;
                VAR_3->stats.bytes_evicted += VAR_10->bytes_used;
                FUNC_2(VAR_3);
                if (VAR_10->refcount == 0) {
                    FUNC_3(VAR_3, VAR_10);
                }
            }
            FUNC_9(&VAR_10->mutex);
        }



        FUNC_1(VAR_3);
        FUNC_5(VAR_3->stats.page_data, VAR_4,
                sizeof(struct extstore_page_data) * VAR_3->page_count);
        FUNC_2(VAR_3);
    }

    return ((void*)0);
}
