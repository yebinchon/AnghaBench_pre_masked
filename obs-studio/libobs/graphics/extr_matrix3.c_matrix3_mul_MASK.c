
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct matrix3 {int t; int z; int y; int x; } const matrix3 ;


 int FUNC_0 (struct matrix3 const*,struct matrix3 const*) ;
 int FUNC_1 (int *,int *,struct matrix3 const*) ;
 int FUNC_2 (int *,int *,struct matrix3 const*) ;

void FUNC_3(struct matrix3 *VAR_0, const struct matrix3 *VAR_1,
   const struct matrix3 *VAR_2)
{
 if (VAR_0 == VAR_2) {
  struct matrix3 VAR_3;
  FUNC_1(&VAR_3.x, &VAR_1->x, VAR_2);
  FUNC_1(&VAR_3.y, &VAR_1->y, VAR_2);
  FUNC_1(&VAR_3.z, &VAR_1->z, VAR_2);
  FUNC_2(&VAR_3.t, &VAR_1->t, VAR_2);
  FUNC_0(VAR_0, &VAR_3);
 } else {
  FUNC_1(&VAR_0->x, &VAR_1->x, VAR_2);
  FUNC_1(&VAR_0->y, &VAR_1->y, VAR_2);
  FUNC_1(&VAR_0->z, &VAR_1->z, VAR_2);
  FUNC_2(&VAR_0->t, &VAR_1->t, VAR_2);
 }
}
