
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_profile {scalar_t__ num_opts; int name; } ;
struct m_config {int dummy; } ;


 struct m_profile* FUNC_0 (struct m_config*,int *) ;
 int FUNC_1 (struct m_config*,int ,int) ;

void FUNC_2(struct m_config *VAR_0, int VAR_1)
{
    struct m_profile *VAR_2 = FUNC_0(VAR_0, ((void*)0));
    FUNC_1(VAR_0, VAR_2->name, VAR_1);
    VAR_2->num_opts = 0;
}
