
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * xsltTransformContextPtr ;
typedef TYPE_1__* xsltCompMatchPtr ;
typedef int * xmlNodePtr ;
struct TYPE_4__ {struct TYPE_4__* next; } ;


 int FUNC_0 (int *,TYPE_1__*,int *,int *,int *) ;

int
FUNC_1(xsltTransformContextPtr VAR_0, xmlNodePtr VAR_1,
               xsltCompMatchPtr VAR_2) {
    int VAR_3;

    if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)))
 return(-1);
    while (VAR_2 != ((void*)0)) {
 VAR_3 = FUNC_0(VAR_0, VAR_2, VAR_1, ((void*)0), ((void*)0));
 if (VAR_3 == 1)
     return(1);
 VAR_2 = VAR_2->next;
    }
    return(0);
}
