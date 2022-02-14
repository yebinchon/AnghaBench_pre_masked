
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int top; int * stack; } ;
typedef TYPE_1__ exec_ctx_t ;
typedef int VARIANT ;
struct TYPE_6__ {int cNamedArgs; unsigned int cArgs; int * rgvarg; int * rgdispidNamedArgs; } ;
typedef TYPE_2__ DISPPARAMS ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(exec_ctx_t *VAR_1, unsigned VAR_2, BOOL VAR_3, DISPPARAMS *VAR_4)
{
    VAR_4->cNamedArgs = VAR_3 ? 1 : 0;
    VAR_4->cArgs = VAR_2 + VAR_4->cNamedArgs;
    VAR_4->rgdispidNamedArgs = VAR_3 ? &VAR_0 : ((void*)0);

    if(VAR_2) {
        VARIANT VAR_5;
        unsigned VAR_6;

        FUNC_0(VAR_1->top >= VAR_2);

        for(VAR_6=1; VAR_6*2 <= VAR_2; VAR_6++) {
            VAR_5 = VAR_1->stack[VAR_1->top-VAR_6];
            VAR_1->stack[VAR_1->top-VAR_6] = VAR_1->stack[VAR_1->top-VAR_2+VAR_6-1];
            VAR_1->stack[VAR_1->top-VAR_2+VAR_6-1] = VAR_5;
        }

        VAR_4->rgvarg = VAR_1->stack + VAR_1->top-VAR_4->cArgs;
    }else {
        VAR_4->rgvarg = VAR_3 ? VAR_1->stack+VAR_1->top-1 : ((void*)0);
    }
}
