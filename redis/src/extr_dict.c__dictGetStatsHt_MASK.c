
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ used; unsigned long size; TYPE_2__** table; } ;
typedef TYPE_1__ dictht ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_2__ dictEntry ;


 int VAR_0 ;
 size_t FUNC_0 (char*,size_t,char*,...) ;
 size_t FUNC_1 (char*) ;

size_t FUNC_2(char *VAR_1, size_t VAR_2, dictht *VAR_3, int VAR_4) {
    unsigned long VAR_5, VAR_6 = 0, VAR_7, VAR_8 = 0;
    unsigned long VAR_9 = 0;
    unsigned long VAR_10[VAR_0];
    size_t VAR_11 = 0;

    if (VAR_3->used == 0) {
        return FUNC_0(VAR_1,VAR_2,
            "No stats available for empty dictionaries\n");
    }


    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) VAR_10[VAR_5] = 0;
    for (VAR_5 = 0; VAR_5 < VAR_3->size; VAR_5++) {
        dictEntry *VAR_12;

        if (VAR_3->table[VAR_5] == ((void*)0)) {
            VAR_10[0]++;
            continue;
        }
        VAR_6++;

        VAR_7 = 0;
        VAR_12 = VAR_3->table[VAR_5];
        while(VAR_12) {
            VAR_7++;
            VAR_12 = VAR_12->next;
        }
        VAR_10[(VAR_7 < VAR_0) ? VAR_7 : (VAR_0-1)]++;
        if (VAR_7 > VAR_8) VAR_8 = VAR_7;
        VAR_9 += VAR_7;
    }


    VAR_11 += FUNC_0(VAR_1+VAR_11,VAR_2-VAR_11,
        "Hash table %d stats (%s):\n"
        " table size: %ld\n"
        " number of elements: %ld\n"
        " different slots: %ld\n"
        " max chain length: %ld\n"
        " avg chain length (counted): %.02f\n"
        " avg chain length (computed): %.02f\n"
        " Chain length distribution:\n",
        VAR_4, (VAR_4 == 0) ? "main hash table" : "rehashing target",
        VAR_3->size, VAR_3->used, VAR_6, VAR_8,
        (float)VAR_9/VAR_6, (float)VAR_3->used/VAR_6);

    for (VAR_5 = 0; VAR_5 < VAR_0-1; VAR_5++) {
        if (VAR_10[VAR_5] == 0) continue;
        if (VAR_11 >= VAR_2) break;
        VAR_11 += FUNC_0(VAR_1+VAR_11,VAR_2-VAR_11,
            "   %s%ld: %ld (%.02f%%)\n",
            (VAR_5 == VAR_0-1)?">= ":"",
            VAR_5, VAR_10[VAR_5], ((float)VAR_10[VAR_5]/VAR_3->size)*100);
    }


    if (VAR_2) VAR_1[VAR_2-1] = '\0';
    return FUNC_1(VAR_1);
}
