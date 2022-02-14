
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quat {int x; int y; int z; int w; } ;


 float VAR_0 ;
 int FUNC_0 (float) ;
 int FUNC_1 (struct quat*,struct quat const*) ;
 int FUNC_2 (struct quat*,struct quat*,float) ;
 float FUNC_3 (float) ;
 float FUNC_4 (int) ;

void FUNC_5(struct quat *VAR_1, const struct quat *VAR_2)
{
 float VAR_3 = FUNC_4(VAR_2->x * VAR_2->x + VAR_2->y * VAR_2->y + VAR_2->z * VAR_2->z);
 float VAR_4 = FUNC_3(VAR_3);

 FUNC_1(VAR_1, VAR_2);
 VAR_4 = (VAR_3 > VAR_0) ? (VAR_4 / VAR_3) : 1.0f;
 FUNC_2(VAR_1, VAR_1, VAR_4);
 VAR_1->w = FUNC_0(VAR_3);
}
