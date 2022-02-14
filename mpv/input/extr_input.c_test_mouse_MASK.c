
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_ctx {int num_active_sections; struct active_section* active_sections; } ;
struct cmd_bind_section {int mouse_area; scalar_t__ mouse_area_set; } ;
struct active_section {int flags; int name; } ;


 int FUNC_0 (int ) ;
 struct cmd_bind_section* FUNC_1 (struct input_ctx*,int ) ;
 int FUNC_2 (struct input_ctx*) ;
 int FUNC_3 (struct input_ctx*) ;
 scalar_t__ FUNC_4 (int *,int,int) ;

__attribute__((used)) static bool FUNC_5(struct input_ctx *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    FUNC_2(VAR_0);
    bool VAR_4 = 0;
    for (int VAR_5 = 0; VAR_5 < VAR_0->num_active_sections; VAR_5++) {
        struct active_section *VAR_6 = &VAR_0->active_sections[VAR_5];
        if (VAR_6->flags & VAR_3)
            continue;
        struct cmd_bind_section *VAR_7 = FUNC_1(VAR_0, FUNC_0(VAR_6->name));
        if (VAR_7->mouse_area_set && FUNC_4(&VAR_7->mouse_area, VAR_1, VAR_2)) {
            VAR_4 = 1;
            break;
        }
    }
    FUNC_3(VAR_0);
    return VAR_4;
}
