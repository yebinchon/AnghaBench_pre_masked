
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlHashTablePtr ;
typedef int (* xmlHashScannerFull ) (int *,void*,int ,int ,int ) ;
typedef TYPE_2__* xmlHashEntryPtr ;
struct TYPE_5__ {scalar_t__ valid; struct TYPE_5__* next; int name3; int name2; int name; int * payload; } ;
struct TYPE_4__ {int size; int nbElems; TYPE_2__* table; } ;



void
FUNC_0(xmlHashTablePtr VAR_0, xmlHashScannerFull VAR_1, void *VAR_2) {
    int VAR_3, VAR_4;
    xmlHashEntryPtr VAR_5;
    xmlHashEntryPtr VAR_6;

    if (VAR_0 == ((void*)0))
 return;
    if (VAR_1 == ((void*)0))
 return;

    if (VAR_0->table) {
 for(VAR_3 = 0; VAR_3 < VAR_0->size; VAR_3++) {
     if (VAR_0->table[VAR_3].valid == 0)
  continue;
     VAR_5 = &(VAR_0->table[VAR_3]);
     while (VAR_5) {
  VAR_6 = VAR_5->next;
                VAR_4 = VAR_0->nbElems;
  if ((VAR_1 != ((void*)0)) && (VAR_5->payload != ((void*)0)))
      VAR_1(VAR_5->payload, VAR_2, VAR_5->name,
        VAR_5->name2, VAR_5->name3);
                if (VAR_4 != VAR_0->nbElems) {

                    if (VAR_5 == &(VAR_0->table[VAR_3])) {
                        if (VAR_0->table[VAR_3].valid == 0)
                            VAR_5 = ((void*)0);
                        if (VAR_0->table[VAR_3].next != VAR_6)
       VAR_5 = &(VAR_0->table[VAR_3]);
                    } else
          VAR_5 = VAR_6;
                } else
      VAR_5 = VAR_6;
     }
 }
    }
}
