
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_refqueue {int pos; int num_queue; struct mp_image** queue; } ;
struct mp_image {int dummy; } ;



struct mp_image *FUNC_0(struct mp_refqueue *VAR_0, int VAR_1)
{
    int VAR_2 = VAR_0->pos - VAR_1;
    return VAR_2 >= 0 && VAR_2 < VAR_0->num_queue ? VAR_0->queue[VAR_2] : ((void*)0);
}
