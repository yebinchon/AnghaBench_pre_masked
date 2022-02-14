
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct m_option {scalar_t__ offset; TYPE_3__* type; scalar_t__ name; } ;
struct m_group_data {scalar_t__ ts; scalar_t__ udata; } ;
struct m_config_group {TYPE_2__* group; } ;
struct m_config_data {TYPE_1__* shadow; scalar_t__ num_gdata; scalar_t__ group_index; int ts; } ;
struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_5__ {struct m_option* opts; } ;
struct TYPE_4__ {int num_groups; struct m_config_group* groups; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int) ;
 struct m_group_data* FUNC_3 (struct m_config_data*,int) ;
 int FUNC_4 (struct m_option const*,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_5(struct m_config_data *VAR_0, struct m_config_data *VAR_1)
{
    FUNC_2(VAR_0->shadow == VAR_1->shadow);

    bool VAR_2 = 0;
    VAR_0->ts = VAR_1->ts;


    int VAR_3 = FUNC_0(VAR_0->group_index, VAR_1->group_index);
    int VAR_4 = FUNC_1(VAR_0->group_index + VAR_0->num_gdata,
                        VAR_1->group_index + VAR_1->num_gdata);
    FUNC_2(VAR_3 >= 0 && VAR_4 <= VAR_0->shadow->num_groups);
    for (int VAR_5 = VAR_3; VAR_5 < VAR_4; VAR_5++) {
        struct m_config_group *VAR_6 = &VAR_0->shadow->groups[VAR_5];
        const struct m_option *VAR_7 = VAR_6->group->opts;
        struct m_group_data *VAR_8 = FUNC_3(VAR_1, VAR_5);
        struct m_group_data *VAR_9 = FUNC_3(VAR_0, VAR_5);
        FUNC_2(VAR_8 && VAR_9);

        if (VAR_9->ts >= VAR_8->ts)
            continue;
        VAR_9->ts = VAR_8->ts;
        VAR_2 = 1;

        for (int VAR_10 = 0; VAR_7 && VAR_7[VAR_10].name; VAR_10++) {
            const struct m_option *VAR_11 = &VAR_7[VAR_10];

            if (VAR_11->offset >= 0 && VAR_11->type->size) {
                FUNC_4(VAR_11, VAR_9->udata + VAR_11->offset,
                                   VAR_8->udata + VAR_11->offset);
            }
        }
    }

    return VAR_2;
}
