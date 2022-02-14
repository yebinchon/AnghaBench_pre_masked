
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct d3dx_const_tab {unsigned int input_count; unsigned int* regset2table; TYPE_1__* inputs; } ;
struct TYPE_2__ {int RegisterCount; int RegisterIndex; size_t RegisterSet; } ;


 int FUNC_0 (unsigned int*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(unsigned int *VAR_0, struct d3dx_const_tab *VAR_1)
{
    unsigned int VAR_2, VAR_3, VAR_4;

    for (VAR_2 = 0; VAR_2 < VAR_1->input_count; ++VAR_2)
    {
        if (!VAR_1->inputs[VAR_2].RegisterCount)
            continue;
        VAR_4 = VAR_1->inputs[VAR_2].RegisterIndex + VAR_1->inputs[VAR_2].RegisterCount - 1;
        VAR_3 = VAR_1->regset2table[VAR_1->inputs[VAR_2].RegisterSet];
        FUNC_0(VAR_0, VAR_3, VAR_4);
    }
}
