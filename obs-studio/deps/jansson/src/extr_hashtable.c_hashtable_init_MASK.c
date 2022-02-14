
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int list; TYPE_2__* buckets; int order; int ordered_list; scalar_t__ size; } ;
typedef TYPE_1__ hashtable_t ;
typedef int bucket_t ;
struct TYPE_5__ {int * last; int * first; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int *) ;

int FUNC_3(hashtable_t *VAR_1)
{
    size_t VAR_2;

    VAR_1->size = 0;
    VAR_1->order = VAR_0;
    VAR_1->buckets = FUNC_1(FUNC_0(VAR_1->order) * sizeof(bucket_t));
    if(!VAR_1->buckets)
        return -1;

    FUNC_2(&VAR_1->list);
    FUNC_2(&VAR_1->ordered_list);

    for(VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->order); VAR_2++)
    {
        VAR_1->buckets[VAR_2].first = VAR_1->buckets[VAR_2].last =
            &VAR_1->list;
    }

    return 0;
}
