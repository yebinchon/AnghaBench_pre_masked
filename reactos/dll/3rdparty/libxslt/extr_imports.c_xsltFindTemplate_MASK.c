
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef int * xsltTemplatePtr ;
typedef TYPE_2__* xsltStylesheetPtr ;
typedef int xmlChar ;
struct TYPE_7__ {int * namedTemplates; } ;
struct TYPE_6__ {TYPE_2__* style; } ;


 scalar_t__ FUNC_0 (int *,int const*,int const*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;

xsltTemplatePtr
FUNC_2(xsltTransformContextPtr VAR_0, const xmlChar *VAR_1,
          const xmlChar *VAR_2) {
    xsltTemplatePtr VAR_3;
    xsltStylesheetPtr VAR_4;

    if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)))
 return(((void*)0));
    VAR_4 = VAR_0->style;
    while (VAR_4 != ((void*)0)) {
        if (VAR_4->namedTemplates != ((void*)0)) {
            VAR_3 = (xsltTemplatePtr)
                FUNC_0(VAR_4->namedTemplates, VAR_1, VAR_2);
            if (VAR_3 != ((void*)0))
                return(VAR_3);
        }

 VAR_4 = FUNC_1(VAR_4);
    }
    return(((void*)0));
}
