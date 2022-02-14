
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int dummy; } ;
struct matrix3 {int t; int z; int y; int x; } ;


 int FUNC_0 (int *,int *,struct vec3 const*) ;

void FUNC_1(struct matrix3 *VAR_0, const struct matrix3 *VAR_1,
     const struct vec3 *VAR_2)
{
 FUNC_0(&VAR_0->x, &VAR_1->x, VAR_2);
 FUNC_0(&VAR_0->y, &VAR_1->y, VAR_2);
 FUNC_0(&VAR_0->z, &VAR_1->z, VAR_2);
 FUNC_0(&VAR_0->t, &VAR_1->t, VAR_2);
}
