
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int dummy; } ;
struct plane {struct vec3 dir; scalar_t__ dist; } ;
struct matrix3 {struct vec3 t; } ;


 scalar_t__ FUNC_0 (struct vec3*,struct vec3*) ;
 int FUNC_1 (struct vec3*,struct vec3*) ;
 int FUNC_2 (struct vec3*,struct vec3*,struct matrix3 const*) ;

void FUNC_3(struct plane *VAR_0, const struct plane *VAR_1,
   const struct matrix3 *VAR_2)
{
 struct vec3 VAR_3;

 FUNC_2(&VAR_0->dir, &VAR_1->dir, VAR_2);
 FUNC_1(&VAR_0->dir, &VAR_0->dir);

 FUNC_2(&VAR_3, &VAR_2->t, VAR_2);
 VAR_0->dist = VAR_1->dist - FUNC_0(&VAR_0->dir, &VAR_3);
}
