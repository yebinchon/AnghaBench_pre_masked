
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
typedef int * xmlNodePtr ;
struct TYPE_3__ {int nodeNr; int ** nodeTab; int * node; } ;



xmlNodePtr
FUNC_0(xmlParserCtxtPtr VAR_0)
{
    xmlNodePtr VAR_1;

    if (VAR_0 == ((void*)0)) return(((void*)0));
    if (VAR_0->nodeNr <= 0)
        return (((void*)0));
    VAR_0->nodeNr--;
    if (VAR_0->nodeNr > 0)
        VAR_0->node = VAR_0->nodeTab[VAR_0->nodeNr - 1];
    else
        VAR_0->node = ((void*)0);
    VAR_1 = VAR_0->nodeTab[VAR_0->nodeNr];
    VAR_0->nodeTab[VAR_0->nodeNr] = ((void*)0);
    return (VAR_1);
}
