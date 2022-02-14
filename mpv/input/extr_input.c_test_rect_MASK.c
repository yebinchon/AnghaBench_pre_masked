
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_rect {int x0; int y0; int x1; int y1; } ;



__attribute__((used)) static bool FUNC_0(struct mp_rect *VAR_0, int VAR_1, int VAR_2)
{
    return VAR_1 >= VAR_0->x0 && VAR_2 >= VAR_0->y0 && VAR_1 < VAR_0->x1 && VAR_2 < VAR_0->y1;
}
