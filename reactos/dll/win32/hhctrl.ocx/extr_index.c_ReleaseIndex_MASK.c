
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* local; struct TYPE_9__* name; } ;
struct TYPE_8__ {TYPE_2__* index; } ;
struct TYPE_6__ {TYPE_4__* chm_index; TYPE_4__* chm_file; } ;
struct TYPE_7__ {int nItems; TYPE_4__* items; TYPE_4__* keyword; struct TYPE_7__* next; TYPE_1__ merge; } ;
typedef TYPE_2__ IndexItem ;
typedef TYPE_3__ HHInfo ;


 int FUNC_0 (TYPE_4__*) ;

void FUNC_1(HHInfo *VAR_0)
{
    IndexItem *VAR_1 = VAR_0->index, *VAR_2;
    int VAR_3;

    if(!VAR_1) return;

    FUNC_0(VAR_1->merge.chm_file);
    FUNC_0(VAR_1->merge.chm_index);
    while(VAR_1) {
        VAR_2 = VAR_1->next;

        FUNC_0(VAR_1->keyword);
        for(VAR_3=0;VAR_3<VAR_1->nItems;VAR_3++) {
            FUNC_0(VAR_1->items[VAR_3].name);
            FUNC_0(VAR_1->items[VAR_3].local);
        }
        FUNC_0(VAR_1->items);

        VAR_1 = VAR_2;
    }
}
