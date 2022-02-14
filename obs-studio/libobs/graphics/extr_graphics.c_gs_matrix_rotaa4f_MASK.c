
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matrix4 {int dummy; } ;
struct axisang {int dummy; } ;


 int FUNC_0 (struct axisang*,float,float,float,float) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct matrix4*,struct axisang*,struct matrix4*) ;
 int VAR_0 ;
 struct matrix4* FUNC_3 (int ) ;

void FUNC_4(float VAR_1, float VAR_2, float VAR_3, float VAR_4)
{
 struct matrix4 *VAR_5;
 struct axisang VAR_6;

 if (!FUNC_1("gs_matrix_rotaa4f"))
  return;

 VAR_5 = FUNC_3(VAR_0);
 if (VAR_5) {
  FUNC_0(&VAR_6, VAR_1, VAR_2, VAR_3, VAR_4);
  FUNC_2(VAR_5, &VAR_6, VAR_5);
 }
}
