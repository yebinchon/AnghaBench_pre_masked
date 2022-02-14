
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__** table; scalar_t__ size; } ;
typedef TYPE_1__ dictht ;
struct TYPE_9__ {size_t table; int index; TYPE_3__* entry; TYPE_3__* nextEntry; TYPE_6__* d; int fingerprint; scalar_t__ safe; } ;
typedef TYPE_2__ dictIterator ;
struct TYPE_10__ {struct TYPE_10__* next; } ;
typedef TYPE_3__ dictEntry ;
struct TYPE_11__ {TYPE_1__* ht; int iterators; } ;


 int FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;

dictEntry *FUNC_2(dictIterator *VAR_0)
{
    while (1) {
        if (VAR_0->entry == ((void*)0)) {
            dictht *VAR_1 = &VAR_0->d->ht[VAR_0->table];
            if (VAR_0->index == -1 && VAR_0->table == 0) {
                if (VAR_0->safe)
                    VAR_0->d->iterators++;
                else
                    VAR_0->fingerprint = FUNC_0(VAR_0->d);
            }
            VAR_0->index++;
            if (VAR_0->index >= (long) VAR_1->size) {
                if (FUNC_1(VAR_0->d) && VAR_0->table == 0) {
                    VAR_0->table++;
                    VAR_0->index = 0;
                    VAR_1 = &VAR_0->d->ht[1];
                } else {
                    break;
                }
            }
            VAR_0->entry = VAR_1->table[VAR_0->index];
        } else {
            VAR_0->entry = VAR_0->nextEntry;
        }
        if (VAR_0->entry) {


            VAR_0->nextEntry = VAR_0->entry->next;
            return VAR_0->entry;
        }
    }
    return ((void*)0);
}
