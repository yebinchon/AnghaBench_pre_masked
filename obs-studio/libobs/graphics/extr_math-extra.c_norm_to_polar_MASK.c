
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int y; int z; int x; } ;
struct vec2 {int y; int x; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct vec2 *VAR_0, const struct vec3 *VAR_1)
{
 VAR_0->x = FUNC_1(VAR_1->x, VAR_1->z);
 VAR_0->y = FUNC_0(VAR_1->y);
}
