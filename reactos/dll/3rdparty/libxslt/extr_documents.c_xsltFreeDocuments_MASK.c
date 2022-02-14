
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xsltDocumentPtr ;
struct TYPE_7__ {int doc; int main; struct TYPE_7__* next; } ;
struct TYPE_6__ {TYPE_2__* styleList; TYPE_2__* docList; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(xsltTransformContextPtr VAR_0) {
    xsltDocumentPtr VAR_1, VAR_2;

    VAR_2 = VAR_0->docList;
    while (VAR_2 != ((void*)0)) {
 VAR_1 = VAR_2;
 VAR_2 = VAR_2->next;
 FUNC_2(VAR_1);
 if (!VAR_1->main)
     FUNC_1(VAR_1->doc);
        FUNC_0(VAR_1);
    }
    VAR_2 = VAR_0->styleList;
    while (VAR_2 != ((void*)0)) {
 VAR_1 = VAR_2;
 VAR_2 = VAR_2->next;
 FUNC_2(VAR_1);
 if (!VAR_1->main)
     FUNC_1(VAR_1->doc);
        FUNC_0(VAR_1);
    }
}
