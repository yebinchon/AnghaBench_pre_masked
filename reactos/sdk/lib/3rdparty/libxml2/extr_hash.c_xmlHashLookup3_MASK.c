
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlHashTablePtr ;
typedef TYPE_2__* xmlHashEntryPtr ;
typedef int xmlChar ;
struct TYPE_6__ {scalar_t__ valid; void* payload; int const* name3; int const* name2; int const* name; struct TYPE_6__* next; } ;
struct TYPE_5__ {TYPE_2__* table; scalar_t__ dict; } ;


 unsigned long FUNC_0 (TYPE_1__*,int const*,int const*,int const*) ;
 scalar_t__ FUNC_1 (int const*,int const*) ;

void *
FUNC_2(xmlHashTablePtr VAR_0, const xmlChar *VAR_1,
        const xmlChar *VAR_2, const xmlChar *VAR_3) {
    unsigned long VAR_4;
    xmlHashEntryPtr VAR_5;

    if (VAR_0 == ((void*)0))
 return(((void*)0));
    if (VAR_1 == ((void*)0))
 return(((void*)0));
    VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
    if (VAR_0->table[VAR_4].valid == 0)
 return(((void*)0));
    if (VAR_0->dict) {
 for (VAR_5 = &(VAR_0->table[VAR_4]); VAR_5 != ((void*)0); VAR_5 = VAR_5->next) {
     if ((VAR_5->name == VAR_1) &&
  (VAR_5->name2 == VAR_2) &&
  (VAR_5->name3 == VAR_3))
  return(VAR_5->payload);
 }
    }
    for (VAR_5 = &(VAR_0->table[VAR_4]); VAR_5 != ((void*)0); VAR_5 = VAR_5->next) {
 if ((FUNC_1(VAR_5->name, VAR_1)) &&
     (FUNC_1(VAR_5->name2, VAR_2)) &&
     (FUNC_1(VAR_5->name3, VAR_3)))
     return(VAR_5->payload);
    }
    return(((void*)0));
}
