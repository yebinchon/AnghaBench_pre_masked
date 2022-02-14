
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_8__ {struct TYPE_8__* next; int key; } ;
typedef TYPE_1__ dictEntry ;
struct TYPE_9__ {size_t rehashidx; TYPE_7__* ht; } ;
typedef TYPE_2__ dict ;
struct TYPE_10__ {scalar_t__ used; unsigned long size; size_t sizemask; TYPE_1__** table; } ;


 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__**) ;

int FUNC_5(dict *VAR_0, int VAR_1) {
    int VAR_2 = VAR_1*10;
    if (!FUNC_3(VAR_0)) return 0;

    while(VAR_1-- && VAR_0->ht[0].used != 0) {
        dictEntry *VAR_3, *VAR_4;



        FUNC_1(VAR_0->ht[0].size > (unsigned long)VAR_0->rehashidx);
        while(VAR_0->ht[0].table[VAR_0->rehashidx] == ((void*)0)) {
            VAR_0->rehashidx++;
            if (--VAR_2 == 0) return 1;
        }
        VAR_3 = VAR_0->ht[0].table[VAR_0->rehashidx];

        while(VAR_3) {
            uint64_t VAR_5;

            VAR_4 = VAR_3->next;

            VAR_5 = FUNC_2(VAR_0, VAR_3->key) & VAR_0->ht[1].sizemask;
            VAR_3->next = VAR_0->ht[1].table[VAR_5];
            VAR_0->ht[1].table[VAR_5] = VAR_3;
            VAR_0->ht[0].used--;
            VAR_0->ht[1].used++;
            VAR_3 = VAR_4;
        }
        VAR_0->ht[0].table[VAR_0->rehashidx] = ((void*)0);
        VAR_0->rehashidx++;
    }


    if (VAR_0->ht[0].used == 0) {
        FUNC_4(VAR_0->ht[0].table);
        VAR_0->ht[0] = VAR_0->ht[1];
        FUNC_0(&VAR_0->ht[1]);
        VAR_0->rehashidx = -1;
        return 0;
    }


    return 1;
}
