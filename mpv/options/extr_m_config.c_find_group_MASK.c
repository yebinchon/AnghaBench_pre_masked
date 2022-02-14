
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpv_global {struct m_config_shadow* config; } ;
struct m_option {int dummy; } ;
struct m_config_shadow {int num_groups; struct m_config_group const* groups; } ;
struct m_config_group {TYPE_1__* group; } ;
struct TYPE_2__ {struct m_option const* opts; } ;



__attribute__((used)) static const struct m_config_group *FUNC_0(struct mpv_global *VAR_0,
                                               const struct m_option *VAR_1)
{
    struct m_config_shadow *VAR_2 = VAR_0->config;

    for (int VAR_3 = 0; VAR_3 < VAR_2->num_groups; VAR_3++) {
        if (VAR_2->groups[VAR_3].group->opts == VAR_1)
            return &VAR_2->groups[VAR_3];
    }

    return ((void*)0);
}
