
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* parent; struct TYPE_4__* imports; } ;



xsltStylesheetPtr
FUNC_0(xsltStylesheetPtr VAR_0) {
    if (VAR_0 == ((void*)0))
 return(((void*)0));
    if (VAR_0->imports != ((void*)0))
 return(VAR_0->imports);
    if (VAR_0->next != ((void*)0))
 return(VAR_0->next) ;
    do {
 VAR_0 = VAR_0->parent;
 if (VAR_0 == ((void*)0)) break;
 if (VAR_0->next != ((void*)0)) return(VAR_0->next);
    } while (VAR_0 != ((void*)0));
    return(VAR_0);
}
