
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_16__ ;


typedef TYPE_2__* xsltStylesheetPtr ;
typedef TYPE_3__* xmlNsPtr ;
typedef TYPE_4__* xmlNodePtr ;
typedef int xmlChar ;
typedef TYPE_5__* xmlAttrPtr ;
struct TYPE_26__ {struct TYPE_26__* next; TYPE_4__* children; } ;
struct TYPE_25__ {scalar_t__ type; struct TYPE_25__* next; struct TYPE_25__* parent; struct TYPE_25__* children; TYPE_1__* ns; int * content; TYPE_3__* nsDef; TYPE_16__* doc; TYPE_5__* properties; } ;
struct TYPE_24__ {struct TYPE_24__* next; int href; int * prefix; } ;
struct TYPE_23__ {scalar_t__ exclPrefixNr; scalar_t__ doc; int * dict; int * exclPrefixTab; scalar_t__ internalized; } ;
struct TYPE_22__ {int href; } ;
struct TYPE_21__ {int * dict; } ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *) ;
 TYPE_4__* FUNC_6 (TYPE_16__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int FUNC_13 (int ,char*) ;
 int VAR_7 ;
 int FUNC_14 (TYPE_2__*,TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_15(xsltStylesheetPtr VAR_8, xmlNodePtr VAR_9)
{
    xmlNodePtr VAR_10, VAR_11;
    int VAR_12 = 0;

    if ((VAR_8 == ((void*)0)) || (VAR_9 == ((void*)0)))
        return;

    if ((VAR_9->doc != ((void*)0)) && (VAR_8->dict != ((void*)0)) &&
        (VAR_9->doc->dict == VAR_8->dict))
 VAR_12 = 1;
    else
        VAR_8->internalized = 0;

    if ((VAR_9 != ((void*)0)) && (FUNC_1(VAR_9)) &&
        (FUNC_2(VAR_9, "stylesheet"))) {
 VAR_11 = VAR_9;
    } else {
        VAR_11 = ((void*)0);
    }






    VAR_10 = ((void*)0);
    while (VAR_9 != ((void*)0)) {
 if (VAR_10 != ((void*)0)) {




     FUNC_11(VAR_10);
     FUNC_7(VAR_10);
     VAR_10 = ((void*)0);
 }
 if (VAR_9->type == VAR_1) {
     int VAR_13;



     if ((VAR_12) && (VAR_9->properties != ((void*)0))) {
         xmlAttrPtr VAR_14 = VAR_9->properties;
  xmlNodePtr VAR_15;

  while (VAR_14 != ((void*)0)) {
      VAR_15 = VAR_14->children;
      if ((VAR_15 != ((void*)0)) && (VAR_15->type == VAR_5) &&
          (VAR_15->content != ((void*)0)) &&
   (!FUNC_5(VAR_8->dict, VAR_15->content)))
      {
   xmlChar *VAR_16;






   VAR_16 = (xmlChar *) FUNC_4(VAR_8->dict,
                                   VAR_15->content, -1);
   if (VAR_16 != VAR_15->content) {
       FUNC_9(VAR_15, ((void*)0));
       VAR_15->content = VAR_16;
   }
      }
      VAR_14 = VAR_14->next;
  }
     }
     if (FUNC_1(VAR_9)) {
  VAR_13 = 0;
  if (FUNC_2(VAR_9, "text")) {
      for (;VAR_13 > 0;VAR_13--)
   FUNC_3(VAR_8);
      goto skip_children;
  }
     } else {
  VAR_13 = FUNC_14(VAR_8, VAR_9, 0);
     }

     if ((VAR_9->nsDef != ((void*)0)) && (VAR_8->exclPrefixNr > 0)) {
  xmlNsPtr VAR_17 = VAR_9->nsDef, VAR_18 = ((void*)0), VAR_19;
  xmlNodePtr VAR_20 = ((void*)0);
  int VAR_21, VAR_22;

  VAR_20 = FUNC_6(VAR_9->doc);
  if ((VAR_20 != ((void*)0)) && (VAR_20 != VAR_9)) {
      while (VAR_17 != ((void*)0)) {
   VAR_22 = 0;
   VAR_19 = VAR_17->next;
   for (VAR_21 = 0;VAR_21 < VAR_8->exclPrefixNr;VAR_21++) {
       if ((VAR_17->prefix != ((void*)0)) &&
           (FUNC_10(VAR_17->href,
          VAR_8->exclPrefixTab[VAR_21]))) {





    if (VAR_18 == ((void*)0)) {
        VAR_9->nsDef = VAR_17->next;
    } else {
        VAR_18->next = VAR_17->next;
    }
    VAR_17->next = VAR_20->nsDef;
    VAR_20->nsDef = VAR_17;
    VAR_22 = 1;
    break;
       }
   }
   if (VAR_22 == 0)
       VAR_18 = VAR_17;
   VAR_17 = VAR_19;
      }
  }
     }




     if (VAR_13 > 0) {
  FUNC_15(VAR_8, VAR_9->children);
  for (;VAR_13 > 0;VAR_13--)
      FUNC_3(VAR_8);
  goto skip_children;
     }
 } else if (VAR_9->type == VAR_5) {
     if (FUNC_0(VAR_9)) {
  if (FUNC_8(VAR_9->parent) != 1) {
      VAR_10 = VAR_9;
  }
     } else if ((VAR_9->content != ((void*)0)) && (VAR_12) &&
                (!FUNC_5(VAR_8->dict, VAR_9->content))) {
  xmlChar *VAR_23;






  VAR_23 = (xmlChar *) FUNC_4(VAR_8->dict, VAR_9->content, -1);
  FUNC_9(VAR_9, ((void*)0));
  VAR_9->content = VAR_23;
     }
 } else if ((VAR_9->type != VAR_1) &&
     (VAR_9->type != VAR_0)) {
     VAR_10 = VAR_9;
     goto skip_children;
 }






 if ((VAR_9->type == VAR_1) && (VAR_9->ns != ((void*)0)) &&
     (VAR_11 != ((void*)0)) && (VAR_9->parent == VAR_11) &&
     (!FUNC_10(VAR_9->ns->href, VAR_6)) &&
     (!FUNC_12(VAR_8, VAR_9->ns->href))) {
     goto skip_children;
 } else if (VAR_9->children != ((void*)0)) {
     if ((VAR_9->children->type != VAR_2) &&
  (VAR_9->children->type != VAR_4) &&
  (VAR_9->children->type != VAR_3)) {
  VAR_9 = VAR_9->children;
  continue;
     }
 }

skip_children:
 if (VAR_9->next != ((void*)0)) {
     VAR_9 = VAR_9->next;
     continue;
 }
 do {

     VAR_9 = VAR_9->parent;
     if (VAR_9 == ((void*)0))
  break;
     if (VAR_9 == (xmlNodePtr) VAR_8->doc) {
  VAR_9 = ((void*)0);
  break;
     }
     if (VAR_9->next != ((void*)0)) {
  VAR_9 = VAR_9->next;
  break;
     }
 } while (VAR_9 != ((void*)0));
    }
    if (VAR_10 != ((void*)0)) {




 FUNC_11(VAR_10);
 FUNC_7(VAR_10);
    }
}
