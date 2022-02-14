
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ allocated; int active; int free; int closed; unsigned int bucket; int id; int version; struct TYPE_8__* next; } ;
typedef TYPE_1__ store_page ;
struct TYPE_9__ {scalar_t__ page_size; scalar_t__ page_free; TYPE_1__** page_buckets; TYPE_1__* page_freelist; TYPE_1__** free_page_buckets; } ;
typedef TYPE_2__ store_engine ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static store_page *FUNC_5(store_engine *VAR_1, unsigned int VAR_2,
        unsigned int VAR_3) {
    FUNC_3(!VAR_1->page_buckets[VAR_2] || VAR_1->page_buckets[VAR_2]->allocated == VAR_1->page_size);
    store_page *VAR_4 = ((void*)0);

    if (VAR_3 != 0 && VAR_1->free_page_buckets[VAR_3] != ((void*)0)) {
        FUNC_3(VAR_1->page_free > 0);
        VAR_4 = VAR_1->free_page_buckets[VAR_3];
        VAR_1->free_page_buckets[VAR_3] = VAR_4->next;
    }

    if (VAR_4 == ((void*)0) && VAR_1->page_freelist != ((void*)0)) {
        VAR_4 = VAR_1->page_freelist;
        VAR_1->page_freelist = VAR_4->next;
    }
    FUNC_0("EXTSTORE: allocating new page\n");


    if (VAR_1->page_free > 0 && VAR_4 != ((void*)0)) {
        VAR_4->next = VAR_1->page_buckets[VAR_2];
        VAR_1->page_buckets[VAR_2] = VAR_4;
        VAR_4->active = 1;
        VAR_4->free = 0;
        VAR_4->closed = 0;
        VAR_4->version = FUNC_2(VAR_1);
        VAR_4->bucket = VAR_2;
        VAR_1->page_free--;
        FUNC_1(VAR_1, VAR_0, 1);
    } else {
        FUNC_4(VAR_1);
    }
    if (VAR_4)
        FUNC_0("EXTSTORE: got page %u\n", VAR_4->id);
    return VAR_4;
}
