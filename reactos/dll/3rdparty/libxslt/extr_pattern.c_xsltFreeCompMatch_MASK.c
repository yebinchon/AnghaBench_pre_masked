
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xsltStepOpPtr ;
typedef TYPE_1__* xsltCompMatchPtr ;
typedef int xsltCompMatch ;
struct TYPE_7__ {int nbStep; struct TYPE_7__* steps; int * comp; struct TYPE_7__* value3; struct TYPE_7__* value2; struct TYPE_7__* value; struct TYPE_7__* nsList; int * pattern; } ;
typedef TYPE_1__ xmlChar ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(xsltCompMatchPtr VAR_0) {
    xsltStepOpPtr VAR_1;
    int VAR_2;

    if (VAR_0 == ((void*)0))
 return;
    if (VAR_0->pattern != ((void*)0))
 FUNC_1((xmlChar *)VAR_0->pattern);
    if (VAR_0->nsList != ((void*)0))
 FUNC_1(VAR_0->nsList);
    for (VAR_2 = 0;VAR_2 < VAR_0->nbStep;VAR_2++) {
 VAR_1 = &VAR_0->steps[VAR_2];
 if (VAR_1->value != ((void*)0))
     FUNC_1(VAR_1->value);
 if (VAR_1->value2 != ((void*)0))
     FUNC_1(VAR_1->value2);
 if (VAR_1->value3 != ((void*)0))
     FUNC_1(VAR_1->value3);
 if (VAR_1->comp != ((void*)0))
     FUNC_2(VAR_1->comp);
    }
    FUNC_1(VAR_0->steps);
    FUNC_0(VAR_0, -1, sizeof(xsltCompMatch));
    FUNC_1(VAR_0);
}
