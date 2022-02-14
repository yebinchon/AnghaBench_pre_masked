
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
typedef struct TYPE_17__ TYPE_15__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef TYPE_3__* xsltStylePreCompPtr ;
typedef int xsltStyleItemSortPtr ;
typedef scalar_t__ xsltLocale ;
typedef TYPE_4__* xmlXPathObjectPtr ;
typedef int xmlNsPtr ;
typedef TYPE_5__* xmlNodeSetPtr ;
typedef TYPE_6__* xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_23__ {TYPE_3__* psvi; } ;
struct TYPE_22__ {int nodeNr; TYPE_6__** nodeTab; } ;
struct TYPE_21__ {scalar_t__ type; int index; int * stringval; } ;
struct TYPE_20__ {int nsNr; scalar_t__ locale; scalar_t__ number; int * comp; int * nsList; TYPE_1__* inScopeNs; int * select; } ;
struct TYPE_19__ {TYPE_15__* xpathCtxt; TYPE_6__* inst; TYPE_6__* node; int state; TYPE_5__* nodeList; } ;
struct TYPE_18__ {int xpathNumber; int * list; } ;
struct TYPE_17__ {int proximityPosition; int contextSize; int nsNr; int * namespaces; TYPE_6__* node; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_4__** FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (int *,TYPE_15__*) ;
 TYPE_4__* FUNC_3 (TYPE_4__*) ;
 TYPE_4__* FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,char*) ;
 int VAR_3 ;
 int FUNC_6 (int ,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (scalar_t__,int *) ;

xmlXPathObjectPtr *
FUNC_8(xsltTransformContextPtr VAR_5, xmlNodePtr VAR_6) {



    xsltStylePreCompPtr VAR_7;

    xmlXPathObjectPtr *VAR_8 = ((void*)0);
    xmlNodeSetPtr VAR_9 = ((void*)0);
    xmlXPathObjectPtr VAR_10;
    int VAR_11 = 0;
    int VAR_12;
    xmlNodePtr VAR_13;
    xmlNodePtr VAR_14;
    int VAR_15, VAR_16 ;
    int VAR_17;
    xmlNsPtr *VAR_18;

    VAR_7 = VAR_6->psvi;
    if (VAR_7 == ((void*)0)) {
 FUNC_6(VAR_4,
      "xsl:sort : compilation failed\n");
 return(((void*)0));
    }

    if ((VAR_7->select == ((void*)0)) || (VAR_7->comp == ((void*)0)))
 return(((void*)0));

    VAR_9 = VAR_5->nodeList;
    if ((VAR_9 == ((void*)0)) || (VAR_9->nodeNr <= 1))
 return(((void*)0));

    VAR_11 = VAR_9->nodeNr;





    VAR_8 = FUNC_1(VAR_11 * sizeof(xmlXPathObjectPtr));
    if (VAR_8 == ((void*)0)) {
 FUNC_6(VAR_4,
      "xsltComputeSortResult: memory allocation failure\n");
 return(((void*)0));
    }

    VAR_13 = VAR_5->node;
    VAR_14 = VAR_5->inst;
    VAR_15 = VAR_5->xpathCtxt->proximityPosition;
    VAR_16 = VAR_5->xpathCtxt->contextSize;
    VAR_17 = VAR_5->xpathCtxt->nsNr;
    VAR_18 = VAR_5->xpathCtxt->namespaces;
    for (VAR_12 = 0;VAR_12 < VAR_11;VAR_12++) {
 VAR_5->inst = VAR_6;
 VAR_5->xpathCtxt->contextSize = VAR_11;
 VAR_5->xpathCtxt->proximityPosition = VAR_12 + 1;
 VAR_5->node = VAR_9->nodeTab[VAR_12];
 VAR_5->xpathCtxt->node = VAR_5->node;
 VAR_5->xpathCtxt->namespaces = VAR_7->nsList;
 VAR_5->xpathCtxt->nsNr = VAR_7->nsNr;

 VAR_10 = FUNC_2(VAR_7->comp, VAR_5->xpathCtxt);
 if (VAR_10 != ((void*)0)) {
     if (VAR_10->type != VAR_1)
  VAR_10 = FUNC_4(VAR_10);
     if (VAR_7->number)
  VAR_10 = FUNC_3(VAR_10);
     VAR_10->index = VAR_12;
     if (VAR_7->number) {
  if (VAR_10->type == VAR_0) {
      VAR_8[VAR_12] = VAR_10;
  } else {




      VAR_8[VAR_12] = ((void*)0);
  }
     } else {
  if (VAR_10->type == VAR_1) {
      if (VAR_7->locale != (xsltLocale)0) {
   xmlChar *VAR_19 = VAR_10->stringval;
   VAR_10->stringval = (xmlChar *) FUNC_7(VAR_7->locale, VAR_19);
   FUNC_0(VAR_19);
      }

      VAR_8[VAR_12] = VAR_10;
  } else {




      VAR_8[VAR_12] = ((void*)0);
  }
     }
 } else {
     VAR_5->state = VAR_2;
     VAR_8[VAR_12] = ((void*)0);
 }
    }
    VAR_5->node = VAR_13;
    VAR_5->inst = VAR_14;
    VAR_5->xpathCtxt->contextSize = VAR_16;
    VAR_5->xpathCtxt->proximityPosition = VAR_15;
    VAR_5->xpathCtxt->nsNr = VAR_17;
    VAR_5->xpathCtxt->namespaces = VAR_18;

    return(VAR_8);
}
