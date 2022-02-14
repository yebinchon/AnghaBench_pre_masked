
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xsltDocumentPtr ;
typedef int xsltDocument ;
typedef int xmlNodePtr ;
typedef scalar_t__ xmlDocPtr ;
struct TYPE_8__ {struct TYPE_8__* next; scalar_t__ doc; } ;
struct TYPE_7__ {TYPE_2__* docList; } ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_1__*,int ,char*) ;

xsltDocumentPtr
FUNC_3(xsltStylesheetPtr VAR_0, xmlDocPtr VAR_1) {
    xsltDocumentPtr VAR_2;

    VAR_2 = (xsltDocumentPtr) FUNC_1(sizeof(xsltDocument));
    if (VAR_2 == ((void*)0)) {
 FUNC_2(((void*)0), VAR_0, (xmlNodePtr) VAR_1,
  "xsltNewStyleDocument : malloc failed\n");
 return(((void*)0));
    }
    FUNC_0(VAR_2, 0, sizeof(xsltDocument));
    VAR_2->doc = VAR_1;
    if (VAR_0 != ((void*)0)) {
 VAR_2->next = VAR_0->docList;
 VAR_0->docList = VAR_2;
    }
    return(VAR_2);
}
