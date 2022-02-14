
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ size; int ordered_list; int list; TYPE_1__* buckets; int order; } ;
typedef TYPE_2__ hashtable_t ;
struct TYPE_5__ {int * last; int * first; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

void FUNC_3(hashtable_t *VAR_0)
{
    size_t VAR_1;

    FUNC_1(VAR_0);

    for(VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->order); VAR_1++)
    {
        VAR_0->buckets[VAR_1].first = VAR_0->buckets[VAR_1].last =
            &VAR_0->list;
    }

    FUNC_2(&VAR_0->list);
    FUNC_2(&VAR_0->ordered_list);
    VAR_0->size = 0;
}
