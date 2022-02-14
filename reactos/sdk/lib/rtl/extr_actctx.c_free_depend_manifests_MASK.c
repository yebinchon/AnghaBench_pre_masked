
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct actctx_loader {unsigned int num_dependencies; int * dependencies; } ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct actctx_loader* VAR_0)
{
    unsigned int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->num_dependencies; VAR_1++)
        FUNC_2(&VAR_0->dependencies[VAR_1]);
    FUNC_0(FUNC_1(), 0, VAR_0->dependencies);
}
