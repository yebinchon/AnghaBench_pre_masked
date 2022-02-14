
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int dummy; } ;
struct plane {struct vec3 dir; int dist; } ;


 int FUNC_0 (struct vec3*,struct vec3*,struct vec3*) ;
 int FUNC_1 (struct vec3 const*,struct vec3*) ;
 int FUNC_2 (struct vec3*,struct vec3*) ;
 int FUNC_3 (struct vec3*,struct vec3 const*,struct vec3 const*) ;

void FUNC_4(struct plane *VAR_0, const struct vec3 *VAR_1,
      const struct vec3 *VAR_2, const struct vec3 *VAR_3)
{
 struct vec3 VAR_4;

 FUNC_3(&VAR_4, VAR_2, VAR_1);
 FUNC_3(&VAR_0->dir, VAR_3, VAR_1);
 FUNC_0(&VAR_0->dir, &VAR_4, &VAR_0->dir);
 FUNC_2(&VAR_0->dir, &VAR_0->dir);
 VAR_0->dist = FUNC_1(VAR_1, &VAR_0->dir);
}
