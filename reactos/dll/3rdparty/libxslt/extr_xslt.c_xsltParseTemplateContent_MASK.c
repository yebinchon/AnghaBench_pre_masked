
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_15__ ;
typedef struct TYPE_24__ TYPE_14__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xmlNodePtr ;
typedef int const xmlChar ;
typedef TYPE_3__* xmlAttrPtr ;
struct TYPE_28__ {struct TYPE_28__* next; } ;
struct TYPE_27__ {scalar_t__ type; struct TYPE_27__* next; struct TYPE_27__* children; struct TYPE_27__* parent; TYPE_3__* properties; TYPE_15__* doc; TYPE_14__* ns; int const* content; int name; } ;
struct TYPE_26__ {int warnings; int * defaultAlias; int * nsDefs; int dict; scalar_t__ internalized; int errors; } ;
struct TYPE_25__ {int * dict; } ;
struct TYPE_24__ {int prefix; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int const* FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int ,int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (TYPE_2__*) ;
 int const* FUNC_7 (TYPE_2__*,int const*,int *) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 TYPE_14__* FUNC_9 (TYPE_15__*,TYPE_2__*,int *) ;
 scalar_t__ FUNC_10 (int const*,int const*) ;
 int VAR_6 ;
 int FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_14 (int ,char*,...) ;
 int VAR_7 ;
 int FUNC_15 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_16 (int *,TYPE_1__*,TYPE_2__*,char*) ;

void
FUNC_17(xsltStylesheetPtr VAR_8, xmlNodePtr VAR_9) {
    xmlNodePtr VAR_10, VAR_11;

    if ((VAR_8 == ((void*)0)) || (VAR_9 == ((void*)0)) ||
        (VAR_9->type == VAR_4)) return;






    VAR_10 = VAR_9->children;
    VAR_11 = ((void*)0);
    while (VAR_10 != ((void*)0)) {
 if (VAR_11 != ((void*)0)) {




     FUNC_11(VAR_11);
     FUNC_6(VAR_11);
     VAR_11 = ((void*)0);
 }
 if (FUNC_0(VAR_10)) {
            FUNC_15(VAR_8, VAR_10);

     if (FUNC_1(VAR_10, "text")) {







  if (VAR_10->children != ((void*)0)) {
      xmlChar *VAR_12;
      xmlNodePtr VAR_13 = VAR_10->children, VAR_14;
      int VAR_15 = 0;

      VAR_12 = FUNC_7(VAR_10,
   (const xmlChar *)"disable-output-escaping",
   ((void*)0));
      if (VAR_12 != ((void*)0)) {




   if (FUNC_10(VAR_12, (const xmlChar *)"yes")) {
       VAR_15 = 1;
   } else if (!FUNC_10(VAR_12,
      (const xmlChar *)"no")){
       FUNC_16(((void*)0), VAR_8, VAR_10,
      "xsl:text: disable-output-escaping allows only yes or no\n");
       VAR_8->warnings++;

   }
   FUNC_5(VAR_12);
      }

      while (VAR_13 != ((void*)0)) {
   if (VAR_13->type == VAR_1) {
       VAR_13 = VAR_13->next;
       continue;
   }
   if ((VAR_13->type != VAR_5) &&
        (VAR_13->type != VAR_0)) {
       FUNC_16(((void*)0), VAR_8, VAR_10,
   "xsltParseTemplateContent: xslt:text content problem\n");
       VAR_8->errors++;
       break;
   }
   if ((VAR_15) && (VAR_13->type != VAR_0))
       VAR_13->name = VAR_6;
   VAR_13 = VAR_13->next;
      }




      if (VAR_13 == ((void*)0)) {
   VAR_13 = VAR_10->children;
   while (VAR_13 != ((void*)0)) {
       if ((VAR_8->internalized) &&
           (VAR_13->content != ((void*)0)) &&
           (!FUNC_4(VAR_8->dict, VAR_13->content))) {




    if (VAR_13->doc->dict != ((void*)0)) {
        const xmlChar *VAR_16;

        VAR_16 = FUNC_3(VAR_13->doc->dict,
                            VAR_13->content, -1);
        if (VAR_16 != VAR_13->content) {
            FUNC_8(VAR_13, ((void*)0));
     VAR_13->content = (xmlChar *) VAR_16;
        }
    }
       }

       VAR_14 = VAR_13->next;
       FUNC_11(VAR_13);
       FUNC_2(VAR_10, VAR_13);
       VAR_13 = VAR_14;
   }
      }
  }
  VAR_11 = VAR_10;
  goto skip_children;
     }
 }
 else if ((VAR_10->ns != ((void*)0)) && (VAR_8->nsDefs != ((void*)0)) &&
     (FUNC_12(VAR_8, VAR_10->ns->prefix)))
 {



     FUNC_15(VAR_8, VAR_10);
 }
 else if (VAR_10->type == VAR_2)
 {




     if ((VAR_10->ns == ((void*)0)) && (VAR_8->defaultAlias != ((void*)0))) {
  VAR_10->ns = FUNC_9(VAR_10->doc, VAR_10,
   VAR_8->defaultAlias);
     }
     if (VAR_10->properties != ((void*)0)) {
         xmlAttrPtr VAR_17 = VAR_10->properties;

  while (VAR_17 != ((void*)0)) {
      FUNC_13(VAR_8, VAR_17);
      VAR_17 = VAR_17->next;
  }
     }
 }



 if (VAR_10->children != ((void*)0)) {
     if (VAR_10->children->type != VAR_3) {
  VAR_10 = VAR_10->children;
  continue;
     }
 }
skip_children:
 if (VAR_10->next != ((void*)0)) {
     VAR_10 = VAR_10->next;
     continue;
 }

 do {
     VAR_10 = VAR_10->parent;
     if (VAR_10 == ((void*)0))
  break;
     if (VAR_10 == VAR_9) {
  VAR_10 = ((void*)0);
  break;
     }
     if (VAR_10->next != ((void*)0)) {
  VAR_10 = VAR_10->next;
  break;
     }
 } while (VAR_10 != ((void*)0));
    }
    if (VAR_11 != ((void*)0)) {




 FUNC_11(VAR_11);
 FUNC_6(VAR_11);
 VAR_11 = ((void*)0);
    }




    VAR_10 = VAR_9->children;
    while (VAR_10 != ((void*)0)) {
 if ((FUNC_0(VAR_10)) && (!(FUNC_1(VAR_10, "param"))))
     break;
 VAR_10 = VAR_10->next;
    }




    while (VAR_10 != ((void*)0)) {
 if ((FUNC_0(VAR_10)) && (FUNC_1(VAR_10, "param"))) {
     xmlNodePtr VAR_18 = VAR_10;

     FUNC_16(((void*)0), VAR_8, VAR_10,
  "xsltParseTemplateContent: ignoring misplaced param element\n");
     if (VAR_8 != ((void*)0)) VAR_8->warnings++;
            VAR_10 = VAR_10->next;
     FUNC_11(VAR_18);
     FUNC_6(VAR_18);
 } else
     break;
    }
}
