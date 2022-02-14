
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_rect {void* y1; void* x1; void* y0; void* x0; } ;


 void* FUNC_0 (void*,void*) ;
 void* FUNC_1 (void*,void*) ;

void FUNC_2(struct mp_rect *VAR_0, const struct mp_rect *VAR_1)
{
    VAR_0->x0 = FUNC_1(VAR_0->x0, VAR_1->x0);
    VAR_0->y0 = FUNC_1(VAR_0->y0, VAR_1->y0);
    VAR_0->x1 = FUNC_0(VAR_0->x1, VAR_1->x1);
    VAR_0->y1 = FUNC_0(VAR_0->y1, VAR_1->y1);
}
