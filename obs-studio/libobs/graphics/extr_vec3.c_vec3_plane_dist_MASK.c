
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int dummy; } ;
struct plane {float dist; int dir; } ;


 float FUNC_0 (struct vec3 const*,int *) ;

float FUNC_1(const struct vec3 *VAR_0, const struct plane *VAR_1)
{
 return FUNC_0(VAR_0, &VAR_1->dir) - VAR_1->dist;
}
