
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xsltAttrElemPtr ;
typedef int * xmlNodePtr ;
struct TYPE_5__ {struct TYPE_5__* next; } ;


 TYPE_1__* FUNC_0 (int *) ;

__attribute__((used)) static xsltAttrElemPtr
FUNC_1(xsltAttrElemPtr VAR_0, xmlNodePtr VAR_1) {
    xsltAttrElemPtr VAR_2, VAR_3;

    if (VAR_1 == ((void*)0))
 return(VAR_0);
    if (VAR_0 == ((void*)0))
 return(FUNC_0(VAR_1));
    VAR_3 = VAR_0;
    while (VAR_3 != ((void*)0)) {
 VAR_2 = VAR_3->next;
 if (VAR_2 == ((void*)0)) {
     VAR_3->next = FUNC_0(VAR_1);
     return(VAR_0);
 }
 VAR_3 = VAR_2;
    }
    return(VAR_0);
}
