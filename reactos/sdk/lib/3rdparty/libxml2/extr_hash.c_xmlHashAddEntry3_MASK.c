
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xmlHashTablePtr ;
typedef TYPE_2__* xmlHashEntryPtr ;
typedef int xmlHashEntry ;
typedef int const xmlChar ;
struct TYPE_8__ {scalar_t__ valid; struct TYPE_8__* next; void* payload; int const* name3; int const* name2; int const* name; } ;
struct TYPE_7__ {unsigned long size; int nbElems; int * dict; TYPE_2__* table; } ;


 unsigned long VAR_0 ;
 int const* FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (int *,int const*) ;
 unsigned long FUNC_2 (TYPE_1__*,int const*,int const*,int const*) ;
 int FUNC_3 (TYPE_1__*,unsigned long) ;
 TYPE_2__* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int const*,int const*) ;
 void* FUNC_6 (int const*) ;

int
FUNC_7(xmlHashTablePtr VAR_1, const xmlChar *VAR_2,
          const xmlChar *VAR_3, const xmlChar *VAR_4,
   void *VAR_5) {
    unsigned long VAR_6, VAR_7 = 0;
    xmlHashEntryPtr VAR_8;
    xmlHashEntryPtr VAR_9;

    if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)))
 return(-1);




    if (VAR_1->dict) {
        if (!FUNC_1(VAR_1->dict, VAR_2)) {
     VAR_2 = FUNC_0(VAR_1->dict, VAR_2, -1);
     if (VAR_2 == ((void*)0))
         return(-1);
 }
        if ((VAR_3 != ((void*)0)) && (!FUNC_1(VAR_1->dict, VAR_3))) {
     VAR_3 = FUNC_0(VAR_1->dict, VAR_3, -1);
     if (VAR_3 == ((void*)0))
         return(-1);
 }
        if ((VAR_4 != ((void*)0)) && (!FUNC_1(VAR_1->dict, VAR_4))) {
     VAR_4 = FUNC_0(VAR_1->dict, VAR_4, -1);
     if (VAR_4 == ((void*)0))
         return(-1);
 }
    }




    VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
    if (VAR_1->table[VAR_6].valid == 0) {
 VAR_9 = ((void*)0);
    } else {
        if (VAR_1->dict) {
     for (VAR_9 = &(VAR_1->table[VAR_6]); VAR_9->next != ((void*)0);
   VAR_9 = VAR_9->next) {
  if ((VAR_9->name == VAR_2) &&
      (VAR_9->name2 == VAR_3) &&
      (VAR_9->name3 == VAR_4))
      return(-1);
  VAR_7++;
     }
     if ((VAR_9->name == VAR_2) &&
  (VAR_9->name2 == VAR_3) &&
  (VAR_9->name3 == VAR_4))
  return(-1);
 } else {
     for (VAR_9 = &(VAR_1->table[VAR_6]); VAR_9->next != ((void*)0);
   VAR_9 = VAR_9->next) {
  if ((FUNC_5(VAR_9->name, VAR_2)) &&
      (FUNC_5(VAR_9->name2, VAR_3)) &&
      (FUNC_5(VAR_9->name3, VAR_4)))
      return(-1);
  VAR_7++;
     }
     if ((FUNC_5(VAR_9->name, VAR_2)) &&
  (FUNC_5(VAR_9->name2, VAR_3)) &&
  (FUNC_5(VAR_9->name3, VAR_4)))
  return(-1);
 }
    }

    if (VAR_9 == ((void*)0)) {
 VAR_8 = &(VAR_1->table[VAR_6]);
    } else {
 VAR_8 = FUNC_4(sizeof(xmlHashEntry));
 if (VAR_8 == ((void*)0))
      return(-1);
    }

    if (VAR_1->dict != ((void*)0)) {
        VAR_8->name = (xmlChar *) VAR_2;
        VAR_8->name2 = (xmlChar *) VAR_3;
        VAR_8->name3 = (xmlChar *) VAR_4;
    } else {
 VAR_8->name = FUNC_6(VAR_2);
 VAR_8->name2 = FUNC_6(VAR_3);
 VAR_8->name3 = FUNC_6(VAR_4);
    }
    VAR_8->payload = VAR_5;
    VAR_8->next = ((void*)0);
    VAR_8->valid = 1;


    if (VAR_9 != ((void*)0))
 VAR_9->next = VAR_8;

    VAR_1->nbElems++;

    if (VAR_7 > VAR_0)
 FUNC_3(VAR_1, VAR_0 * VAR_1->size);

    return(0);
}
