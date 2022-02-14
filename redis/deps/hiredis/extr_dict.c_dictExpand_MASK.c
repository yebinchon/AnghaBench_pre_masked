
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* next; int key; } ;
typedef TYPE_1__ dictEntry ;
struct TYPE_9__ {unsigned long used; unsigned long size; unsigned long sizemask; TYPE_1__** table; int privdata; int type; } ;
typedef TYPE_2__ dict ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (int) ;
 TYPE_1__** FUNC_3 (unsigned long,int) ;
 unsigned int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_1__**) ;

__attribute__((used)) static int FUNC_6(dict *VAR_2, unsigned long VAR_3) {
    dict VAR_4;
    unsigned long VAR_5 = FUNC_1(VAR_3), VAR_6;



    if (VAR_2->used > VAR_3)
        return VAR_0;

    FUNC_0(&VAR_4, VAR_2->type, VAR_2->privdata);
    VAR_4.size = VAR_5;
    VAR_4.sizemask = VAR_5-1;
    VAR_4.table = FUNC_3(VAR_5,sizeof(dictEntry*));




    VAR_4.used = VAR_2->used;
    for (VAR_6 = 0; VAR_6 < VAR_2->size && VAR_2->used > 0; VAR_6++) {
        dictEntry *VAR_7, *VAR_8;

        if (VAR_2->table[VAR_6] == ((void*)0)) continue;


        VAR_7 = VAR_2->table[VAR_6];
        while(VAR_7) {
            unsigned int VAR_9;

            VAR_8 = VAR_7->next;

            VAR_9 = FUNC_4(VAR_2, VAR_7->key) & VAR_4.sizemask;
            VAR_7->next = VAR_4.table[VAR_9];
            VAR_4.table[VAR_9] = VAR_7;
            VAR_2->used--;

            VAR_7 = VAR_8;
        }
    }
    FUNC_2(VAR_2->used == 0);
    FUNC_5(VAR_2->table);


    *VAR_2 = VAR_4;
    return VAR_1;
}
