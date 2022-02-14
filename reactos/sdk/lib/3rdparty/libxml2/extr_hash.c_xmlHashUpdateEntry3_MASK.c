
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xmlHashTablePtr ;
typedef TYPE_2__* xmlHashEntryPtr ;
typedef int xmlHashEntry ;
typedef int (* xmlHashDeallocator ) (void*,int const*) ;
typedef int const xmlChar ;
struct TYPE_7__ {scalar_t__ valid; struct TYPE_7__* next; void* payload; int const* name3; int const* name2; int const* name; } ;
struct TYPE_6__ {int nbElems; int * dict; TYPE_2__* table; } ;


 int const* FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (int *,int const*) ;
 unsigned long FUNC_2 (TYPE_1__*,int const*,int const*,int const*) ;
 TYPE_2__* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int const*,int const*) ;
 void* FUNC_5 (int const*) ;

int
FUNC_6(xmlHashTablePtr VAR_0, const xmlChar *VAR_1,
            const xmlChar *VAR_2, const xmlChar *VAR_3,
     void *VAR_4, xmlHashDeallocator VAR_5) {
    unsigned long VAR_6;
    xmlHashEntryPtr VAR_7;
    xmlHashEntryPtr VAR_8;

    if ((VAR_0 == ((void*)0)) || VAR_1 == ((void*)0))
 return(-1);




    if (VAR_0->dict) {
        if (!FUNC_1(VAR_0->dict, VAR_1)) {
     VAR_1 = FUNC_0(VAR_0->dict, VAR_1, -1);
     if (VAR_1 == ((void*)0))
         return(-1);
 }
        if ((VAR_2 != ((void*)0)) && (!FUNC_1(VAR_0->dict, VAR_2))) {
     VAR_2 = FUNC_0(VAR_0->dict, VAR_2, -1);
     if (VAR_2 == ((void*)0))
         return(-1);
 }
        if ((VAR_3 != ((void*)0)) && (!FUNC_1(VAR_0->dict, VAR_3))) {
     VAR_3 = FUNC_0(VAR_0->dict, VAR_3, -1);
     if (VAR_3 == ((void*)0))
         return(-1);
 }
    }




    VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
    if (VAR_0->table[VAR_6].valid == 0) {
 VAR_8 = ((void*)0);
    } else {
        if (VAR_0 ->dict) {
     for (VAR_8 = &(VAR_0->table[VAR_6]); VAR_8->next != ((void*)0);
   VAR_8 = VAR_8->next) {
  if ((VAR_8->name == VAR_1) &&
      (VAR_8->name2 == VAR_2) &&
      (VAR_8->name3 == VAR_3)) {
      if (VAR_5)
   VAR_5(VAR_8->payload, VAR_8->name);
      VAR_8->payload = VAR_4;
      return(0);
  }
     }
     if ((VAR_8->name == VAR_1) &&
  (VAR_8->name2 == VAR_2) &&
  (VAR_8->name3 == VAR_3)) {
  if (VAR_5)
      VAR_5(VAR_8->payload, VAR_8->name);
  VAR_8->payload = VAR_4;
  return(0);
     }
 } else {
     for (VAR_8 = &(VAR_0->table[VAR_6]); VAR_8->next != ((void*)0);
   VAR_8 = VAR_8->next) {
  if ((FUNC_4(VAR_8->name, VAR_1)) &&
      (FUNC_4(VAR_8->name2, VAR_2)) &&
      (FUNC_4(VAR_8->name3, VAR_3))) {
      if (VAR_5)
   VAR_5(VAR_8->payload, VAR_8->name);
      VAR_8->payload = VAR_4;
      return(0);
  }
     }
     if ((FUNC_4(VAR_8->name, VAR_1)) &&
  (FUNC_4(VAR_8->name2, VAR_2)) &&
  (FUNC_4(VAR_8->name3, VAR_3))) {
  if (VAR_5)
      VAR_5(VAR_8->payload, VAR_8->name);
  VAR_8->payload = VAR_4;
  return(0);
     }
 }
    }

    if (VAR_8 == ((void*)0)) {
 VAR_7 = &(VAR_0->table[VAR_6]);
    } else {
 VAR_7 = FUNC_3(sizeof(xmlHashEntry));
 if (VAR_7 == ((void*)0))
      return(-1);
    }

    if (VAR_0->dict != ((void*)0)) {
        VAR_7->name = (xmlChar *) VAR_1;
        VAR_7->name2 = (xmlChar *) VAR_2;
        VAR_7->name3 = (xmlChar *) VAR_3;
    } else {
 VAR_7->name = FUNC_5(VAR_1);
 VAR_7->name2 = FUNC_5(VAR_2);
 VAR_7->name3 = FUNC_5(VAR_3);
    }
    VAR_7->payload = VAR_4;
    VAR_7->next = ((void*)0);
    VAR_7->valid = 1;
    VAR_0->nbElems++;


    if (VAR_8 != ((void*)0)) {
 VAR_8->next = VAR_7;
    }
    return(0);
}
