
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (double) ;
 scalar_t__ FUNC_1 (int *,int) ;
 double FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(js_State *VAR_1, int *VAR_2)
{
 FUNC_3(VAR_1, -2, VAR_0);
 FUNC_3(VAR_1, -1, VAR_0);

 *VAR_2 = 1;
 if (FUNC_1(VAR_1, -2) && FUNC_1(VAR_1, -1)) {
  return FUNC_5(FUNC_4(VAR_1, -2), FUNC_4(VAR_1, -1));
 } else {
  double VAR_3 = FUNC_2(VAR_1, -2);
  double VAR_4 = FUNC_2(VAR_1, -1);
  if (FUNC_0(VAR_3) || FUNC_0(VAR_4))
   *VAR_2 = 0;
  return VAR_3 < VAR_4 ? -1 : VAR_3 > VAR_4 ? 1 : 0;
 }
}
