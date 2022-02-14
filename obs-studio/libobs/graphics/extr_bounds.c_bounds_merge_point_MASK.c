
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int dummy; } ;
struct bounds {int max; int min; } ;


 int FUNC_0 (int *,int *,struct vec3 const*) ;
 int FUNC_1 (int *,int *,struct vec3 const*) ;

void FUNC_2(struct bounds *VAR_0, const struct bounds *VAR_1,
   const struct vec3 *VAR_2)
{
 FUNC_1(&VAR_0->min, &VAR_1->min, VAR_2);
 FUNC_0(&VAR_0->max, &VAR_1->max, VAR_2);
}
