
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpv_node {int dummy; } ;
struct m_config {TYPE_1__* profiles; } ;
struct TYPE_2__ {int num_opts; int * opts; int desc; int name; struct TYPE_2__* next; } ;
typedef TYPE_1__ m_profile_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct mpv_node* FUNC_0 (struct mpv_node*,int ) ;
 int FUNC_1 (struct mpv_node*,int ,int *) ;
 struct mpv_node* FUNC_2 (struct mpv_node*,char*,int ) ;
 int FUNC_3 (struct mpv_node*,char*,int ) ;

struct mpv_node FUNC_4(struct m_config *VAR_2)
{
    struct mpv_node VAR_3;
    FUNC_1(&VAR_3, VAR_0, ((void*)0));

    for (m_profile_t *VAR_4 = VAR_2->profiles; VAR_4; VAR_4 = VAR_4->next)
    {
        struct mpv_node *VAR_5 = FUNC_0(&VAR_3, VAR_1);

        FUNC_3(VAR_5, "name", VAR_4->name);
        if (VAR_4->desc)
            FUNC_3(VAR_5, "profile-desc", VAR_4->desc);

        struct mpv_node *VAR_6 =
            FUNC_2(VAR_5, "options", VAR_0);

        for (int VAR_7 = 0; VAR_7 < VAR_4->num_opts; VAR_7++) {
            struct mpv_node *VAR_8 = FUNC_0(VAR_6, VAR_1);
            FUNC_3(VAR_8, "key", VAR_4->opts[VAR_7 * 2 + 0]);
            FUNC_3(VAR_8, "value", VAR_4->opts[VAR_7 * 2 + 1]);
        }
    }

    return VAR_3;
}
