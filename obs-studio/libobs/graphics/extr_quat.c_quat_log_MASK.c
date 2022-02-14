
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quat {float w; } ;


 float VAR_0 ;
 float FUNC_0 (float) ;
 float FUNC_1 (float) ;
 int FUNC_2 (struct quat*,struct quat const*) ;
 int FUNC_3 (struct quat*,struct quat*,float) ;
 float FUNC_4 (float) ;

void FUNC_5(struct quat *VAR_1, const struct quat *VAR_2)
{
 float VAR_3 = FUNC_0(VAR_2->w);
 float VAR_4 = FUNC_4(VAR_3);
 float VAR_5 = VAR_2->w;

 FUNC_2(VAR_1, VAR_2);
 VAR_1->w = 0.0f;

 if ((FUNC_1(VAR_5) < 1.0f) && (FUNC_1(VAR_4) >= VAR_0)) {
  VAR_4 = VAR_3 / VAR_4;
  FUNC_3(VAR_1, VAR_1, VAR_4);
 }
}
