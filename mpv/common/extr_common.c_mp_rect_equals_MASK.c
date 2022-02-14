
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_rect {scalar_t__ x0; scalar_t__ y0; scalar_t__ x1; scalar_t__ y1; } ;



bool FUNC_0(struct mp_rect *VAR_0, struct mp_rect *VAR_1)
{
    return VAR_0->x0 == VAR_1->x0 && VAR_0->y0 == VAR_1->y0 &&
           VAR_0->x1 == VAR_1->x1 && VAR_0->y1 == VAR_1->y1;
}
