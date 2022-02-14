
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {int dummy; } ;
struct matrix4 {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct matrix4*,struct vec3*,struct matrix4*) ;
 int VAR_0 ;
 struct matrix4* FUNC_2 (int ) ;
 int FUNC_3 (struct vec3*,float,float,float) ;

void FUNC_4(float VAR_1, float VAR_2, float VAR_3)
{
 struct matrix4 *VAR_4;
 struct vec3 VAR_5;

 if (!FUNC_0("gs_matrix_translate3f"))
  return;

 VAR_4 = FUNC_2(VAR_0);
 if (VAR_4) {
  FUNC_3(&VAR_5, VAR_1, VAR_2, VAR_3);
  FUNC_1(VAR_4, &VAR_5, VAR_4);
 }
}
