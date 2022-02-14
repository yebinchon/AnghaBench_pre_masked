
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned long uint64_t ;
struct TYPE_8__ {void const* key; struct TYPE_8__* next; } ;
typedef TYPE_2__ dictEntry ;
struct TYPE_9__ {TYPE_1__* ht; } ;
typedef TYPE_3__ dict ;
struct TYPE_7__ {scalar_t__ used; unsigned long sizemask; TYPE_2__** table; } ;


 int FUNC_0 (TYPE_3__*) ;

dictEntry **FUNC_1(dict *VAR_0, const void *VAR_1, uint64_t VAR_2) {
    dictEntry *VAR_3, **VAR_4;
    unsigned long VAR_5, VAR_6;

    if (VAR_0->ht[0].used + VAR_0->ht[1].used == 0) return ((void*)0);
    for (VAR_6 = 0; VAR_6 <= 1; VAR_6++) {
        VAR_5 = VAR_2 & VAR_0->ht[VAR_6].sizemask;
        VAR_4 = &VAR_0->ht[VAR_6].table[VAR_5];
        VAR_3 = *VAR_4;
        while(VAR_3) {
            if (VAR_1==VAR_3->key)
                return VAR_4;
            VAR_4 = &VAR_3->next;
            VAR_3 = *VAR_4;
        }
        if (!FUNC_0(VAR_0)) return ((void*)0);
    }
    return ((void*)0);
}
