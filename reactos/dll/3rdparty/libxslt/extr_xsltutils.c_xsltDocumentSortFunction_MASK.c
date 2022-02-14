
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlNodeSetPtr ;
typedef int xmlNodePtr ;
struct TYPE_3__ {int nodeNr; int * nodeTab; } ;


 int FUNC_0 (int ,int ) ;

void
FUNC_1(xmlNodeSetPtr VAR_0) {
    int VAR_1, VAR_2;
    int VAR_3, VAR_4;
    xmlNodePtr VAR_5;

    if (VAR_0 == ((void*)0))
 return;
    VAR_3 = VAR_0->nodeNr;
    if (VAR_3 <= 1)
 return;

    for (VAR_1 = 0;VAR_1 < VAR_3 -1;VAR_1++) {
 for (VAR_2 = VAR_1 + 1; VAR_2 < VAR_3; VAR_2++) {
     VAR_4 = FUNC_0(VAR_0->nodeTab[VAR_1], VAR_0->nodeTab[VAR_2]);
     if (VAR_4 == -1) {
  VAR_5 = VAR_0->nodeTab[VAR_1];
  VAR_0->nodeTab[VAR_1] = VAR_0->nodeTab[VAR_2];
  VAR_0->nodeTab[VAR_2] = VAR_5;
     }
 }
    }
}
