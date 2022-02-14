
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
struct TYPE_3__ {int spaceNr; int* space; int* spaceTab; } ;



__attribute__((used)) static int FUNC_0(xmlParserCtxtPtr VAR_0) {
    int VAR_1;
    if (VAR_0->spaceNr <= 0) return(0);
    VAR_0->spaceNr--;
    if (VAR_0->spaceNr > 0)
 VAR_0->space = &VAR_0->spaceTab[VAR_0->spaceNr - 1];
    else
        VAR_0->space = &VAR_0->spaceTab[0];
    VAR_1 = VAR_0->spaceTab[VAR_0->spaceNr];
    VAR_0->spaceTab[VAR_0->spaceNr] = -1;
    return(VAR_1);
}
