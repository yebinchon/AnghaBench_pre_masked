
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xmlHashTablePtr ;
typedef TYPE_2__* xmlHashEntryPtr ;
typedef int (* xmlHashCopier ) (int ,int ) ;
struct TYPE_8__ {scalar_t__ valid; int name; int payload; int name3; int name2; struct TYPE_8__* next; } ;
struct TYPE_7__ {int size; int nbElems; TYPE_2__* table; } ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_1 (int) ;

xmlHashTablePtr
FUNC_2(xmlHashTablePtr VAR_0, xmlHashCopier VAR_1) {
    int VAR_2;
    xmlHashEntryPtr VAR_3;
    xmlHashEntryPtr VAR_4;
    xmlHashTablePtr VAR_5;

    if (VAR_0 == ((void*)0))
 return(((void*)0));
    if (VAR_1 == ((void*)0))
 return(((void*)0));

    VAR_5 = FUNC_1(VAR_0->size);
    if (VAR_5 == ((void*)0))
        return(((void*)0));

    if (VAR_0->table) {
 for(VAR_2 = 0; VAR_2 < VAR_0->size; VAR_2++) {
     if (VAR_0->table[VAR_2].valid == 0)
  continue;
     VAR_3 = &(VAR_0->table[VAR_2]);
     while (VAR_3) {
  VAR_4 = VAR_3->next;
  FUNC_0(VAR_5, VAR_3->name, VAR_3->name2,
            VAR_3->name3, VAR_1(VAR_3->payload, VAR_3->name));
  VAR_3 = VAR_4;
     }
 }
    }
    VAR_5->nbElems = VAR_0->nbElems;
    return(VAR_5);
}
