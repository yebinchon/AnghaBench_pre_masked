
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int * tail; int * head; } ;
struct page_cache {TYPE_1__ replaceQ; } ;
struct rrdengine_instance {struct page_cache pg_cache; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct rrdengine_instance *VAR_0)
{
    struct page_cache *VAR_1 = &VAR_0->pg_cache;

    VAR_1->replaceQ.head = ((void*)0);
    VAR_1->replaceQ.tail = ((void*)0);
    FUNC_0(0 == FUNC_1(&VAR_1->replaceQ.lock));
}
