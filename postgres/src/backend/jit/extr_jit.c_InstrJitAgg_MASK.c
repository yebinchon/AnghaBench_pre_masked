
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int emission_counter; int optimization_counter; int inlining_counter; int generation_counter; scalar_t__ created_functions; } ;
typedef TYPE_1__ JitInstrumentation ;


 int FUNC_0 (int ,int ) ;

void
FUNC_1(JitInstrumentation *VAR_0, JitInstrumentation *VAR_1)
{
 VAR_0->created_functions += VAR_1->created_functions;
 FUNC_0(VAR_0->generation_counter, VAR_1->generation_counter);
 FUNC_0(VAR_0->inlining_counter, VAR_1->inlining_counter);
 FUNC_0(VAR_0->optimization_counter, VAR_1->optimization_counter);
 FUNC_0(VAR_0->emission_counter, VAR_1->emission_counter);
}
