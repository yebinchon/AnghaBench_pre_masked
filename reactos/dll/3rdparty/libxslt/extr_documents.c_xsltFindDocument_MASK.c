
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef TYPE_3__* xsltDocumentPtr ;
typedef int * xmlDocPtr ;
struct TYPE_8__ {struct TYPE_8__* next; int * doc; } ;
struct TYPE_7__ {TYPE_3__* document; TYPE_1__* style; TYPE_3__* docList; } ;
struct TYPE_6__ {int * doc; } ;



xsltDocumentPtr
FUNC_0 (xsltTransformContextPtr VAR_0, xmlDocPtr VAR_1) {
    xsltDocumentPtr VAR_2;

    if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)))
 return(((void*)0));




    VAR_2 = VAR_0->docList;
    while (VAR_2 != ((void*)0)) {
 if (VAR_2->doc == VAR_1)
     return(VAR_2);
 VAR_2 = VAR_2->next;
    }
    if (VAR_1 == VAR_0->style->doc)
 return(VAR_0->document);
    return(((void*)0));
}
