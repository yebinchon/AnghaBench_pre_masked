
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xsltStackElemPtr ;
struct TYPE_6__ {int level; } ;
struct TYPE_5__ {int varsNr; TYPE_2__* vars; TYPE_2__** varsTab; } ;


 int FUNC_0 (TYPE_2__*) ;

void
FUNC_1(xsltTransformContextPtr VAR_0, int VAR_1, int VAR_2)
{
    xsltStackElemPtr VAR_3;

    if (VAR_0->varsNr <= 0)
        return;

    do {
 if (VAR_0->varsNr <= VAR_1)
     break;
 VAR_3 = VAR_0->varsTab[VAR_0->varsNr - 1];
 if (VAR_3->level <= VAR_2)
     break;
 if (VAR_3->level >= 0)
     FUNC_0(VAR_3);
 VAR_0->varsNr--;
    } while (VAR_0->varsNr != 0);
    if (VAR_0->varsNr > 0)
        VAR_0->vars = VAR_0->varsTab[VAR_0->varsNr - 1];
    else
        VAR_0->vars = ((void*)0);
}
