
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct m_group_data {scalar_t__ udata; scalar_t__ ts; } ;
struct m_config_shadow {int num_listeners; struct m_config_group* groups; int lock; struct m_config_cache** listeners; struct m_config_data* data; } ;
struct m_config_option {int group_index; TYPE_2__* opt; struct m_group_data* data; } ;
struct m_config_group {int parent_group; TYPE_1__* group; } ;
struct m_config_data {int ts; } ;
struct m_config_cache {int wakeup_cb_ctx; int (* wakeup_cb ) (int ) ;struct m_config_data* data; } ;
struct m_config {int option_change_callback_ctx; int (* option_change_callback ) (int ,struct m_config_option*,int) ;struct m_config_shadow* shadow; } ;
struct TYPE_4__ {int flags; scalar_t__ offset; } ;
struct TYPE_3__ {int change_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct m_group_data*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 struct m_group_data* FUNC_2 (struct m_config_data*,int) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,struct m_group_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct m_config_option*,int) ;

void FUNC_8(struct m_config *VAR_1,
                               struct m_config_option *VAR_2)
{
    struct m_config_shadow *VAR_3 = VAR_1->shadow;
    FUNC_0(VAR_2->data);

    if (VAR_3) {
        FUNC_4(&VAR_3->lock);

        struct m_config_data *VAR_4 = VAR_3->data;
        struct m_group_data *VAR_5 = FUNC_2(VAR_4, VAR_2->group_index);
        FUNC_0(VAR_5);

        VAR_5->ts = FUNC_1(&VAR_4->ts, 1) + 1;

        FUNC_3(VAR_2->opt, VAR_5->udata + VAR_2->opt->offset, VAR_2->data);

        for (int VAR_6 = 0; VAR_6 < VAR_3->num_listeners; VAR_6++) {
            struct m_config_cache *VAR_7 = VAR_3->listeners[VAR_6];
            if (VAR_7->wakeup_cb && FUNC_2(VAR_7->data, VAR_2->group_index))
                VAR_7->wakeup_cb(VAR_7->wakeup_cb_ctx);
        }

        FUNC_5(&VAR_3->lock);
    }

    int VAR_8 = VAR_2->opt->flags & VAR_0;
    int VAR_9 = VAR_2->group_index;
    while (VAR_9 >= 0) {
        struct m_config_group *VAR_10 = &VAR_3->groups[VAR_9];
        VAR_8 |= VAR_10->group->change_flags;
        VAR_9 = VAR_10->parent_group;
    }

    if (VAR_1->option_change_callback) {
        VAR_1->option_change_callback(VAR_1->option_change_callback_ctx, VAR_2,
                                       VAR_8);
    }
}
