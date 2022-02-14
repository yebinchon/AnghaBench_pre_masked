
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef TYPE_3__* xsltStylePreCompPtr ;
typedef TYPE_3__* xsltStyleBasicItemVariablePtr ;
typedef TYPE_5__* xsltStackElemPtr ;
typedef TYPE_6__* xmlXPathObjectPtr ;
typedef TYPE_7__* xmlXPathContextPtr ;
typedef int * xmlXPathCompExprPtr ;
typedef int xmlNsPtr ;
typedef void* xmlNodePtr ;
typedef int * xmlDocPtr ;
typedef int const xmlChar ;
struct TYPE_29__ {int proximityPosition; int contextSize; int nsNr; int * doc; int * namespaces; void* node; } ;
struct TYPE_28__ {scalar_t__ boolval; } ;
struct TYPE_27__ {int computed; TYPE_6__* value; int const* name; int * tree; int * select; TYPE_3__* comp; } ;
struct TYPE_26__ {int nsNr; int * inst; int * comp; int * nsList; TYPE_1__* inScopeNs; } ;
struct TYPE_25__ {scalar_t__ debugStatus; int * inst; int * output; void* insert; TYPE_7__* xpathCtxt; int node; int * initialContextDoc; int state; void* initialContextNode; } ;
struct TYPE_24__ {int xpathNumber; int * list; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_1 (int *) ;
 TYPE_6__* FUNC_2 (int *,TYPE_7__*) ;
 int FUNC_3 (int *,TYPE_6__*,int ) ;
 int FUNC_4 (int *) ;
 TYPE_6__* FUNC_5 (char*) ;
 TYPE_6__* FUNC_6 (void*) ;
 int FUNC_7 (int *,int *,int *,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ,int *,int *,int *) ;
 int const* VAR_6 ;
 int * FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_6__*,int ) ;
 int FUNC_11 (scalar_t__,char*,int const*) ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (TYPE_2__*,int *) ;
 int FUNC_13 (TYPE_2__*,int *,int *,char*,int const*) ;

__attribute__((used)) static xmlXPathObjectPtr
FUNC_14(xsltStackElemPtr VAR_8, xsltTransformContextPtr VAR_9)
{
    xmlXPathObjectPtr VAR_10 = ((void*)0);
    xmlNodePtr VAR_11;
    const xmlChar* VAR_12;




    xsltStylePreCompPtr VAR_13;


    if ((VAR_9 == ((void*)0)) || (VAR_8 == ((void*)0)))
 return(((void*)0));
    if (VAR_8->computed)
 return(VAR_8->value);
    VAR_11 = VAR_9->inst;



    VAR_13 = VAR_8->comp;

    VAR_12 = VAR_8->name;
    VAR_8->name = VAR_6;






    if (VAR_8->select != ((void*)0)) {
 xmlXPathCompExprPtr VAR_14 = ((void*)0);
 xmlDocPtr VAR_15;
 xmlNodePtr VAR_16;
 int VAR_17, VAR_18, VAR_19;
 xmlNsPtr *VAR_20;
 xmlXPathContextPtr VAR_21 = VAR_9->xpathCtxt;

 if ((VAR_13 != ((void*)0)) && (VAR_13->comp != ((void*)0))) {
     VAR_14 = VAR_13->comp;
 } else {
     VAR_14 = FUNC_1(VAR_8->select);
 }
 if (VAR_14 == ((void*)0))
     goto error;


 if (VAR_13 != ((void*)0))
     VAR_9->inst = VAR_13->inst;
 else
     VAR_9->inst = ((void*)0);
 VAR_15 = VAR_21->doc;
 VAR_16 = VAR_21->node;
 VAR_17 = VAR_21->proximityPosition;
 VAR_18 = VAR_21->contextSize;
 VAR_20 = VAR_21->namespaces;
 VAR_19 = VAR_21->nsNr;

 VAR_21->node = VAR_9->initialContextNode;
 VAR_21->doc = VAR_9->initialContextDoc;
 VAR_21->contextSize = 1;
 VAR_21->proximityPosition = 1;

 if (VAR_13 != ((void*)0)) {
     VAR_21->namespaces = VAR_13->nsList;
     VAR_21->nsNr = VAR_13->nsNr;

 } else {
     VAR_21->namespaces = ((void*)0);
     VAR_21->nsNr = 0;
 }

 VAR_10 = FUNC_2(VAR_14, VAR_21);




 VAR_21->doc = VAR_15;
 VAR_21->node = VAR_16;
 VAR_21->contextSize = VAR_18;
 VAR_21->proximityPosition = VAR_17;
 VAR_21->namespaces = VAR_20;
 VAR_21->nsNr = VAR_19;

 if ((VAR_13 == ((void*)0)) || (VAR_13->comp == ((void*)0)))
     FUNC_4(VAR_14);
 if (VAR_10 == ((void*)0)) {
     if (VAR_13 == ((void*)0))
  FUNC_13(VAR_9, ((void*)0), ((void*)0),
      "Evaluating global variable %s failed\n", VAR_8->name);
     else
  FUNC_13(VAR_9, ((void*)0), VAR_13->inst,
      "Evaluating global variable %s failed\n", VAR_8->name);
     VAR_9->state = VAR_2;
            goto error;
        }





        FUNC_10(VAR_9, VAR_10, VAR_1);
    } else {
 if (VAR_8->tree == ((void*)0)) {
     VAR_10 = FUNC_5("");
 } else {
     xmlDocPtr VAR_22;
     xmlNodePtr VAR_23;
     xmlDocPtr VAR_24, VAR_25;



     VAR_22 = FUNC_9(VAR_9);
     if (VAR_22 == ((void*)0))
  goto error;




     FUNC_12(VAR_9, VAR_22);

     VAR_24 = VAR_9->output;
     VAR_23 = VAR_9->insert;

     VAR_25 = VAR_9->xpathCtxt->doc;

     VAR_9->output = VAR_22;
     VAR_9->insert = (xmlNodePtr) VAR_22;

     VAR_9->xpathCtxt->doc = VAR_9->initialContextDoc;



     FUNC_8(VAR_9, VAR_9->node, VAR_8->tree, ((void*)0), ((void*)0));

     VAR_9->xpathCtxt->doc = VAR_25;

     VAR_9->insert = VAR_23;
     VAR_9->output = VAR_24;

     VAR_10 = FUNC_6((xmlNodePtr) VAR_22);
     if (VAR_10 == ((void*)0)) {
  VAR_10 = FUNC_5("");
     } else {
         VAR_10->boolval = 0;
     }
 }
    }

error:
    VAR_8->name = VAR_12;
    VAR_9->inst = VAR_11;
    if (VAR_10 != ((void*)0)) {
 VAR_8->value = VAR_10;
 VAR_8->computed = 1;
    }
    return(VAR_10);
}
