
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_1__* xsltStepOpPtr ;
typedef int xsltStepOp ;
typedef TYPE_2__* xsltParserContextPtr ;
typedef scalar_t__ xsltOp ;
typedef TYPE_3__* xsltCompMatchPtr ;
typedef TYPE_4__* xmlXPathContextPtr ;
typedef int xmlChar ;
struct TYPE_17__ {int errors; int dict; int * doc; } ;
struct TYPE_16__ {int dict; int flags; } ;
struct TYPE_15__ {int nbStep; int maxStep; TYPE_1__* steps; } ;
struct TYPE_14__ {TYPE_5__* style; int elem; int * ctxt; } ;
struct TYPE_13__ {int * comp; void* lenExtra; void* indexExtra; void* previousExtra; int * value3; int * value2; int * value; scalar_t__ op; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int * FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_4__* FUNC_4 (int *) ;
 void* FUNC_5 (TYPE_5__*) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int ,char*) ;
 int VAR_2 ;
 int FUNC_8 (int *,TYPE_5__*,int ,char*) ;

__attribute__((used)) static int
FUNC_9(xsltParserContextPtr VAR_3, xsltCompMatchPtr VAR_4,
                 xsltOp VAR_5, xmlChar * VAR_6, xmlChar * VAR_7, int VAR_8)
{
    if (VAR_4->nbStep >= VAR_4->maxStep) {
        xsltStepOpPtr VAR_9;

 VAR_9 = (xsltStepOpPtr) FUNC_1(VAR_4->steps, VAR_4->maxStep * 2 *
                                  sizeof(xsltStepOp));
 if (VAR_9 == ((void*)0)) {
     FUNC_7(VAR_2,
      "xsltCompMatchAdd: memory re-allocation failure.\n");
     if (VAR_3->style != ((void*)0))
  VAR_3->style->errors++;
     if (VAR_6)
         FUNC_0(VAR_6);
     if (VAR_7)
         FUNC_0(VAR_7);
     return (-1);
 }
        VAR_4->maxStep *= 2;
 VAR_4->steps = VAR_9;
    }
    VAR_4->steps[VAR_4->nbStep].op = VAR_5;
    VAR_4->steps[VAR_4->nbStep].value = VAR_6;
    VAR_4->steps[VAR_4->nbStep].value2 = VAR_7;
    VAR_4->steps[VAR_4->nbStep].value3 = ((void*)0);
    VAR_4->steps[VAR_4->nbStep].comp = ((void*)0);
    if (VAR_3->ctxt != ((void*)0)) {
 VAR_4->steps[VAR_4->nbStep].previousExtra =
     FUNC_6(VAR_3->ctxt);
 VAR_4->steps[VAR_4->nbStep].indexExtra =
     FUNC_6(VAR_3->ctxt);
 VAR_4->steps[VAR_4->nbStep].lenExtra =
     FUNC_6(VAR_3->ctxt);
    } else {
 VAR_4->steps[VAR_4->nbStep].previousExtra =
     FUNC_5(VAR_3->style);
 VAR_4->steps[VAR_4->nbStep].indexExtra =
     FUNC_5(VAR_3->style);
 VAR_4->steps[VAR_4->nbStep].lenExtra =
     FUNC_5(VAR_3->style);
    }
    if (VAR_5 == VAR_1) {
 xmlXPathContextPtr VAR_10;

 if (VAR_3->style != ((void*)0))
     VAR_10 = FUNC_4(VAR_3->style->doc);
 else
     VAR_10 = FUNC_4(((void*)0));




 if (VAR_3->style != ((void*)0))
     VAR_10->dict = VAR_3->style->dict;
 VAR_4->steps[VAR_4->nbStep].comp = FUNC_2(VAR_10, VAR_6);
 FUNC_3(VAR_10);
 if (VAR_4->steps[VAR_4->nbStep].comp == ((void*)0)) {
     FUNC_8(((void*)0), VAR_3->style, VAR_3->elem,
      "Failed to compile predicate\n");
     if (VAR_3->style != ((void*)0))
  VAR_3->style->errors++;
 }
    }
    VAR_4->nbStep++;
    return (0);
}
