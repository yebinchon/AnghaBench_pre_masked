
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct d3dx_const_tab {unsigned int input_count; unsigned int* regset2table; TYPE_2__* inputs; TYPE_1__** inputs_param; } ;
struct TYPE_4__ {size_t RegisterSet; int RegisterCount; int RegisterIndex; } ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 (char*,char*,int ,int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_1(struct d3dx_const_tab *VAR_1)
{
    unsigned int VAR_2, VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1->input_count; ++VAR_3)
    {
        VAR_2 = VAR_1->regset2table[VAR_1->inputs[VAR_3].RegisterSet];
        FUNC_0("//   %-12s %s%-4u %u\n", VAR_1->inputs_param[VAR_3] ? VAR_1->inputs_param[VAR_3]->name : "(nil)",
                VAR_0[VAR_2], VAR_1->inputs[VAR_3].RegisterIndex, VAR_1->inputs[VAR_3].RegisterCount);
    }
}
