
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quat {float x; float y; float z; float w; } ;
struct matrix3 {int t; int z; int y; int x; } ;


 float FUNC_0 (struct quat const*,struct quat const*) ;
 int FUNC_1 (int *,float,float,float) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct matrix3 *VAR_0, const struct quat *VAR_1)
{
 float VAR_2 = FUNC_0(VAR_1, VAR_1);
 float VAR_3 = (VAR_2 > 0.0f) ? (2.0f / VAR_2) : 0.0f;

 float VAR_4 = VAR_1->x * VAR_1->x * VAR_3;
 float VAR_5 = VAR_1->y * VAR_1->y * VAR_3;
 float VAR_6 = VAR_1->z * VAR_1->z * VAR_3;
 float VAR_7 = VAR_1->x * VAR_1->y * VAR_3;
 float VAR_8 = VAR_1->x * VAR_1->z * VAR_3;
 float VAR_9 = VAR_1->y * VAR_1->z * VAR_3;
 float VAR_10 = VAR_1->w * VAR_1->x * VAR_3;
 float VAR_11 = VAR_1->w * VAR_1->y * VAR_3;
 float VAR_12 = VAR_1->w * VAR_1->z * VAR_3;

 FUNC_1(&VAR_0->x, 1.0f - (VAR_5 + VAR_6), VAR_7 + VAR_12, VAR_8 - VAR_11);
 FUNC_1(&VAR_0->y, VAR_7 - VAR_12, 1.0f - (VAR_4 + VAR_6), VAR_9 + VAR_10);
 FUNC_1(&VAR_0->z, VAR_8 + VAR_11, VAR_9 - VAR_10, 1.0f - (VAR_4 + VAR_5));
 FUNC_2(&VAR_0->t);
}
