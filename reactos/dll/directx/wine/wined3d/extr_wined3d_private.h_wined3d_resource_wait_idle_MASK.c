
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_resource {int access_count; TYPE_1__* device; } ;
struct wined3d_cs {scalar_t__ thread_id; int thread; } ;
struct TYPE_2__ {struct wined3d_cs* cs; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(struct wined3d_resource *VAR_0)
{
    const struct wined3d_cs *VAR_1 = VAR_0->device->cs;

    if (!VAR_1->thread || VAR_1->thread_id == FUNC_0())
        return;

    while (FUNC_1(&VAR_0->access_count, 0, 0))
        FUNC_2();
}
