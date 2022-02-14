
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int dummy; } ;
struct bounds {int min; int max; } ;


 int FUNC_0 (struct vec3*,struct vec3*,int *) ;
 int FUNC_1 (struct vec3*,struct vec3*,float) ;
 int FUNC_2 (struct vec3*,int *,int *) ;

void FUNC_3(struct vec3 *VAR_0, const struct bounds *VAR_1)
{
 FUNC_2(VAR_0, &VAR_1->max, &VAR_1->min);
 FUNC_1(VAR_0, VAR_0, 0.5f);
 FUNC_0(VAR_0, VAR_0, &VAR_1->min);
}
