
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef TYPE_3__* xsltStylesheetPtr ;
typedef TYPE_4__* xsltStackElemPtr ;
typedef int * xmlXPathObjectPtr ;
typedef TYPE_5__* xmlXPathContextPtr ;
typedef int * xmlXPathCompExprPtr ;
typedef TYPE_6__* xmlNsPtr ;
typedef int xmlNodePtr ;
typedef int xmlDocPtr ;
typedef char xmlChar ;
struct TYPE_23__ {char* href; } ;
struct TYPE_22__ {int proximityPosition; int contextSize; int nsNr; TYPE_6__** namespaces; int node; int doc; } ;
struct TYPE_21__ {char const* name; char const* nameURI; int computed; int * value; int * tree; void* select; struct TYPE_21__* next; TYPE_1__* comp; } ;
struct TYPE_20__ {TYPE_4__* variables; int doc; } ;
struct TYPE_19__ {int * globalVars; int dict; int state; int initialContextNode; int initialContextDoc; TYPE_5__* xpathCtxt; TYPE_3__* style; } ;
struct TYPE_18__ {scalar_t__ type; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char const*,char const*,TYPE_4__*) ;
 int * FUNC_4 (int) ;
 void* FUNC_5 (int *,char const*,char const*) ;
 TYPE_6__* FUNC_6 (int ,int ,char const*) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;
 int * FUNC_8 (char const*) ;
 int * FUNC_9 (int *,TYPE_5__*) ;
 int FUNC_10 (int *,int *,int ) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (char const*) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (scalar_t__,char*,char const*,char const*) ;
 scalar_t__ VAR_5 ;
 TYPE_4__* FUNC_15 (int *) ;
 TYPE_3__* FUNC_16 (TYPE_3__*) ;
 char* FUNC_17 (int ,char const*,char const**) ;
 int FUNC_18 (TYPE_2__*,TYPE_3__*,int *,char*,char const*) ;

__attribute__((used)) static
int
FUNC_19(xsltTransformContextPtr VAR_6,
               const xmlChar * VAR_7,
        const xmlChar * VAR_8,
        int VAR_9) {

    xsltStylesheetPtr VAR_10;
    const xmlChar *VAR_11;
    const xmlChar *VAR_12;
    xmlXPathCompExprPtr VAR_13;
    xmlXPathObjectPtr VAR_14;

    xsltStackElemPtr VAR_15;
    int VAR_16;
    void *VAR_17;

    if (VAR_6 == ((void*)0))
 return(-1);
    if (VAR_7 == ((void*)0))
 return(0);
    if (VAR_8 == ((void*)0))
 return(0);

    VAR_10 = VAR_6->style;
    VAR_12 = ((void*)0);

    if (VAR_7[0] == '{') {
        int VAR_18 = 0;

        while ((VAR_7[VAR_18] != 0) && (VAR_7[VAR_18] != '}')) VAR_18++;
        if (VAR_7[VAR_18] == 0) {
           FUNC_18(VAR_6, VAR_10, ((void*)0),
           "user param : malformed parameter name : %s\n", VAR_7);
        } else {
           VAR_12 = FUNC_1(VAR_6->dict, &VAR_7[1], VAR_18-1);
           VAR_7 = FUNC_1(VAR_6->dict, &VAR_7[VAR_18 + 1], -1);
       }
    }
    else {
        VAR_7 = FUNC_17(VAR_6->dict, VAR_7, &VAR_11);
        if (VAR_11 != ((void*)0)) {
            xmlNsPtr VAR_19;

            VAR_19 = FUNC_6(VAR_10->doc, FUNC_2(VAR_10->doc),
                             VAR_11);
            if (VAR_19 == ((void*)0)) {
                FUNC_18(VAR_6, VAR_10, ((void*)0),
                "user param : no namespace bound to prefix %s\n", VAR_11);
                VAR_12 = ((void*)0);
            } else {
                VAR_12 = VAR_19->href;
            }
        }
    }

    if (VAR_7 == ((void*)0))
 return (-1);

    VAR_17 = FUNC_5(VAR_6->globalVars, VAR_7, VAR_12);
    if (VAR_17 != 0) {
 FUNC_18(VAR_6, VAR_10, ((void*)0),
     "Global parameter %s already defined\n", VAR_7);
    }
    if (VAR_6->globalVars == ((void*)0))
 VAR_6->globalVars = FUNC_4(20);




    while (VAR_10 != ((void*)0)) {
        VAR_15 = VAR_6->style->variables;
 while (VAR_15 != ((void*)0)) {
     if ((VAR_15->comp != ((void*)0)) &&
         (VAR_15->comp->type == VAR_0) &&
  (FUNC_7(VAR_15->name, VAR_7)) &&
  (FUNC_7(VAR_15->nameURI, VAR_12))) {
  return(0);
     }
            VAR_15 = VAR_15->next;
 }
        VAR_10 = FUNC_16(VAR_10);
    }
    VAR_10 = VAR_6->style;
    VAR_15 = ((void*)0);





    VAR_14 = ((void*)0);
    if (VAR_9 != 0) {
        VAR_13 = FUNC_8(VAR_8);
 if (VAR_13 != ((void*)0)) {
     xmlDocPtr VAR_20;
     xmlNodePtr VAR_21;
     int VAR_22, VAR_23, VAR_24;
     xmlNsPtr *VAR_25;
     xmlXPathContextPtr VAR_26 = VAR_6->xpathCtxt;




     VAR_20 = VAR_26->doc;
     VAR_21 = VAR_26->node;
     VAR_22 = VAR_26->proximityPosition;
     VAR_23 = VAR_26->contextSize;
     VAR_25 = VAR_26->namespaces;
     VAR_24 = VAR_26->nsNr;
     VAR_26->doc = VAR_6->initialContextDoc;
     VAR_26->node = VAR_6->initialContextNode;
     VAR_26->contextSize = 1;
     VAR_26->proximityPosition = 1;




     VAR_26->namespaces = ((void*)0);
     VAR_26->nsNr = 0;

     VAR_14 = FUNC_9(VAR_13, VAR_26);




     VAR_26->doc = VAR_20;
     VAR_26->node = VAR_21;
     VAR_26->contextSize = VAR_23;
     VAR_26->proximityPosition = VAR_22;
     VAR_26->namespaces = VAR_25;
     VAR_26->nsNr = VAR_24;

     FUNC_11(VAR_13);
 }
 if (VAR_14 == ((void*)0)) {
     FUNC_18(VAR_6, VAR_10, ((void*)0),
  "Evaluating user parameter %s failed\n", VAR_7);
     VAR_6->state = VAR_1;
     return(-1);
 }
    }
    VAR_15 = FUNC_15(((void*)0));
    if (VAR_15 != ((void*)0)) {
 VAR_15->name = VAR_7;
 VAR_15->select = FUNC_1(VAR_6->dict, VAR_8, -1);
 if (VAR_12 != ((void*)0))
     VAR_15->nameURI = FUNC_1(VAR_6->dict, VAR_12, -1);
 VAR_15->tree = ((void*)0);
 VAR_15->computed = 1;
 if (VAR_9 == 0) {
     VAR_15->value = FUNC_12(VAR_8);
 }
 else {
     VAR_15->value = VAR_14;
 }
    }





    VAR_16 = FUNC_3(VAR_6->globalVars, VAR_7, VAR_12, VAR_15);
    if (VAR_16 != 0) {
 FUNC_13(VAR_15);
 FUNC_18(VAR_6, VAR_10, ((void*)0),
     "Global parameter %s already defined\n", VAR_7);
    }
    return(0);
}
