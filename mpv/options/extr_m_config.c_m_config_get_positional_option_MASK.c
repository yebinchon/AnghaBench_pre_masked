
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_config_option {char const* name; int is_hidden; } ;
struct m_config {int num_opts; struct m_config_option* opts; } ;



const char *FUNC_0(const struct m_config *VAR_0, int VAR_1)
{
    int VAR_2 = 0;
    for (int VAR_3 = 0; VAR_3 < VAR_0->num_opts; VAR_3++) {
        struct m_config_option *VAR_4 = &VAR_0->opts[VAR_3];
        if (!VAR_4->is_hidden) {
            if (VAR_2 == VAR_1)
                return VAR_4->name;
            VAR_2++;
        }
    }
    return ((void*)0);
}
