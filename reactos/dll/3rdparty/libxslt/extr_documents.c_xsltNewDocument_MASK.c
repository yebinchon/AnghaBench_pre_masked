
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xsltDocumentPtr ;
typedef int xsltDocument ;
typedef int xmlNodePtr ;
typedef scalar_t__ xmlDocPtr ;
struct TYPE_8__ {struct TYPE_8__* next; scalar_t__ doc; } ;
struct TYPE_7__ {TYPE_2__* docList; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int *,int ,char*) ;

xsltDocumentPtr
FUNC_4(xsltTransformContextPtr VAR_0, xmlDocPtr VAR_1) {
    xsltDocumentPtr VAR_2;

    VAR_2 = (xsltDocumentPtr) FUNC_2(sizeof(xsltDocument));
    if (VAR_2 == ((void*)0)) {
 FUNC_3(VAR_0, ((void*)0), (xmlNodePtr) VAR_1,
  "xsltNewDocument : malloc failed\n");
 return(((void*)0));
    }
    FUNC_1(VAR_2, 0, sizeof(xsltDocument));
    VAR_2->doc = VAR_1;
    if (VAR_0 != ((void*)0)) {
        if (! FUNC_0(VAR_1)) {
     VAR_2->next = VAR_0->docList;
     VAR_0->docList = VAR_2;
 }
    }
    return(VAR_2);
}
