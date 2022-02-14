
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matrix4 {int dummy; } ;


 float FUNC_0 (float*) ;
 int FUNC_1 (float*,struct matrix4 const*,int ,int) ;

float FUNC_2(const struct matrix4 *VAR_0)
{
 const float *VAR_1 = (const float *)VAR_0;
 float VAR_2, VAR_3 = 0.0f, VAR_4 = 1.0f;
 float VAR_5[9];
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 4; VAR_6++, VAR_4 = -VAR_4) {
  FUNC_1(VAR_5, VAR_0, 0, VAR_6);

  VAR_2 = FUNC_0(VAR_5);
  VAR_3 += VAR_1[VAR_6] * VAR_2 * VAR_4;
 }

 return VAR_3;
}
