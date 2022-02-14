
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef TYPE_3__* xsltStylePreCompPtr ;
typedef int xsltStyleItemNumberPtr ;
typedef int xsltElemPreCompPtr ;
typedef TYPE_4__* xmlXPathContextPtr ;
typedef int xmlNsPtr ;
typedef TYPE_5__* xmlNodePtr ;
struct TYPE_19__ {TYPE_5__* node; int doc; } ;
struct TYPE_18__ {int doc; } ;
struct TYPE_17__ {int nsNr; int * namespaces; } ;
struct TYPE_16__ {int nsNr; TYPE_9__ numdata; int * nsList; TYPE_1__* inScopeNs; } ;
struct TYPE_15__ {TYPE_4__* xpathCtxt; } ;
struct TYPE_14__ {int xpathNumber; int * list; } ;


 int FUNC_0 (TYPE_2__*,TYPE_9__*,TYPE_5__*) ;
 int FUNC_1 (TYPE_2__*,int *,TYPE_5__*,char*) ;

void
FUNC_2(xsltTransformContextPtr VAR_0, xmlNodePtr VAR_1,
    xmlNodePtr VAR_2, xsltElemPreCompPtr VAR_3)
{



    xsltStylePreCompPtr VAR_4 = (xsltStylePreCompPtr) VAR_3;

    xmlXPathContextPtr VAR_5;
    xmlNsPtr *VAR_6;
    int VAR_7;

    if (VAR_4 == ((void*)0)) {
 FUNC_1(VAR_0, ((void*)0), VAR_2,
      "xsl:number : compilation failed\n");
 return;
    }

    if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)) || (VAR_4 == ((void*)0)))
 return;

    VAR_4->numdata.doc = VAR_2->doc;
    VAR_4->numdata.node = VAR_2;

    VAR_5 = VAR_0->xpathCtxt;
    VAR_7 = VAR_5->nsNr;
    VAR_6 = VAR_5->namespaces;
    VAR_5->namespaces = VAR_4->nsList;
    VAR_5->nsNr = VAR_4->nsNr;


    FUNC_0(VAR_0, &VAR_4->numdata, VAR_1);

    VAR_5->nsNr = VAR_7;
    VAR_5->namespaces = VAR_6;
}
