
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct hashtable_bucket {TYPE_2__* last; TYPE_2__* first; } ;
struct TYPE_9__ {size_t hash; int list; } ;
typedef TYPE_1__ pair_t ;
struct TYPE_10__ {struct TYPE_10__* next; } ;
typedef TYPE_2__ list_t ;
struct TYPE_11__ {int order; struct hashtable_bucket* buckets; TYPE_2__ list; } ;
typedef TYPE_3__ hashtable_t ;
typedef int bucket_t ;


 size_t FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_3__*,struct hashtable_bucket*,int *) ;
 int FUNC_2 (struct hashtable_bucket*) ;
 struct hashtable_bucket* FUNC_3 (size_t) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_1__* FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(hashtable_t *VAR_0)
{
    list_t *VAR_1, *VAR_2;
    pair_t *VAR_3;
    size_t VAR_4, VAR_5, VAR_6, VAR_7;
    struct hashtable_bucket *VAR_8;

    VAR_7 = VAR_0->order + 1;
    VAR_6 = FUNC_0(VAR_7);

    VAR_8 = FUNC_3(VAR_6 * sizeof(bucket_t));
    if(!VAR_8)
        return -1;

    FUNC_2(VAR_0->buckets);
    VAR_0->buckets = VAR_8;
    VAR_0->order = VAR_7;

    for(VAR_4 = 0; VAR_4 < FUNC_0(VAR_0->order); VAR_4++)
    {
        VAR_0->buckets[VAR_4].first = VAR_0->buckets[VAR_4].last =
            &VAR_0->list;
    }

    VAR_1 = VAR_0->list.next;
    FUNC_4(&VAR_0->list);

    for(; VAR_1 != &VAR_0->list; VAR_1 = VAR_2) {
        VAR_2 = VAR_1->next;
        VAR_3 = FUNC_5(VAR_1);
        VAR_5 = VAR_3->hash % VAR_6;
        FUNC_1(VAR_0, &VAR_0->buckets[VAR_5], &VAR_3->list);
    }

    return 0;
}
