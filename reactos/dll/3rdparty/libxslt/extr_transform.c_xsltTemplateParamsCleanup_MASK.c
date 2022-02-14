
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xsltStackElemPtr ;
struct TYPE_6__ {scalar_t__ level; } ;
struct TYPE_5__ {int varsNr; int varsBase; TYPE_2__* vars; TYPE_2__** varsTab; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(xsltTransformContextPtr VAR_0)
{
    xsltStackElemPtr VAR_1;

    for (; VAR_0->varsNr > VAR_0->varsBase; VAR_0->varsNr--) {
 VAR_1 = VAR_0->varsTab[VAR_0->varsNr -1];




 if (VAR_1->level >= 0) {
     FUNC_0(VAR_1);
 }
    }
    if (VAR_0->varsNr > 0)
        VAR_0->vars = VAR_0->varsTab[VAR_0->varsNr - 1];
    else
        VAR_0->vars = ((void*)0);
}
