
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_config_option {int is_set_from_cmdline; int is_set_from_config; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct m_config_option *VAR_2, int VAR_3)
{
    if (VAR_3 & VAR_0)
        VAR_2->is_set_from_cmdline = 1;

    if (VAR_3 & VAR_1)
        VAR_2->is_set_from_config = 1;
}
