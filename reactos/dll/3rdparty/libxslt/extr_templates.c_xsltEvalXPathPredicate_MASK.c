
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef int * xmlXPathObjectPtr ;
typedef int xmlXPathCompExprPtr ;
typedef int xmlNsPtr ;
typedef int * xmlNodePtr ;
struct TYPE_8__ {int contextSize; int proximityPosition; int nsNr; int * namespaces; int node; } ;
struct TYPE_7__ {TYPE_4__* xpathCtxt; int * inst; int state; int node; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_1 ;
 int * FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_1__*,int *,int *,char*) ;

int
FUNC_6(xsltTransformContextPtr VAR_3, xmlXPathCompExprPtr VAR_4,
         xmlNsPtr *VAR_5, int VAR_6) {
    int VAR_7;
    xmlXPathObjectPtr VAR_8;
    int VAR_9;
    xmlNsPtr *VAR_10;
    xmlNodePtr VAR_11;
    int VAR_12, VAR_13;

    if ((VAR_3 == ((void*)0)) || (VAR_3->inst == ((void*)0))) {
        FUNC_5(VAR_3, ((void*)0), ((void*)0),
            "xsltEvalXPathPredicate: No context or instruction\n");
        return(0);
    }

    VAR_13 = VAR_3->xpathCtxt->contextSize;
    VAR_12 = VAR_3->xpathCtxt->proximityPosition;
    VAR_9 = VAR_3->xpathCtxt->nsNr;
    VAR_10 = VAR_3->xpathCtxt->namespaces;
    VAR_11 = VAR_3->inst;

    VAR_3->xpathCtxt->node = VAR_3->node;
    VAR_3->xpathCtxt->namespaces = VAR_5;
    VAR_3->xpathCtxt->nsNr = VAR_6;

    VAR_8 = FUNC_1(VAR_4, VAR_3->xpathCtxt);

    if (VAR_8 != ((void*)0)) {
 VAR_7 = FUNC_2(VAR_3->xpathCtxt, VAR_8);
 FUNC_3(VAR_8);




    } else {




 VAR_3->state = VAR_0;
 VAR_7 = 0;
    }
    VAR_3->xpathCtxt->nsNr = VAR_9;

    VAR_3->xpathCtxt->namespaces = VAR_10;
    VAR_3->inst = VAR_11;
    VAR_3->xpathCtxt->contextSize = VAR_13;
    VAR_3->xpathCtxt->proximityPosition = VAR_12;

    return(VAR_7);
}
