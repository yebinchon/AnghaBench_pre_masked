
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_group_data {int dummy; } ;
struct m_config_data {int group_index; int num_gdata; struct m_group_data* gdata; } ;



__attribute__((used)) static struct m_group_data *FUNC_0(struct m_config_data *VAR_0,
                                           int VAR_1)
{
    if (VAR_1 < VAR_0->group_index ||
        VAR_1 >= VAR_0->group_index + VAR_0->num_gdata)
        return ((void*)0);

    return &VAR_0->gdata[VAR_1 - VAR_0->group_index];
}
