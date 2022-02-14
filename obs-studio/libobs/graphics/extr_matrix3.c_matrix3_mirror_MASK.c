
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plane {int dir; } ;
struct matrix3 {int t; int z; int y; int x; } ;


 int FUNC_0 (int *,int *,struct plane const*) ;
 int FUNC_1 (int *,int *,int *) ;

void FUNC_2(struct matrix3 *VAR_0, const struct matrix3 *VAR_1,
      const struct plane *VAR_2)
{
 FUNC_1(&VAR_0->x, &VAR_1->x, &VAR_2->dir);
 FUNC_1(&VAR_0->y, &VAR_1->y, &VAR_2->dir);
 FUNC_1(&VAR_0->z, &VAR_1->z, &VAR_2->dir);
 FUNC_0(&VAR_0->t, &VAR_1->t, VAR_2);
}
