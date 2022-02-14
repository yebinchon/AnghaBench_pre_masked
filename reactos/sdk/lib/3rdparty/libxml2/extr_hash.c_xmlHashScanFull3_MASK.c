
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlHashTablePtr ;
typedef int (* xmlHashScannerFull ) (int *,void*,int ,int ,int ) ;
typedef TYPE_2__* xmlHashEntryPtr ;
typedef int xmlChar ;
struct TYPE_5__ {scalar_t__ valid; int name3; int name2; int name; int * payload; struct TYPE_5__* next; } ;
struct TYPE_4__ {int size; TYPE_2__* table; } ;


 scalar_t__ FUNC_0 (int const*,int ) ;

void
FUNC_1(xmlHashTablePtr VAR_0, const xmlChar *VAR_1,
   const xmlChar *VAR_2, const xmlChar *VAR_3,
   xmlHashScannerFull VAR_4, void *VAR_5) {
    int VAR_6;
    xmlHashEntryPtr VAR_7;
    xmlHashEntryPtr VAR_8;

    if (VAR_0 == ((void*)0))
 return;
    if (VAR_4 == ((void*)0))
 return;

    if (VAR_0->table) {
 for(VAR_6 = 0; VAR_6 < VAR_0->size; VAR_6++) {
     if (VAR_0->table[VAR_6].valid == 0)
  continue;
     VAR_7 = &(VAR_0->table[VAR_6]);
     while (VAR_7) {
  VAR_8 = VAR_7->next;
  if (((VAR_1 == ((void*)0)) || (FUNC_0(VAR_1, VAR_7->name))) &&
      ((VAR_2 == ((void*)0)) || (FUNC_0(VAR_2, VAR_7->name2))) &&
      ((VAR_3 == ((void*)0)) || (FUNC_0(VAR_3, VAR_7->name3))) &&
      (VAR_7->payload != ((void*)0))) {
      VAR_4(VAR_7->payload, VAR_5, VAR_7->name,
        VAR_7->name2, VAR_7->name3);
  }
  VAR_7 = VAR_8;
     }
 }
    }
}
