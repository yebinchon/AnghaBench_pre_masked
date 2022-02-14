
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {float x; float y; float z; } ;
struct matrix4 {int t; int z; int y; int x; } ;


 int FUNC_0 (struct matrix4*,struct matrix4 const*,struct matrix4*) ;
 int FUNC_1 (int *,float,float,float,float) ;

void FUNC_2(struct matrix4 *VAR_0, const struct matrix4 *VAR_1,
     const struct vec3 *VAR_2)
{
 struct matrix4 VAR_3;
 FUNC_1(&VAR_3.x, VAR_2->x, 0.0f, 0.0f, 0.0f);
 FUNC_1(&VAR_3.y, 0.0f, VAR_2->y, 0.0f, 0.0f);
 FUNC_1(&VAR_3.z, 0.0f, 0.0f, VAR_2->z, 0.0f);
 FUNC_1(&VAR_3.t, 0.0f, 0.0f, 0.0f, 1.0f);
 FUNC_0(VAR_0, VAR_1, &VAR_3);
}
