
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ scope_chain; int code; } ;
typedef TYPE_1__ InterpretedFunction ;
typedef int FunctionInstance ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(FunctionInstance *VAR_0)
{
    InterpretedFunction *VAR_1 = (InterpretedFunction*)VAR_0;

    FUNC_0(VAR_1->code);
    if(VAR_1->scope_chain)
        FUNC_1(VAR_1->scope_chain);
}
