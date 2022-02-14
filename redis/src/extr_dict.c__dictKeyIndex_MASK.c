
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef unsigned long uint64_t ;
struct TYPE_10__ {void const* key; struct TYPE_10__* next; } ;
typedef TYPE_2__ dictEntry ;
struct TYPE_11__ {TYPE_1__* ht; } ;
typedef TYPE_3__ dict ;
struct TYPE_9__ {unsigned long sizemask; TYPE_2__** table; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,void const*,void const*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static long FUNC_3(dict *VAR_1, const void *VAR_2, uint64_t VAR_3, dictEntry **VAR_4)
{
    unsigned long VAR_5, VAR_6;
    dictEntry *VAR_7;
    if (VAR_4) *VAR_4 = ((void*)0);


    if (FUNC_0(VAR_1) == VAR_0)
        return -1;
    for (VAR_6 = 0; VAR_6 <= 1; VAR_6++) {
        VAR_5 = VAR_3 & VAR_1->ht[VAR_6].sizemask;

        VAR_7 = VAR_1->ht[VAR_6].table[VAR_5];
        while(VAR_7) {
            if (VAR_2==VAR_7->key || FUNC_1(VAR_1, VAR_2, VAR_7->key)) {
                if (VAR_4) *VAR_4 = VAR_7;
                return -1;
            }
            VAR_7 = VAR_7->next;
        }
        if (!FUNC_2(VAR_1)) break;
    }
    return VAR_5;
}
