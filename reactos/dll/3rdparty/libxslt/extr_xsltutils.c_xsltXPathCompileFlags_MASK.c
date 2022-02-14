
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xmlXPathContextPtr ;
typedef int * xmlXPathCompExprPtr ;
typedef int xmlChar ;
struct TYPE_11__ {TYPE_2__* xpathCtxt; } ;
struct TYPE_10__ {int flags; int dict; int * doc; } ;
struct TYPE_9__ {int dict; int * doc; } ;


 TYPE_7__* FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_2__*,int const*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int *) ;

xmlXPathCompExprPtr
FUNC_4(xsltStylesheetPtr VAR_0, const xmlChar *VAR_1, int VAR_2) {
    xmlXPathContextPtr VAR_3;
    xmlXPathCompExprPtr VAR_4;

    if (VAR_0 != ((void*)0)) {
 VAR_3 = FUNC_3(VAR_0->doc);

 if (VAR_3 == ((void*)0))
     return ((void*)0);
 VAR_3->dict = VAR_0->dict;
    } else {
 VAR_3 = FUNC_3(((void*)0));
 if (VAR_3 == ((void*)0))
     return ((void*)0);
    }
    VAR_3->flags = VAR_2;




    VAR_4 = FUNC_1(VAR_3, VAR_1);






    FUNC_2(VAR_3);






    return(VAR_4);
}
