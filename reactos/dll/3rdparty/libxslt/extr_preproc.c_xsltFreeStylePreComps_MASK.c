
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef int xsltStylePreCompPtr ;
typedef TYPE_2__* xsltElemPreCompPtr ;
struct TYPE_6__ {scalar_t__ type; int (* free ) (TYPE_2__*) ;struct TYPE_6__* next; } ;
struct TYPE_5__ {TYPE_2__* preComps; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

void
FUNC_2(xsltStylesheetPtr VAR_1) {
    xsltElemPreCompPtr VAR_2, VAR_3;

    if (VAR_1 == ((void*)0))
 return;

    VAR_2 = VAR_1->preComps;
    while (VAR_2 != ((void*)0)) {
 VAR_3 = VAR_2->next;
 if (VAR_2->type == VAR_0)
     VAR_2->free(VAR_2);
 else
     FUNC_1((xsltStylePreCompPtr) VAR_2);
 VAR_2 = VAR_3;
    }
}
