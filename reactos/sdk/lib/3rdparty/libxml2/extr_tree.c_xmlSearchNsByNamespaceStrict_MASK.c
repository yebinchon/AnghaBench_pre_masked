
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* xmlNsPtr ;
typedef TYPE_2__* xmlNodePtr ;
typedef int * xmlDocPtr ;
typedef int xmlChar ;
struct TYPE_9__ {scalar_t__ type; struct TYPE_9__* parent; TYPE_1__* nsDef; int * doc; } ;
struct TYPE_8__ {int const* prefix; int const* href; struct TYPE_8__* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int const* VAR_4 ;
 int FUNC_0 (int *,TYPE_2__*,TYPE_2__*,int const*) ;
 scalar_t__ FUNC_1 (int const*,int const*) ;
 TYPE_1__* FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(xmlDocPtr VAR_5, xmlNodePtr VAR_6,
        const xmlChar* VAR_7,
        xmlNsPtr *VAR_8, int VAR_9)
{
    xmlNodePtr VAR_10, VAR_11 = ((void*)0), VAR_12 = ((void*)0);
    xmlNsPtr VAR_13, VAR_14;

    if ((VAR_5 == ((void*)0)) || (VAR_7 == ((void*)0)) || (VAR_8 == ((void*)0)))
 return (-1);
    if ((VAR_6 == ((void*)0)) || (VAR_6->type == VAR_3))
        return(-1);

    *VAR_8 = ((void*)0);
    if (FUNC_1(VAR_7, VAR_4)) {
 *VAR_8 = FUNC_2(VAR_5);
 if (*VAR_8 == ((void*)0))
     return (-1);
 return (1);
    }
    VAR_10 = VAR_6;
    do {
 if (VAR_10->type == VAR_0) {
     if (VAR_10->nsDef != ((void*)0)) {
  for (VAR_13 = VAR_10->nsDef; VAR_13 != ((void*)0); VAR_13 = VAR_13->next) {
      if (VAR_9 && (VAR_13->prefix == ((void*)0)))
   continue;
      if (VAR_11 != ((void*)0)) {




   VAR_14 = VAR_11->nsDef;
   do {
       if ((VAR_14->prefix == VAR_13->prefix) ||
    ((VAR_14->prefix != ((void*)0)) &&
    (VAR_13->prefix != ((void*)0)) &&
    FUNC_1(VAR_14->prefix, VAR_13->prefix))) {



    break;
       }
       VAR_14 = VAR_14->next;
   } while (VAR_14 != ((void*)0));
   if (VAR_14 != ((void*)0))
       continue;
      }



      if ((VAR_7 == VAR_13->href) ||
   FUNC_1(VAR_7, VAR_13->href)) {





   if (VAR_12) {
       int VAR_15;

       VAR_15 = FUNC_0(VAR_5, VAR_6, VAR_11, VAR_13->prefix);
       if (VAR_15 < 0)
    return (-1);







       if (! VAR_15)
    continue;
   }
   *VAR_8 = VAR_13;
   return (1);
      }
  }
  VAR_12 = VAR_11;
  VAR_11 = VAR_10;
     }
 } else if ((VAR_10->type == VAR_2) ||
            (VAR_10->type == VAR_1))
     return (0);
 VAR_10 = VAR_10->parent;
    } while ((VAR_10 != ((void*)0)) && (VAR_10->doc != (xmlDocPtr) VAR_10));
    return (0);
}
