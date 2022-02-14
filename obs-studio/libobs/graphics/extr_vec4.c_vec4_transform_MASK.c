
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec4 {void* w; void* z; void* y; void* x; } ;
struct matrix4 {int t; int z; int y; int x; } ;


 int FUNC_0 (struct matrix4*,struct matrix4 const*) ;
 int FUNC_1 (struct vec4*,struct vec4*) ;
 void* FUNC_2 (int *,struct vec4 const*) ;

void FUNC_3(struct vec4 *VAR_0, const struct vec4 *VAR_1,
      const struct matrix4 *VAR_2)
{
 struct vec4 VAR_3;
 struct matrix4 VAR_4;

 FUNC_0(&VAR_4, VAR_2);

 VAR_3.x = FUNC_2(&VAR_4.x, VAR_1);
 VAR_3.y = FUNC_2(&VAR_4.y, VAR_1);
 VAR_3.z = FUNC_2(&VAR_4.z, VAR_1);
 VAR_3.w = FUNC_2(&VAR_4.t, VAR_1);

 FUNC_1(VAR_0, &VAR_3);
}
