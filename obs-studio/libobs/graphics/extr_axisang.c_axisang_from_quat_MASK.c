
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quat {float x; float y; float z; int w; } ;
struct axisang {float x; float y; float z; float w; } ;


 int VAR_0 ;
 float FUNC_0 (int ) ;
 int FUNC_1 (float,float,int ) ;
 float FUNC_2 (float) ;

void FUNC_3(struct axisang *VAR_1, const struct quat *VAR_2)
{
 float VAR_3, VAR_4;

 VAR_3 = VAR_2->x * VAR_2->x + VAR_2->y * VAR_2->y + VAR_2->z * VAR_2->z;
 if (!FUNC_1(VAR_3, 0.0f, VAR_0)) {
  VAR_4 = 1.0f / FUNC_2(VAR_3);
  VAR_1->x = VAR_2->x * VAR_4;
  VAR_1->y = VAR_2->y * VAR_4;
  VAR_1->z = VAR_2->z * VAR_4;
  VAR_1->w = FUNC_0(VAR_2->w) * 2.0f;
 } else {
  VAR_1->x = 0.0f;
  VAR_1->y = 0.0f;
  VAR_1->z = 0.0f;
  VAR_1->w = 0.0f;
 }
}
