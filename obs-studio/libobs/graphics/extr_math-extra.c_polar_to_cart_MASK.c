
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {float x; float z; float y; } ;


 float FUNC_0 (float) ;
 float FUNC_1 (float) ;
 int FUNC_2 (struct vec3*,struct vec3*) ;

void FUNC_3(struct vec3 *VAR_0, const struct vec3 *VAR_1)
{
 struct vec3 VAR_2;
 float VAR_3 = FUNC_0(VAR_1->x);
 float VAR_4 = VAR_1->z * VAR_3;

 VAR_2.x = VAR_4 * FUNC_1(VAR_1->y);
 VAR_2.z = VAR_4 * FUNC_0(VAR_1->y);
 VAR_2.y = VAR_1->z * FUNC_1(VAR_1->x);

 FUNC_2(VAR_0, &VAR_2);
}
