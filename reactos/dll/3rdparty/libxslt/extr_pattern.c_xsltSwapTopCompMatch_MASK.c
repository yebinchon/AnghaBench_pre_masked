
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xsltOp ;
typedef TYPE_2__* xsltCompMatchPtr ;
typedef int xmlXPathCompExprPtr ;
typedef int xmlChar ;
struct TYPE_5__ {int nbStep; TYPE_1__* steps; } ;
struct TYPE_4__ {int previousExtra; int indexExtra; int lenExtra; int comp; int op; int * value3; int * value2; int * value; } ;



__attribute__((used)) static void
FUNC_0(xsltCompMatchPtr VAR_0) {
    int VAR_1;
    int VAR_2 = VAR_0->nbStep - 1;

    if (VAR_2 > 0) {
 register xmlChar *VAR_3;
 register xsltOp VAR_4;
 register xmlXPathCompExprPtr VAR_5;
 register int VAR_6;
 VAR_1 = VAR_2 - 1;
 VAR_3 = VAR_0->steps[VAR_1].value;
 VAR_0->steps[VAR_1].value = VAR_0->steps[VAR_2].value;
 VAR_0->steps[VAR_2].value = VAR_3;
 VAR_3 = VAR_0->steps[VAR_1].value2;
 VAR_0->steps[VAR_1].value2 = VAR_0->steps[VAR_2].value2;
 VAR_0->steps[VAR_2].value2 = VAR_3;
 VAR_3 = VAR_0->steps[VAR_1].value3;
 VAR_0->steps[VAR_1].value3 = VAR_0->steps[VAR_2].value3;
 VAR_0->steps[VAR_2].value3 = VAR_3;
 VAR_4 = VAR_0->steps[VAR_1].op;
 VAR_0->steps[VAR_1].op = VAR_0->steps[VAR_2].op;
 VAR_0->steps[VAR_2].op = VAR_4;
 VAR_5 = VAR_0->steps[VAR_1].comp;
 VAR_0->steps[VAR_1].comp = VAR_0->steps[VAR_2].comp;
 VAR_0->steps[VAR_2].comp = VAR_5;
 VAR_6 = VAR_0->steps[VAR_1].previousExtra;
 VAR_0->steps[VAR_1].previousExtra = VAR_0->steps[VAR_2].previousExtra;
 VAR_0->steps[VAR_2].previousExtra = VAR_6;
 VAR_6 = VAR_0->steps[VAR_1].indexExtra;
 VAR_0->steps[VAR_1].indexExtra = VAR_0->steps[VAR_2].indexExtra;
 VAR_0->steps[VAR_2].indexExtra = VAR_6;
 VAR_6 = VAR_0->steps[VAR_1].lenExtra;
 VAR_0->steps[VAR_1].lenExtra = VAR_0->steps[VAR_2].lenExtra;
 VAR_0->steps[VAR_2].lenExtra = VAR_6;
    }
}
