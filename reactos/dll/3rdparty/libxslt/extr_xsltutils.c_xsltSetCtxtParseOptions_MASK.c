
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
struct TYPE_3__ {int parserOptions; int xinclude; } ;


 int VAR_0 ;

int
FUNC_0(xsltTransformContextPtr VAR_1, int VAR_2)
{
    int VAR_3;

    if (VAR_1 == ((void*)0))
        return(-1);
    VAR_3 = VAR_1->parserOptions;
    if (VAR_1->xinclude)
        VAR_3 |= VAR_0;
    VAR_1->parserOptions = VAR_2;
    if (VAR_2 & VAR_0)
        VAR_1->xinclude = 1;
    else
        VAR_1->xinclude = 0;
    return(VAR_3);
}
