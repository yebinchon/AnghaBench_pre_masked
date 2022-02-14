
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct m_option {scalar_t__ offset; TYPE_3__* type; scalar_t__ name; } ;
struct m_group_data {scalar_t__ udata; } ;
struct m_config_group {TYPE_2__* group; } ;
struct m_config_data {int num_gdata; int group_index; TYPE_1__* shadow; struct m_group_data* gdata; } ;
struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_5__ {struct m_option* opts; } ;
struct TYPE_4__ {struct m_config_group* groups; } ;


 int FUNC_0 (struct m_option const*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
    struct m_config_data *VAR_1 = VAR_0;

    for (int VAR_2 = 0; VAR_2 < VAR_1->num_gdata; VAR_2++) {
        struct m_group_data *VAR_3 = &VAR_1->gdata[VAR_2];
        struct m_config_group *VAR_4 =
            &VAR_1->shadow->groups[VAR_1->group_index + VAR_2];
        const struct m_option *VAR_5 = VAR_4->group->opts;

        for (int VAR_6 = 0; VAR_5 && VAR_5[VAR_6].name; VAR_6++) {
            const struct m_option *VAR_7 = &VAR_5[VAR_6];

            if (VAR_7->offset >= 0 && VAR_7->type->size > 0)
                FUNC_0(VAR_7, VAR_3->udata + VAR_7->offset);
        }
    }
}
