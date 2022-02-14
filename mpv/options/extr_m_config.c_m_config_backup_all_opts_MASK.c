
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_config {int num_opts; int * opts; } ;


 int FUNC_0 (struct m_config*,int *) ;

void FUNC_1(struct m_config *VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < VAR_0->num_opts; VAR_1++)
        FUNC_0(VAR_0, &VAR_0->opts[VAR_1]);
}
