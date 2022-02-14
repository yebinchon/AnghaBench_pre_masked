
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_rect {scalar_t__ x0; scalar_t__ y0; scalar_t__ x1; scalar_t__ y1; } ;


 void* FUNC_0 (scalar_t__,scalar_t__) ;
 void* FUNC_1 (scalar_t__,scalar_t__) ;

bool FUNC_2(struct mp_rect *VAR_0, const struct mp_rect *VAR_1)
{
    VAR_0->x0 = FUNC_0(VAR_0->x0, VAR_1->x0);
    VAR_0->y0 = FUNC_0(VAR_0->y0, VAR_1->y0);
    VAR_0->x1 = FUNC_1(VAR_0->x1, VAR_1->x1);
    VAR_0->y1 = FUNC_1(VAR_0->y1, VAR_1->y1);

    return VAR_0->x1 > VAR_0->x0 && VAR_0->y1 > VAR_0->y0;
}
