
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_54__ TYPE_4__ ;
typedef struct TYPE_53__ TYPE_3__ ;
typedef struct TYPE_52__ TYPE_2__ ;
typedef struct TYPE_51__ TYPE_1__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef TYPE_3__* xmlNsPtr ;
typedef TYPE_4__* xmlNodePtr ;
typedef int xmlAttrPtr ;
struct TYPE_54__ {int type; int name; int * children; int * properties; TYPE_3__* ns; int * nsDef; int doc; TYPE_1__* parent; int * next; struct TYPE_54__* last; int content; } ;
struct TYPE_53__ {int * prefix; int * href; } ;
struct TYPE_52__ {int output; } ;
struct TYPE_51__ {int const type; } ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 (TYPE_4__*,int ,int ) ;
 int FUNC_2 (TYPE_3__**) ;
 TYPE_3__** FUNC_3 (int ,TYPE_4__*) ;
 TYPE_3__* FUNC_4 (TYPE_4__*,int *,int *) ;
 TYPE_3__* FUNC_5 (int ,TYPE_4__*,int *) ;
 TYPE_3__* FUNC_6 (int ,TYPE_4__*,int *) ;
 int FUNC_7 (int *,int *) ;
 int VAR_0 ;
 TYPE_4__* FUNC_8 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_4__*,TYPE_4__*,int *) ;
 int FUNC_10 (TYPE_2__*,TYPE_4__*,int *) ;
 int FUNC_11 (TYPE_4__*,int *) ;
 TYPE_4__* FUNC_12 (TYPE_2__*,TYPE_4__*,int ,int) ;
 TYPE_4__* FUNC_13 (TYPE_2__*,TYPE_4__*,int *,TYPE_4__*,int,int) ;
 TYPE_3__* FUNC_14 (TYPE_2__*,TYPE_4__*,int *,int *,TYPE_4__*) ;
 int FUNC_15 (TYPE_2__*,TYPE_4__*,TYPE_4__*,int ) ;
 int FUNC_16 (TYPE_2__*,TYPE_4__*,TYPE_4__*,TYPE_3__*) ;
 int FUNC_17 (TYPE_2__*,int *,TYPE_4__*,char*,int ) ;

__attribute__((used)) static xmlNodePtr
FUNC_18(xsltTransformContextPtr VAR_1, xmlNodePtr VAR_2,
      xmlNodePtr VAR_3, xmlNodePtr VAR_4, int VAR_5,
      int VAR_6)
{
    xmlNodePtr VAR_7;

    if (VAR_3 == ((void*)0))
 return(((void*)0));
    switch (VAR_3->type) {
        case 138:
        case 135:
        case 136:
        case 131:
        case 145:
        case 142:
        case 134:



     break;
        case 130: {
     int VAR_8 = (VAR_3->name == VAR_0);
     return(FUNC_12(VAR_1, VAR_4, VAR_3->content, VAR_8));
     }
        case 146:
     return(FUNC_12(VAR_1, VAR_4, VAR_3->content, 0));
        case 147:
     return((xmlNodePtr)
  FUNC_15(VAR_1, VAR_2, VAR_4, (xmlAttrPtr) VAR_3));
        case 133:
     return((xmlNodePtr) FUNC_16(VAR_1, VAR_2,
  VAR_4, (xmlNsPtr) VAR_3));

        case 141:
        case 143:
        case 132:
        case 140:
        case 139:
        case 148:
        case 137:
        case 128:
        case 129:
            return(((void*)0));
    }
    if (FUNC_0(VAR_3)) {
 if (VAR_3->children != ((void*)0))
     VAR_7 = FUNC_13(VAR_1, VAR_2,
  VAR_3->children, VAR_4, 0, 0);
 else
     VAR_7 = ((void*)0);
 return(VAR_7);
    }
    VAR_7 = FUNC_1(VAR_3, VAR_4->doc, 0);
    if (VAR_7 != ((void*)0)) {
 VAR_7->doc = VAR_1->output;
 VAR_7 = FUNC_8(VAR_4, VAR_7);
        if (VAR_7 == ((void*)0)) {
            FUNC_17(VAR_1, ((void*)0), VAR_2,
            "xsltCopyTree: Copying of '%s' failed.\n", VAR_3->name);
            return (VAR_7);
        }



 if (VAR_4->last != VAR_7)
     return(VAR_4->last);
 VAR_7->next = ((void*)0);

 if (VAR_3->type == 138) {
     if ((VAR_6 == 0) &&
  (VAR_3->parent != ((void*)0)) &&
  (VAR_3->parent->type != 142) &&
  (VAR_3->parent->type != 134))
     {
  xmlNsPtr *VAR_9, *VAR_10, VAR_11;
  VAR_9 = FUNC_3(VAR_3->doc, VAR_3);
  if (VAR_9 != ((void*)0)) {
      VAR_10 = VAR_9;
      do {




   VAR_11 = FUNC_5(VAR_4->doc, VAR_4,
       (*VAR_10)->prefix);

   if ((VAR_11 == ((void*)0)) ||
       (! FUNC_7(VAR_11->href, (*VAR_10)->href)))
   {
       VAR_11 = ((void*)0);
   }
   if (VAR_11 == ((void*)0)) {



       VAR_11 = FUNC_4(VAR_7, (*VAR_10)->href,
    (*VAR_10)->prefix);

   }
   if (VAR_3->ns == *VAR_10) {




       VAR_7->ns = VAR_11;
   }
   VAR_10++;
      } while (*VAR_10 != ((void*)0));
      FUNC_2(VAR_9);
  }
     } else if (VAR_3->nsDef != ((void*)0)) {



  if (VAR_3->nsDef != ((void*)0)) {
      if (VAR_5)
   FUNC_10(VAR_1, VAR_7, VAR_3->nsDef);
      else
   FUNC_11(VAR_7, VAR_3->nsDef);
  }
     }



     if (VAR_3->ns != ((void*)0)) {
  if (VAR_7->ns == ((void*)0)) {




      VAR_7->ns = FUNC_14(VAR_1, VAR_2,
   VAR_3->ns->href, VAR_3->ns->prefix, VAR_7);
  }
     } else if ((VAR_4->type == 138) &&
  (VAR_4->ns != ((void*)0)))
     {



  FUNC_14(VAR_1, VAR_2, ((void*)0), ((void*)0), VAR_7);
     }



     if (VAR_3->properties != ((void*)0)) {
  FUNC_9(VAR_1, VAR_2,
      VAR_7, VAR_3->properties);
     }
     if (VAR_6 == 0)
  VAR_6 = 1;
 }



 if (VAR_3->children != ((void*)0)) {
     FUNC_13(VAR_1, VAR_2,
  VAR_3->children, VAR_7, VAR_5, VAR_6);
 }
    } else {
 FUNC_17(VAR_1, ((void*)0), VAR_2,
     "xsltCopyTree: Copying of '%s' failed.\n", VAR_3->name);
    }
    return(VAR_7);
}
