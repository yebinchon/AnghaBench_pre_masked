
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_ctx {char* mouse_section; int num_active_sections; int mouse_vo_y; int mouse_vo_x; struct active_section* active_sections; int last_key_down; } ;
struct cmd_bind_section {int mouse_area; scalar_t__ mouse_area_set; } ;
struct cmd_bind {scalar_t__ is_builtin; struct cmd_bind_section* owner; } ;
struct active_section {char* name; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 struct cmd_bind* FUNC_2 (struct input_ctx*,char*,int) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static struct cmd_bind *FUNC_4(struct input_ctx *VAR_2,
                                              char *VAR_3, int VAR_4)
{
    if (VAR_3)
        return FUNC_2(VAR_2, VAR_3, VAR_4);

    bool VAR_5 = FUNC_0(VAR_4);



    if (VAR_5 && FUNC_1(VAR_2->last_key_down)) {
        struct cmd_bind *VAR_6 =
            FUNC_2(VAR_2, VAR_2->mouse_section, VAR_4);
        if (VAR_6)
            return VAR_6;
    }

    struct cmd_bind *VAR_7 = ((void*)0);
    for (int VAR_8 = VAR_2->num_active_sections - 1; VAR_8 >= 0; VAR_8--) {
        struct active_section *VAR_9 = &VAR_2->active_sections[VAR_8];
        struct cmd_bind *VAR_10 = FUNC_2(VAR_2, VAR_9->name, VAR_4);
        if (VAR_10) {
            struct cmd_bind_section *VAR_11 = VAR_10->owner;
            if (!VAR_5 || (VAR_11->mouse_area_set && FUNC_3(&VAR_11->mouse_area,
                                                               VAR_2->mouse_vo_x,
                                                               VAR_2->mouse_vo_y)))
            {
                if (!VAR_7 || (VAR_7->is_builtin && !VAR_10->is_builtin))
                    VAR_7 = VAR_10;
            }
        }
        if (VAR_9->flags & VAR_0)
            break;
        if (VAR_7 && (VAR_9->flags & VAR_1))
            break;
    }

    return VAR_7;
}
