
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {float w; void* z; void* y; void* x; } ;
struct matrix3 {int z; int y; int x; } ;


 int FUNC_0 (struct vec3*,struct vec3 const*) ;
 void* FUNC_1 (struct vec3*,int *) ;

void FUNC_2(struct vec3 *VAR_0, const struct vec3 *VAR_1,
   const struct matrix3 *VAR_2)
{
 struct vec3 VAR_3;
 FUNC_0(&VAR_3, VAR_1);

 VAR_0->x = FUNC_1(&VAR_3, &VAR_2->x);
 VAR_0->y = FUNC_1(&VAR_3, &VAR_2->y);
 VAR_0->z = FUNC_1(&VAR_3, &VAR_2->z);
 VAR_0->w = 0.0f;
}
