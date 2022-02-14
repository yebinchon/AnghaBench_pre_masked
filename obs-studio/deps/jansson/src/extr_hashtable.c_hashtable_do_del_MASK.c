
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {struct TYPE_13__* prev; struct TYPE_13__* next; } ;
struct TYPE_10__ {int value; TYPE_4__ ordered_list; TYPE_4__ list; } ;
typedef TYPE_1__ pair_t ;
struct TYPE_11__ {int size; TYPE_4__ list; TYPE_3__* buckets; int order; } ;
typedef TYPE_2__ hashtable_t ;
struct TYPE_12__ {TYPE_4__* last; TYPE_4__* first; } ;
typedef TYPE_3__ bucket_t ;


 size_t FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,TYPE_3__*,char const*,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_5(hashtable_t *VAR_0,
                            const char *VAR_1, size_t VAR_2)
{
    pair_t *VAR_3;
    bucket_t *VAR_4;
    size_t VAR_5;

    VAR_5 = VAR_2 & FUNC_0(VAR_0->order);
    VAR_4 = &VAR_0->buckets[VAR_5];

    VAR_3 = FUNC_1(VAR_0, VAR_4, VAR_1, VAR_2);
    if(!VAR_3)
        return -1;

    if(&VAR_3->list == VAR_4->first && &VAR_3->list == VAR_4->last)
        VAR_4->first = VAR_4->last = &VAR_0->list;

    else if(&VAR_3->list == VAR_4->first)
        VAR_4->first = VAR_3->list.next;

    else if(&VAR_3->list == VAR_4->last)
        VAR_4->last = VAR_3->list.prev;

    FUNC_4(&VAR_3->list);
    FUNC_4(&VAR_3->ordered_list);
    FUNC_2(VAR_3->value);

    FUNC_3(VAR_3);
    VAR_0->size--;

    return 0;
}
