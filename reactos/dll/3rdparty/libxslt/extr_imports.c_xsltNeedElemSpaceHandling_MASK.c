
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xsltStylesheetPtr ;
struct TYPE_7__ {int * stripSpaces; } ;
struct TYPE_6__ {TYPE_2__* style; } ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;

int
FUNC_1(xsltTransformContextPtr VAR_0) {
    xsltStylesheetPtr VAR_1;

    if (VAR_0 == ((void*)0))
 return(0);
    VAR_1 = VAR_0->style;
    while (VAR_1 != ((void*)0)) {
 if (VAR_1->stripSpaces != ((void*)0))
     return(1);
 VAR_1 = FUNC_0(VAR_1);
    }
    return(0);
}
