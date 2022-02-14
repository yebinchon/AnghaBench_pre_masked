
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int dummy; } ;
struct plane {float dist; int dir; } ;
struct bounds {int dummy; } ;


 int FUNC_0 (struct vec3*,struct bounds const*) ;
 float FUNC_1 (struct vec3*,struct plane const*) ;
 float FUNC_2 (struct bounds const*,int *) ;

float FUNC_3(const struct bounds *VAR_0, const struct plane *VAR_1)
{
 struct vec3 VAR_2;
 float VAR_3 = FUNC_2(VAR_0, &VAR_1->dir) * 0.5f;
 float VAR_4;

 FUNC_0(&VAR_2, VAR_0);
 VAR_4 = FUNC_1(&VAR_2, VAR_1);

 return VAR_1->dist + VAR_4 - VAR_3;
}
