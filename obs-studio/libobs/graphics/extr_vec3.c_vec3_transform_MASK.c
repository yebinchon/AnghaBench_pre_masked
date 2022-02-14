
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec4 {int dummy; } ;
struct vec3 {int dummy; } ;
struct matrix4 {int dummy; } ;


 int FUNC_0 (struct vec3*,struct vec4*) ;
 int FUNC_1 (struct vec4*,struct vec3 const*) ;
 int FUNC_2 (struct vec4*,struct vec4*,struct matrix4 const*) ;

void FUNC_3(struct vec3 *VAR_0, const struct vec3 *VAR_1,
      const struct matrix4 *VAR_2)
{
 struct vec4 VAR_3;
 FUNC_1(&VAR_3, VAR_1);
 FUNC_2(&VAR_3, &VAR_3, VAR_2);
 FUNC_0(VAR_0, &VAR_3);
}
