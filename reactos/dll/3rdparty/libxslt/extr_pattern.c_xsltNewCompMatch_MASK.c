
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int * xsltStepOpPtr ;
typedef int xsltStepOp ;
typedef TYPE_1__* xsltCompMatchPtr ;
typedef int xsltCompMatch ;
struct TYPE_5__ {int maxStep; scalar_t__ direct; int * nsList; scalar_t__ nsNr; int * steps; scalar_t__ nbStep; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int *,char*) ;

__attribute__((used)) static xsltCompMatchPtr
FUNC_4(void) {
    xsltCompMatchPtr VAR_0;

    VAR_0 = (xsltCompMatchPtr) FUNC_2(sizeof(xsltCompMatch));
    if (VAR_0 == ((void*)0)) {
 FUNC_3(((void*)0), ((void*)0), ((void*)0),
  "xsltNewCompMatch : out of memory error\n");
 return(((void*)0));
    }
    FUNC_0(VAR_0, 0, sizeof(xsltCompMatch));
    VAR_0->maxStep = 10;
    VAR_0->nbStep = 0;
    VAR_0-> steps = (xsltStepOpPtr) FUNC_2(sizeof(xsltStepOp) *
                                            VAR_0->maxStep);
    if (VAR_0->steps == ((void*)0)) {
 FUNC_3(((void*)0), ((void*)0), ((void*)0),
  "xsltNewCompMatch : out of memory error\n");
 FUNC_1(VAR_0);
 return(((void*)0));
    }
    VAR_0->nsNr = 0;
    VAR_0->nsList = ((void*)0);
    VAR_0->direct = 0;
    return(VAR_0);
}
