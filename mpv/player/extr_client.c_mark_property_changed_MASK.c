
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct observe_property {int changed; int async_change_ts; } ;
struct mpv_handle {int lowest_changed; struct observe_property** properties; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct mpv_handle *VAR_0, int VAR_1)
{
    struct observe_property *VAR_2 = VAR_0->properties[VAR_1];
    VAR_2->changed = 1;
    VAR_2->async_change_ts += 1;
    VAR_0->lowest_changed = FUNC_0(VAR_0->lowest_changed, VAR_1);
}
