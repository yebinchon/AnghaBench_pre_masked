
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_rect {int x0; int y0; void* y1; void* x1; } ;


 void* FUNC_0 (void*,int) ;

__attribute__((used)) static void FUNC_1(int VAR_0, int VAR_1, struct mp_rect *VAR_2)
{
    VAR_2->x0 = VAR_2->x0 & ~(VAR_0 - 1);
    VAR_2->y0 = VAR_2->y0 & ~(VAR_1 - 1);
    VAR_2->x1 = FUNC_0(VAR_2->x1, VAR_0);
    VAR_2->y1 = FUNC_0(VAR_2->y1, VAR_1);
}
