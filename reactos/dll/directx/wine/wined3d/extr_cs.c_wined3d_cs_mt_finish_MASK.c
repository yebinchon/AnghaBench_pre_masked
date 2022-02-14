
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_cs {scalar_t__ thread_id; TYPE_1__* queue; } ;
typedef enum wined3d_cs_queue_id { ____Placeholder_wined3d_cs_queue_id } wined3d_cs_queue_id ;
struct TYPE_2__ {scalar_t__ volatile head; int tail; } ;
typedef scalar_t__ LONG ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct wined3d_cs*,int) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct wined3d_cs *VAR_0, enum wined3d_cs_queue_id VAR_1)
{
    if (VAR_0->thread_id == FUNC_0())
    {
        FUNC_1(VAR_0, VAR_1);
        return;
    }

    while (VAR_0->queue[VAR_1].head != *(volatile LONG *)&VAR_0->queue[VAR_1].tail)
        FUNC_2();
}
