
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xsltStackElemPtr ;
typedef int xsltStackElem ;
struct TYPE_5__ {int comp; int tree; int select; int nameURI; int name; int context; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int *,char*) ;

__attribute__((used)) static xsltStackElemPtr
FUNC_3(xsltStackElemPtr VAR_0) {
    xsltStackElemPtr VAR_1;

    VAR_1 = (xsltStackElemPtr) FUNC_1(sizeof(xsltStackElem));
    if (VAR_1 == ((void*)0)) {
 FUNC_2(((void*)0), ((void*)0), ((void*)0),
  "xsltCopyStackElem : malloc failed\n");
 return(((void*)0));
    }
    FUNC_0(VAR_1, 0, sizeof(xsltStackElem));
    VAR_1->context = VAR_0->context;
    VAR_1->name = VAR_0->name;
    VAR_1->nameURI = VAR_0->nameURI;
    VAR_1->select = VAR_0->select;
    VAR_1->tree = VAR_0->tree;
    VAR_1->comp = VAR_0->comp;
    return(VAR_1);
}
