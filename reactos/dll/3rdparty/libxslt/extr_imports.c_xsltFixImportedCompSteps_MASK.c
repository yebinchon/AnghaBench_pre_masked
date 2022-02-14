
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* imports; scalar_t__ extrasNr; int templatesHash; } ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(xsltStylesheetPtr VAR_1,
   xsltStylesheetPtr VAR_2) {
    xsltStylesheetPtr VAR_3;
    FUNC_0(VAR_2->templatesHash, VAR_0, VAR_1);
    VAR_1->extrasNr += VAR_2->extrasNr;
    for (VAR_3 = VAR_2->imports; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
        FUNC_1(VAR_1, VAR_3);
    }
}
