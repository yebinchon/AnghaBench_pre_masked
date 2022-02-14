
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct page_cache_descr* tail; struct page_cache_descr* head; } ;
struct page_cache {TYPE_1__ replaceQ; } ;
struct rrdengine_instance {struct page_cache pg_cache; } ;
struct rrdeng_page_descr {struct page_cache_descr* pg_cache_descr; } ;
struct page_cache_descr {struct page_cache_descr* next; struct page_cache_descr* prev; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct rrdengine_instance *VAR_0,
                                                   struct rrdeng_page_descr *VAR_1)
{
    struct page_cache *VAR_2 = &VAR_0->pg_cache;
    struct page_cache_descr *VAR_3 = VAR_1->pg_cache_descr, *VAR_4, *VAR_5;

    VAR_4 = VAR_3->prev;
    VAR_5 = VAR_3->next;

    if (FUNC_0(((void*)0) != VAR_4)) {
        VAR_4->next = VAR_5;
    }
    if (FUNC_0(((void*)0) != VAR_5)) {
        VAR_5->prev = VAR_4;
    }
    if (FUNC_1(VAR_3 == VAR_2->replaceQ.head)) {
        VAR_2->replaceQ.head = VAR_5;
    }
    if (FUNC_1(VAR_3 == VAR_2->replaceQ.tail)) {
        VAR_2->replaceQ.tail = VAR_4;
    }
    VAR_3->prev = VAR_3->next = ((void*)0);
}
