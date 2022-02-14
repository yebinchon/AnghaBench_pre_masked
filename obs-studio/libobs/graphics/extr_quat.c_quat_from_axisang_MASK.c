
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quat {float x; float y; float z; int w; } ;
struct axisang {float w; float x; float y; float z; } ;


 int FUNC_0 (float) ;
 float FUNC_1 (float) ;

void FUNC_2(struct quat *VAR_0, const struct axisang *VAR_1)
{
 float VAR_2 = VAR_1->w * 0.5f;
 float VAR_3 = FUNC_1(VAR_2);

 VAR_0->x = VAR_1->x * VAR_3;
 VAR_0->y = VAR_1->y * VAR_3;
 VAR_0->z = VAR_1->z * VAR_3;
 VAR_0->w = FUNC_0(VAR_2);
}
