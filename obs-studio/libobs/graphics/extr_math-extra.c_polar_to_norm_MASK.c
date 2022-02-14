
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {float x; float y; float z; } ;
struct vec2 {int x; int y; } ;


 float FUNC_0 (int ) ;
 float FUNC_1 (int ) ;

void FUNC_2(struct vec3 *VAR_0, const struct vec2 *VAR_1)
{
 float VAR_2 = FUNC_1(VAR_1->x);

 VAR_0->x = VAR_2 * FUNC_0(VAR_1->y);
 VAR_0->y = VAR_2 * FUNC_1(VAR_1->y);
 VAR_0->z = FUNC_0(VAR_1->x);
}
