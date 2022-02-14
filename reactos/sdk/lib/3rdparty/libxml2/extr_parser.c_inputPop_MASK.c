
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * xmlParserInputPtr ;
typedef TYPE_1__* xmlParserCtxtPtr ;
struct TYPE_3__ {int inputNr; int ** inputTab; int * input; } ;



xmlParserInputPtr
FUNC_0(xmlParserCtxtPtr VAR_0)
{
    xmlParserInputPtr VAR_1;

    if (VAR_0 == ((void*)0))
        return(((void*)0));
    if (VAR_0->inputNr <= 0)
        return (((void*)0));
    VAR_0->inputNr--;
    if (VAR_0->inputNr > 0)
        VAR_0->input = VAR_0->inputTab[VAR_0->inputNr - 1];
    else
        VAR_0->input = ((void*)0);
    VAR_1 = VAR_0->inputTab[VAR_0->inputNr];
    VAR_0->inputTab[VAR_0->inputNr] = ((void*)0);
    return (VAR_1);
}
