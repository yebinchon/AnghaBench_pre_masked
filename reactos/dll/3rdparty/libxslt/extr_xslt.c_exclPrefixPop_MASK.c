
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef int xmlChar ;
struct TYPE_3__ {int exclPrefixNr; int ** exclPrefixTab; int * exclPrefix; } ;



__attribute__((used)) static xmlChar *
FUNC_0(xsltStylesheetPtr VAR_0)
{
    xmlChar *VAR_1;

    if (VAR_0->exclPrefixNr <= 0)
        return (0);
    VAR_0->exclPrefixNr--;
    if (VAR_0->exclPrefixNr > 0)
        VAR_0->exclPrefix = VAR_0->exclPrefixTab[VAR_0->exclPrefixNr - 1];
    else
        VAR_0->exclPrefix = ((void*)0);
    VAR_1 = VAR_0->exclPrefixTab[VAR_0->exclPrefixNr];
    VAR_0->exclPrefixTab[VAR_0->exclPrefixNr] = 0;
    return (VAR_1);
}
