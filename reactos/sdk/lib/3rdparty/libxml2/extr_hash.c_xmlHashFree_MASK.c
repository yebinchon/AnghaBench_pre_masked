
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xmlHashTablePtr ;
typedef TYPE_1__* xmlHashEntryPtr ;
typedef int (* xmlHashDeallocator ) (int *,TYPE_1__*) ;
struct TYPE_7__ {int nbElems; int size; scalar_t__ valid; int * dict; struct TYPE_7__* table; int * payload; struct TYPE_7__* name3; struct TYPE_7__* name2; struct TYPE_7__* name; struct TYPE_7__* next; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(xmlHashTablePtr VAR_0, xmlHashDeallocator VAR_1) {
    int VAR_2;
    xmlHashEntryPtr VAR_3;
    xmlHashEntryPtr VAR_4;
    int VAR_5 = 0;
    int VAR_6;

    if (VAR_0 == ((void*)0))
 return;
    if (VAR_0->table) {
 VAR_6 = VAR_0->nbElems;
 for(VAR_2 = 0; (VAR_2 < VAR_0->size) && (VAR_6 > 0); VAR_2++) {
     VAR_3 = &(VAR_0->table[VAR_2]);
     if (VAR_3->valid == 0)
  continue;
     VAR_5 = 1;
     while (VAR_3) {
  VAR_4 = VAR_3->next;
  if ((VAR_1 != ((void*)0)) && (VAR_3->payload != ((void*)0)))
      VAR_1(VAR_3->payload, VAR_3->name);
  if (VAR_0->dict == ((void*)0)) {
      if (VAR_3->name)
   FUNC_1(VAR_3->name);
      if (VAR_3->name2)
   FUNC_1(VAR_3->name2);
      if (VAR_3->name3)
   FUNC_1(VAR_3->name3);
  }
  VAR_3->payload = ((void*)0);
  if (!VAR_5)
      FUNC_1(VAR_3);
  VAR_6--;
  VAR_5 = 0;
  VAR_3 = VAR_4;
     }
 }
 FUNC_1(VAR_0->table);
    }
    if (VAR_0->dict)
        FUNC_0(VAR_0->dict);
    FUNC_1(VAR_0);
}
