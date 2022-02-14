
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xmlXPathObjectPtr ;
typedef int xmlXPathCompExprPtr ;
typedef int xmlNsPtr ;
typedef void* xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_13__ {int proximityPosition; int contextSize; int nsNr; int * namespaces; void* node; } ;
struct TYPE_12__ {scalar_t__ type; int * stringval; } ;
struct TYPE_11__ {TYPE_9__* xpathCtxt; void* node; int * inst; int state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int ,TYPE_9__*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,char*,int *) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*,int *,int *,char*) ;

xmlChar *
FUNC_6(xsltTransformContextPtr VAR_4, xmlXPathCompExprPtr VAR_5,
               int VAR_6, xmlNsPtr *VAR_7) {
    xmlChar *VAR_8 = ((void*)0);
    xmlXPathObjectPtr VAR_9;
    xmlNodePtr VAR_10;
    xmlNodePtr VAR_11;
    int VAR_12, VAR_13;
    int VAR_14;
    xmlNsPtr *VAR_15;

    if ((VAR_4 == ((void*)0)) || (VAR_4->inst == ((void*)0))) {
        FUNC_5(VAR_4, ((void*)0), ((void*)0),
            "xsltEvalXPathStringNs: No context or instruction\n");
        return(0);
    }

    VAR_10 = VAR_4->inst;
    VAR_11 = VAR_4->node;
    VAR_12 = VAR_4->xpathCtxt->proximityPosition;
    VAR_13 = VAR_4->xpathCtxt->contextSize;
    VAR_14 = VAR_4->xpathCtxt->nsNr;
    VAR_15 = VAR_4->xpathCtxt->namespaces;

    VAR_4->xpathCtxt->node = VAR_4->node;

    VAR_4->xpathCtxt->namespaces = VAR_7;
    VAR_4->xpathCtxt->nsNr = VAR_6;
    VAR_9 = FUNC_1(VAR_5, VAR_4->xpathCtxt);
    if (VAR_9 != ((void*)0)) {
 if (VAR_9->type != VAR_0)
     VAR_9 = FUNC_2(VAR_9);
 if (VAR_9->type == VAR_0) {
            VAR_8 = VAR_9->stringval;
     VAR_9->stringval = ((void*)0);
 } else {
     FUNC_5(VAR_4, ((void*)0), ((void*)0),
   "xpath : string() function didn't return a String\n");
 }
 FUNC_3(VAR_9);
    } else {
 VAR_4->state = VAR_1;
    }




    VAR_4->inst = VAR_10;
    VAR_4->node = VAR_11;
    VAR_4->xpathCtxt->contextSize = VAR_13;
    VAR_4->xpathCtxt->proximityPosition = VAR_12;
    VAR_4->xpathCtxt->nsNr = VAR_14;
    VAR_4->xpathCtxt->namespaces = VAR_15;
    return(VAR_8);
}
