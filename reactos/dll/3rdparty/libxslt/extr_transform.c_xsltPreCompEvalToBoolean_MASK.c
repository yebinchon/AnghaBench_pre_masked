
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef TYPE_3__* xsltStylePreCompPtr ;
typedef TYPE_4__* xmlXPathContextPtr ;
typedef int xmlNsPtr ;
typedef void* xmlNodePtr ;
struct TYPE_11__ {int proximityPosition; int contextSize; int nsNr; int * namespaces; void* node; } ;
struct TYPE_10__ {int nsNr; int comp; int * nsList; TYPE_1__* inScopeNs; } ;
struct TYPE_9__ {TYPE_4__* xpathCtxt; } ;
struct TYPE_8__ {int xpathNumber; int * list; } ;


 int FUNC_0 (int ,TYPE_4__*) ;

__attribute__((used)) static int
FUNC_1(xsltTransformContextPtr VAR_0, xmlNodePtr VAR_1,
                         xsltStylePreCompPtr VAR_2) {
    int VAR_3;
    xmlXPathContextPtr VAR_4;
    xmlNodePtr VAR_5;
    xmlNsPtr *VAR_6;
    int VAR_7, VAR_8, VAR_9;

    VAR_4 = VAR_0->xpathCtxt;
    VAR_5 = VAR_4->node;
    VAR_7 = VAR_4->proximityPosition;
    VAR_8 = VAR_4->contextSize;
    VAR_9 = VAR_4->nsNr;
    VAR_6 = VAR_4->namespaces;

    VAR_4->node = VAR_1;
    VAR_4->namespaces = VAR_2->nsList;
    VAR_4->nsNr = VAR_2->nsNr;


    VAR_3 = FUNC_0(VAR_2->comp, VAR_4);

    VAR_4->node = VAR_5;
    VAR_4->proximityPosition = VAR_7;
    VAR_4->contextSize = VAR_8;
    VAR_4->nsNr = VAR_9;
    VAR_4->namespaces = VAR_6;

    return(VAR_3);
}
