
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xsltAttrVTPtr ;
struct TYPE_3__ {struct TYPE_3__* next; } ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(void *VAR_0) {
    xsltAttrVTPtr VAR_1 = (xsltAttrVTPtr) VAR_0, VAR_2;

    while (VAR_1 != ((void*)0)) {
        VAR_2 = VAR_1->next;
 FUNC_0(VAR_1);
 VAR_1 = VAR_2;
    }
}
