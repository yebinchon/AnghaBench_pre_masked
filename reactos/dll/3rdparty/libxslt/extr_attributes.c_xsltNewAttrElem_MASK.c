
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xsltAttrElemPtr ;
typedef int xsltAttrElem ;
typedef int xmlNodePtr ;
struct TYPE_4__ {int attr; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static xsltAttrElemPtr
FUNC_3(xmlNodePtr VAR_1) {
    xsltAttrElemPtr VAR_2;

    VAR_2 = (xsltAttrElemPtr) FUNC_1(sizeof(xsltAttrElem));
    if (VAR_2 == ((void*)0)) {
        FUNC_2(VAR_0,
  "xsltNewAttrElem : malloc failed\n");
 return(((void*)0));
    }
    FUNC_0(VAR_2, 0, sizeof(xsltAttrElem));
    VAR_2->attr = VAR_1;
    return(VAR_2);
}
