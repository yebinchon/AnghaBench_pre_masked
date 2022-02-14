
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_cs {scalar_t__ thread_id; int * queue; } ;
typedef enum wined3d_cs_queue_id { ____Placeholder_wined3d_cs_queue_id } wined3d_cs_queue_id ;


 scalar_t__ FUNC_0 () ;
 void* FUNC_1 (int *,size_t,struct wined3d_cs*) ;
 void* FUNC_2 (struct wined3d_cs*,size_t,int) ;

__attribute__((used)) static void *FUNC_3(struct wined3d_cs *VAR_0, size_t VAR_1, enum wined3d_cs_queue_id VAR_2)
{
    if (VAR_0->thread_id == FUNC_0())
        return FUNC_2(VAR_0, VAR_1, VAR_2);

    return FUNC_1(&VAR_0->queue[VAR_2], VAR_1, VAR_0);
}
