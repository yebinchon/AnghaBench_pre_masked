
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* xmlHashTablePtr ;
typedef TYPE_2__* xmlHashEntryPtr ;
typedef int xmlHashEntry ;
typedef int (* xmlHashDeallocator ) (int *,TYPE_2__*) ;
typedef int xmlChar ;
struct TYPE_12__ {scalar_t__ valid; struct TYPE_12__* next; struct TYPE_12__* name3; struct TYPE_12__* name2; struct TYPE_12__* name; int * payload; } ;
struct TYPE_11__ {int nbElems; TYPE_2__* table; int * dict; } ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 unsigned long FUNC_2 (TYPE_1__*,int const*,int const*,int const*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int const*) ;

int
FUNC_4(xmlHashTablePtr VAR_0, const xmlChar *VAR_1,
    const xmlChar *VAR_2, const xmlChar *VAR_3, xmlHashDeallocator VAR_4) {
    unsigned long VAR_5;
    xmlHashEntryPtr VAR_6;
    xmlHashEntryPtr VAR_7 = ((void*)0);

    if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
        return(-1);

    VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
    if (VAR_0->table[VAR_5].valid == 0) {
        return(-1);
    } else {
        for (VAR_6 = &(VAR_0->table[VAR_5]); VAR_6 != ((void*)0); VAR_6 = VAR_6->next) {
            if (FUNC_3(VAR_6->name, VAR_1) &&
                    FUNC_3(VAR_6->name2, VAR_2) &&
                    FUNC_3(VAR_6->name3, VAR_3)) {
                if ((VAR_4 != ((void*)0)) && (VAR_6->payload != ((void*)0)))
                    VAR_4(VAR_6->payload, VAR_6->name);
                VAR_6->payload = ((void*)0);
  if (VAR_0->dict == ((void*)0)) {
      if(VAR_6->name)
   FUNC_1(VAR_6->name);
      if(VAR_6->name2)
   FUNC_1(VAR_6->name2);
      if(VAR_6->name3)
   FUNC_1(VAR_6->name3);
  }
                if(VAR_7) {
                    VAR_7->next = VAR_6->next;
      FUNC_1(VAR_6);
  } else {
      if (VAR_6->next == ((void*)0)) {
   VAR_6->valid = 0;
      } else {
   VAR_6 = VAR_6->next;
   FUNC_0(&(VAR_0->table[VAR_5]), VAR_6, sizeof(xmlHashEntry));
   FUNC_1(VAR_6);
      }
  }
                VAR_0->nbElems--;
                return(0);
            }
            VAR_7 = VAR_6;
        }
        return(-1);
    }
}
