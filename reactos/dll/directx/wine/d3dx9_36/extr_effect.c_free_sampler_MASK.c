
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_sampler {size_t state_count; int * states; } ;
typedef size_t UINT ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct d3dx_sampler *VAR_0)
{
    UINT VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->state_count; ++VAR_1)
    {
        FUNC_2(&VAR_0->states[VAR_1]);
    }
    FUNC_1(FUNC_0(), 0, VAR_0->states);
}
