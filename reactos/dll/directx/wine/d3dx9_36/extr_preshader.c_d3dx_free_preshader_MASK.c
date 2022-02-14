
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_preshader {int inputs; int regs; int ins; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct d3dx_preshader *VAR_0)
{
    FUNC_1(FUNC_0(), 0, VAR_0->ins);

    FUNC_3(&VAR_0->regs);
    FUNC_2(&VAR_0->inputs);
}
