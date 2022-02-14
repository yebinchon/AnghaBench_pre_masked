
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
typedef int xmlChar ;
struct TYPE_3__ {int nameNr; int ** nameTab; int * name; } ;



const xmlChar *
FUNC_0(xmlParserCtxtPtr VAR_0)
{
    const xmlChar *VAR_1;

    if ((VAR_0 == ((void*)0)) || (VAR_0->nameNr <= 0))
        return (((void*)0));
    VAR_0->nameNr--;
    if (VAR_0->nameNr > 0)
        VAR_0->name = VAR_0->nameTab[VAR_0->nameNr - 1];
    else
        VAR_0->name = ((void*)0);
    VAR_1 = VAR_0->nameTab[VAR_0->nameNr];
    VAR_0->nameTab[VAR_0->nameNr] = ((void*)0);
    return (VAR_1);
}
