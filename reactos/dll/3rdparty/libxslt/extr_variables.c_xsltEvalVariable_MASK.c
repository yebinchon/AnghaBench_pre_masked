
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_16__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef TYPE_3__* xsltStylePreCompPtr ;
typedef int xsltStyleItemVariablePtr ;
typedef TYPE_4__* xsltStackElemPtr ;
typedef TYPE_5__* xmlXPathObjectPtr ;
typedef TYPE_6__* xmlXPathContextPtr ;
typedef int * xmlXPathCompExprPtr ;
typedef int xmlNsPtr ;
typedef void* xmlNodePtr ;
typedef TYPE_7__* xmlDocPtr ;
struct TYPE_30__ {int psvi; } ;
struct TYPE_29__ {int proximityPosition; int contextSize; int nsNr; int * namespaces; TYPE_16__* node; TYPE_7__* doc; } ;
struct TYPE_28__ {scalar_t__ boolval; } ;
struct TYPE_27__ {int * tree; TYPE_7__* fragment; int name; int flags; int * select; } ;
struct TYPE_26__ {int nsNr; int * inst; int * comp; int * nsList; TYPE_1__* inScopeNs; } ;
struct TYPE_25__ {void* inst; TYPE_7__* output; void* insert; TYPE_4__* contextVariable; TYPE_16__* node; int state; TYPE_6__* xpathCtxt; } ;
struct TYPE_24__ {int xpathNumber; int * list; } ;
struct TYPE_23__ {scalar_t__ type; TYPE_7__* doc; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_1 (int *) ;
 TYPE_5__* FUNC_2 (int *,TYPE_6__*) ;
 int FUNC_3 (int *,TYPE_5__*,int ) ;
 int FUNC_4 (int *) ;
 TYPE_5__* FUNC_5 (char*) ;
 TYPE_5__* FUNC_6 (void*) ;
 int FUNC_7 (TYPE_2__*,TYPE_16__*,int *,int *,int *) ;
 TYPE_7__* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (scalar_t__,char*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (TYPE_2__*,int *,int *,char*,int ) ;

__attribute__((used)) static xmlXPathObjectPtr
FUNC_11(xsltTransformContextPtr VAR_8, xsltStackElemPtr VAR_9,
          xsltStylePreCompPtr VAR_10)
{




    xsltStylePreCompPtr VAR_11 = VAR_10;

    xmlXPathObjectPtr VAR_12 = ((void*)0);
    xmlNodePtr VAR_13;

    if ((VAR_8 == ((void*)0)) || (VAR_9 == ((void*)0)))
 return(((void*)0));






    VAR_13 = VAR_8->inst;





    if (VAR_9->select != ((void*)0)) {
 xmlXPathCompExprPtr VAR_14 = ((void*)0);
 xmlDocPtr VAR_15;
 xmlNodePtr VAR_16;
 int VAR_17, VAR_18, VAR_19;
 xmlNsPtr *VAR_20;
 xmlXPathContextPtr VAR_21 = VAR_8->xpathCtxt;
 xsltStackElemPtr VAR_22 = VAR_8->contextVariable;

 if ((VAR_11 != ((void*)0)) && (VAR_11->comp != ((void*)0))) {
     VAR_14 = VAR_11->comp;
 } else {
     VAR_14 = FUNC_1(VAR_9->select);
 }
 if (VAR_14 == ((void*)0))
     return(((void*)0));



 VAR_15 = VAR_21->doc;
 VAR_16 = VAR_21->node;
 VAR_17 = VAR_21->proximityPosition;
 VAR_18 = VAR_21->contextSize;
 VAR_20 = VAR_21->namespaces;
 VAR_19 = VAR_21->nsNr;

 VAR_21->node = VAR_8->node;




 if ((VAR_8->node->type != VAR_0) &&
     VAR_8->node->doc)
     VAR_21->doc = VAR_8->node->doc;
 if (VAR_11 != ((void*)0)) {
     VAR_21->namespaces = VAR_11->nsList;
     VAR_21->nsNr = VAR_11->nsNr;

 } else {
     VAR_21->namespaces = ((void*)0);
     VAR_21->nsNr = 0;
 }
 VAR_8->contextVariable = VAR_9;
 VAR_9->flags |= VAR_4;

 VAR_12 = FUNC_2(VAR_14, VAR_21);

 VAR_9->flags ^= VAR_4;



 VAR_8->contextVariable = VAR_22;

 VAR_21->doc = VAR_15;
 VAR_21->node = VAR_16;
 VAR_21->contextSize = VAR_18;
 VAR_21->proximityPosition = VAR_17;
 VAR_21->namespaces = VAR_20;
 VAR_21->nsNr = VAR_19;

 if ((VAR_11 == ((void*)0)) || (VAR_11->comp == ((void*)0)))
     FUNC_4(VAR_14);
 if (VAR_12 == ((void*)0)) {
     FUNC_10(VAR_8, ((void*)0),
  (VAR_11 != ((void*)0)) ? VAR_11->inst : ((void*)0),
  "Failed to evaluate the expression of variable '%s'.\n",
  VAR_9->name);
     VAR_8->state = VAR_2;
 }
    } else {
 if (VAR_9->tree == ((void*)0)) {
     VAR_12 = FUNC_5("");
 } else {
     if (VAR_9->tree) {
  xmlDocPtr VAR_23;
  xmlNodePtr VAR_24;
  xmlDocPtr VAR_25;
  xsltStackElemPtr VAR_26 = VAR_8->contextVariable;




  VAR_23 = FUNC_8(VAR_8);
  if (VAR_23 == ((void*)0))
      goto error;
  VAR_9->fragment = VAR_23;
                VAR_23->psvi = VAR_1;

  VAR_25 = VAR_8->output;
  VAR_24 = VAR_8->insert;

  VAR_8->output = VAR_23;
  VAR_8->insert = (xmlNodePtr) VAR_23;
  VAR_8->contextVariable = VAR_9;




  FUNC_7(VAR_8, VAR_8->node, VAR_9->tree,
      ((void*)0), ((void*)0));

  VAR_8->contextVariable = VAR_26;
  VAR_8->insert = VAR_24;
  VAR_8->output = VAR_25;

  VAR_12 = FUNC_6((xmlNodePtr) VAR_23);
     }
     if (VAR_12 == ((void*)0)) {
  VAR_12 = FUNC_5("");
     } else {




         VAR_12->boolval = 0;
     }
 }
    }

error:
    VAR_8->inst = VAR_13;
    return(VAR_12);
}
