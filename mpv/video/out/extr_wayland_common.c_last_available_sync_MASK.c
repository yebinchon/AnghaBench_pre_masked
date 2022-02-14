
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_wayland_state {int sync_size; TYPE_1__* sync; } ;
struct TYPE_2__ {int filled; } ;



int FUNC_0(struct vo_wayland_state *VAR_0)
{
    for (int VAR_1 = VAR_0->sync_size - 1; VAR_1 > -1; --VAR_1) {
        if (!VAR_0->sync[VAR_1].filled)
            return VAR_1;
    }
    return -1;
}
