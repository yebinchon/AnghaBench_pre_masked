
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec2 {int y; int x; } ;


 scalar_t__ FUNC_0 (int ,int ,float) ;

int FUNC_1(const struct vec2 *VAR_0, const struct vec2 *VAR_1, float VAR_2)
{
 return FUNC_0(VAR_0->x, VAR_1->x, VAR_2) &&
        FUNC_0(VAR_0->y, VAR_1->y, VAR_2);
}
