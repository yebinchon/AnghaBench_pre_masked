
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_config_option {int dummy; } ;
struct m_config {struct m_config_option* opts; } ;



struct m_config_option *FUNC_0(struct m_config *VAR_0, int VAR_1)
{
    return &VAR_0->opts[VAR_1];
}
