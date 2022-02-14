
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matrix3 {int t; int z; int y; int x; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void FUNC_1(struct matrix3 *VAR_0, const struct matrix3 *VAR_1)
{
 FUNC_0(&VAR_0->x, &VAR_1->x);
 FUNC_0(&VAR_0->y, &VAR_1->y);
 FUNC_0(&VAR_0->z, &VAR_1->z);
 FUNC_0(&VAR_0->t, &VAR_1->t);
}
