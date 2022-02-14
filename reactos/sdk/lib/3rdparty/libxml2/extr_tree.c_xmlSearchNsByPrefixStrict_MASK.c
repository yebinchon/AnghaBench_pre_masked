
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xmlNsPtr ;
typedef TYPE_2__* xmlNodePtr ;
typedef int * xmlDocPtr ;
typedef int xmlChar ;
struct TYPE_7__ {scalar_t__ type; struct TYPE_7__* parent; TYPE_1__* nsDef; int * doc; } ;
struct TYPE_6__ {struct TYPE_6__* next; int * href; int const* prefix; } ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int const*,int const*) ;
 TYPE_1__* FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(xmlDocPtr VAR_4, xmlNodePtr VAR_5,
     const xmlChar* VAR_6,
     xmlNsPtr *VAR_7)
{
    xmlNodePtr VAR_8;
    xmlNsPtr VAR_9;

    if ((VAR_4 == ((void*)0)) || (VAR_5 == ((void*)0)) || (VAR_5->type == VAR_3))
        return(-1);

    if (VAR_7)
 *VAR_7 = ((void*)0);
    if (FUNC_0(VAR_6)) {
 if (VAR_7) {
     *VAR_7 = FUNC_2(VAR_4);
     if (*VAR_7 == ((void*)0))
  return (-1);
 }
 return (1);
    }
    VAR_8 = VAR_5;
    do {
 if (VAR_8->type == VAR_0) {
     if (VAR_8->nsDef != ((void*)0)) {
  VAR_9 = VAR_8->nsDef;
  do {
      if ((VAR_6 == VAR_9->prefix) ||
   FUNC_1(VAR_6, VAR_9->prefix))
      {



   if (VAR_9->href == ((void*)0))
       return(0);
   if (VAR_7)
       *VAR_7 = VAR_9;
   return (1);
      }
      VAR_9 = VAR_9->next;
  } while (VAR_9 != ((void*)0));
     }
 } else if ((VAR_8->type == VAR_2) ||
            (VAR_8->type == VAR_1))
     return (0);
 VAR_8 = VAR_8->parent;
    } while ((VAR_8 != ((void*)0)) && (VAR_8->doc != (xmlDocPtr) VAR_8));
    return (0);
}
