
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t bucket; int active; int closed; int free; size_t free_bucket; struct TYPE_9__* next; scalar_t__ written; scalar_t__ allocated; scalar_t__ bytes_used; scalar_t__ obj_count; scalar_t__ version; int id; } ;
typedef TYPE_2__ store_page ;
struct TYPE_8__ {int page_reclaims; int bytes_used; int objects_used; } ;
struct TYPE_10__ {int mutex; int page_free; TYPE_2__* page_freelist; TYPE_2__** free_page_buckets; TYPE_2__** page_buckets; TYPE_1__ stats; } ;
typedef TYPE_3__ store_engine ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(store_engine *VAR_0, store_page *VAR_1) {
    store_page *VAR_2 = ((void*)0);
    store_page *VAR_3 = ((void*)0);
    FUNC_0("EXTSTORE: freeing page %u\n", VAR_1->id);
    FUNC_1(VAR_0);
    VAR_0->stats.objects_used -= VAR_1->obj_count;
    VAR_0->stats.bytes_used -= VAR_1->bytes_used;
    VAR_0->stats.page_reclaims++;
    FUNC_2(VAR_0);
    FUNC_3(&VAR_0->mutex);

    VAR_2 = VAR_0->page_buckets[VAR_1->bucket];
    while (VAR_2) {
        if (VAR_2 == VAR_1) {
            if (VAR_3) {
                VAR_3->next = VAR_2->next;
            } else {
                VAR_0->page_buckets[VAR_1->bucket] = VAR_2->next;
            }
            VAR_2->next = ((void*)0);
            break;
        }
        VAR_3 = VAR_2;
        VAR_2 = VAR_2->next;
    }

    VAR_1->version = 0;
    VAR_1->obj_count = 0;
    VAR_1->bytes_used = 0;
    VAR_1->allocated = 0;
    VAR_1->written = 0;
    VAR_1->bucket = 0;
    VAR_1->active = 0;
    VAR_1->closed = 0;
    VAR_1->free = 1;


    if (VAR_1->free_bucket != 0) {
        VAR_1->next = VAR_0->free_page_buckets[VAR_1->free_bucket];
        VAR_0->free_page_buckets[VAR_1->free_bucket] = VAR_1;
    } else {
        VAR_1->next = VAR_0->page_freelist;
        VAR_0->page_freelist = VAR_1;
    }
    VAR_0->page_free++;
    FUNC_4(&VAR_0->mutex);
}
