
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_3__* xmlNsPtr ;
typedef TYPE_4__* xmlNodePtr ;
typedef TYPE_5__* xmlDocPtr ;
typedef int xmlChar ;
typedef TYPE_6__* xmlAttributePtr ;
typedef TYPE_7__* xmlAttrPtr ;
struct TYPE_21__ {struct TYPE_21__* next; int children; TYPE_2__* ns; int name; } ;
struct TYPE_20__ {int * defaultValue; int * prefix; } ;
struct TYPE_19__ {int * extSubset; int * intSubset; } ;
struct TYPE_18__ {scalar_t__ type; int name; TYPE_5__* doc; TYPE_1__* ns; TYPE_7__* properties; } ;
struct TYPE_17__ {int href; } ;
struct TYPE_16__ {int href; } ;
struct TYPE_15__ {int href; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_6__* FUNC_0 (int *,int ,int const*) ;
 int * FUNC_1 (TYPE_4__*,int const*) ;
 int * FUNC_2 (TYPE_5__*,int ,int) ;
 TYPE_3__* FUNC_3 (TYPE_5__*,TYPE_4__*,int *) ;
 scalar_t__ FUNC_4 (int ,int const*) ;
 int * FUNC_5 (int *) ;

xmlChar *
FUNC_6(xmlNodePtr VAR_2, const xmlChar *VAR_3, const xmlChar *VAR_4) {
    xmlAttrPtr VAR_5;
    xmlDocPtr VAR_6;
    xmlNsPtr VAR_7;

    if (VAR_2 == ((void*)0))
 return(((void*)0));

    if (VAR_4 == ((void*)0))
        return FUNC_1(VAR_2, VAR_3);

    if (VAR_2->type == VAR_1)
        return(((void*)0));
    if (VAR_2->type == VAR_0)
 VAR_5 = VAR_2->properties;
    else
 VAR_5 = ((void*)0);
    while (VAR_5 != ((void*)0)) {





        if ((FUNC_4(VAR_5->name, VAR_3)) &&
     (((VAR_5->ns == ((void*)0)) && (VAR_2->ns != ((void*)0)) &&
       (FUNC_4(VAR_2->ns->href, VAR_4))) ||
      ((VAR_5->ns != ((void*)0)) &&
       (FUNC_4(VAR_5->ns->href, VAR_4))))) {
     xmlChar *VAR_8;

     VAR_8 = FUNC_2(VAR_2->doc, VAR_5->children, 1);
     if (VAR_8 == ((void*)0)) return(FUNC_5((xmlChar *)""));
     return(VAR_8);
        }
 VAR_5 = VAR_5->next;
    }





    VAR_6 = VAR_2->doc;
    if (VAR_6 != ((void*)0)) {
        if (VAR_6->intSubset != ((void*)0)) {
     xmlAttributePtr VAR_9;

     VAR_9 = FUNC_0(VAR_6->intSubset, VAR_2->name, VAR_3);
     if ((VAR_9 == ((void*)0)) && (VAR_6->extSubset != ((void*)0)))
  VAR_9 = FUNC_0(VAR_6->extSubset, VAR_2->name, VAR_3);

     if ((VAR_9 != ((void*)0)) && (VAR_9->prefix != ((void*)0))) {



  VAR_7 = FUNC_3(VAR_6, VAR_2, VAR_9->prefix);
  if ((VAR_7 != ((void*)0)) && (FUNC_4(VAR_7->href, VAR_4)))
      return(FUNC_5(VAR_9->defaultValue));
     }
 }
    }
    return(((void*)0));
}
