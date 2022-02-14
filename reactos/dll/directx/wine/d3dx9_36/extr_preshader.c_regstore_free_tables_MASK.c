
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_regstore {int * tables; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct d3dx_regstore *VAR_1)
{
    unsigned int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
    {
        FUNC_1(FUNC_0(), 0, VAR_1->tables[VAR_2]);
    }
}
