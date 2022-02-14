
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlHashTablePtr ;
typedef TYPE_2__* xmlHashEntryPtr ;
typedef int xmlChar ;
struct TYPE_6__ {scalar_t__ valid; void* payload; int name3; int name2; int name; struct TYPE_6__* next; } ;
struct TYPE_5__ {TYPE_2__* table; } ;


 unsigned long FUNC_0 (TYPE_1__*,int const*,int const*,int const*,int const*,int const*,int const*) ;
 scalar_t__ FUNC_1 (int const*,int const*,int ) ;

void *
FUNC_2(xmlHashTablePtr VAR_0,
                const xmlChar *VAR_1, const xmlChar *VAR_2,
  const xmlChar *VAR_3, const xmlChar *VAR_4,
  const xmlChar *VAR_5, const xmlChar *VAR_6) {
    unsigned long VAR_7;
    xmlHashEntryPtr VAR_8;

    if (VAR_0 == ((void*)0))
 return(((void*)0));
    if (VAR_2 == ((void*)0))
 return(((void*)0));
    VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
                             VAR_4, VAR_5, VAR_6);
    if (VAR_0->table[VAR_7].valid == 0)
 return(((void*)0));
    for (VAR_8 = &(VAR_0->table[VAR_7]); VAR_8 != ((void*)0); VAR_8 = VAR_8->next) {
 if ((FUNC_1(VAR_1, VAR_2, VAR_8->name)) &&
     (FUNC_1(VAR_3, VAR_4, VAR_8->name2)) &&
     (FUNC_1(VAR_5, VAR_6, VAR_8->name3)))
     return(VAR_8->payload);
    }
    return(((void*)0));
}
