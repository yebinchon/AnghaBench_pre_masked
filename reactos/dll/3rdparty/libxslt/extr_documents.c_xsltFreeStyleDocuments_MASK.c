
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef int * xsltNsMapPtr ;
typedef TYPE_2__* xsltDocumentPtr ;
struct TYPE_9__ {int doc; int main; struct TYPE_9__* next; } ;
struct TYPE_8__ {TYPE_2__* docList; } ;


 int * FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int ) ;

void
FUNC_6(xsltStylesheetPtr VAR_0) {
    xsltDocumentPtr VAR_1, VAR_2;




    if (VAR_0 == ((void*)0))
 return;
    VAR_2 = VAR_0->docList;
    while (VAR_2 != ((void*)0)) {
 VAR_1 = VAR_2;
 VAR_2 = VAR_2->next;







 FUNC_4(VAR_1);
 if (!VAR_1->main)
     FUNC_3(VAR_1->doc);
        FUNC_2(VAR_1);
    }
}
