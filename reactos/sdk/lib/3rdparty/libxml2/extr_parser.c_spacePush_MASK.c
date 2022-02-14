
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
struct TYPE_4__ {int spaceNr; int spaceMax; int* spaceTab; int* space; } ;


 int FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (int*,int) ;

__attribute__((used)) static int FUNC_2(xmlParserCtxtPtr VAR_0, int VAR_1) {
    if (VAR_0->spaceNr >= VAR_0->spaceMax) {
        int *VAR_2;

 VAR_0->spaceMax *= 2;
        VAR_2 = (int *) FUNC_1(VAR_0->spaceTab,
                          VAR_0->spaceMax * sizeof(VAR_0->spaceTab[0]));
        if (VAR_2 == ((void*)0)) {
     FUNC_0(VAR_0, ((void*)0));
     VAR_0->spaceMax /=2;
     return(-1);
 }
 VAR_0->spaceTab = VAR_2;
    }
    VAR_0->spaceTab[VAR_0->spaceNr] = VAR_1;
    VAR_0->space = &VAR_0->spaceTab[VAR_0->spaceNr];
    return(VAR_0->spaceNr++);
}
