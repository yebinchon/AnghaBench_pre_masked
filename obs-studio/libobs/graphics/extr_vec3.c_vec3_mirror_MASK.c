
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int dummy; } ;
struct plane {int dir; } ;


 int FUNC_0 (struct vec3*,int *,float) ;
 float FUNC_1 (struct vec3 const*,struct plane const*) ;
 int FUNC_2 (struct vec3*,struct vec3 const*,struct vec3*) ;

void FUNC_3(struct vec3 *VAR_0, const struct vec3 *VAR_1, const struct plane *VAR_2)
{
 struct vec3 VAR_3;
 FUNC_0(&VAR_3, &VAR_2->dir, FUNC_1(VAR_1, VAR_2) * 2.0f);
 FUNC_2(VAR_0, VAR_1, &VAR_3);
}
