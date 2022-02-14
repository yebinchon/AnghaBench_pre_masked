
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_wayland_sync {int member_3; int member_2; int member_1; int member_0; } ;
struct vo_wayland_state {int sync_size; struct vo_wayland_sync* sync; } ;



void FUNC_0(struct vo_wayland_state *VAR_0)
{
    for (int VAR_1 = VAR_0->sync_size - 1; VAR_1 > 0; --VAR_1) {
        VAR_0->sync[VAR_1] = VAR_0->sync[VAR_1-1];
    }
    struct vo_wayland_sync VAR_2 = {0, 0, 0, 0};
    VAR_0->sync[0] = VAR_2;
}
