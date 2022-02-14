
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* next; } ;
typedef TYPE_2__ dictEntry ;
struct TYPE_11__ {int rehashidx; TYPE_1__* ht; } ;
typedef TYPE_3__ dict ;
struct TYPE_9__ {int size; int sizemask; TYPE_2__** table; } ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 () ;

dictEntry *FUNC_4(dict *VAR_0)
{
    dictEntry *VAR_1, *VAR_2;
    unsigned long VAR_3;
    int VAR_4, VAR_5;

    if (FUNC_2(VAR_0) == 0) return ((void*)0);
    if (FUNC_1(VAR_0)) FUNC_0(VAR_0);
    if (FUNC_1(VAR_0)) {
        do {


            VAR_3 = VAR_0->rehashidx + (FUNC_3() % (VAR_0->ht[0].size +
                                            VAR_0->ht[1].size -
                                            VAR_0->rehashidx));
            VAR_1 = (VAR_3 >= VAR_0->ht[0].size) ? VAR_0->ht[1].table[VAR_3 - VAR_0->ht[0].size] :
                                      VAR_0->ht[0].table[VAR_3];
        } while(VAR_1 == ((void*)0));
    } else {
        do {
            VAR_3 = FUNC_3() & VAR_0->ht[0].sizemask;
            VAR_1 = VAR_0->ht[0].table[VAR_3];
        } while(VAR_1 == ((void*)0));
    }





    VAR_4 = 0;
    VAR_2 = VAR_1;
    while(VAR_1) {
        VAR_1 = VAR_1->next;
        VAR_4++;
    }
    VAR_5 = FUNC_3() % VAR_4;
    VAR_1 = VAR_2;
    while(VAR_5--) VAR_1 = VAR_1->next;
    return VAR_1;
}
