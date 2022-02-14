
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 double VAR_0 ;
 scalar_t__ FUNC_0 (double) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,double) ;
 double FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (double) ;

__attribute__((used)) static void FUNC_5(js_State *VAR_1)
{
 int VAR_2, VAR_3 = FUNC_1(VAR_1);
 double VAR_4 = VAR_0;
 for (VAR_2 = 1; VAR_2 < VAR_3; ++VAR_2) {
  double VAR_5 = FUNC_3(VAR_1, VAR_2);
  if (FUNC_0(VAR_5)) {
   VAR_4 = VAR_5;
   break;
  }
  if (FUNC_4(VAR_4) == FUNC_4(VAR_5))
   VAR_4 = VAR_4 < VAR_5 ? VAR_4 : VAR_5;
  else if (FUNC_4(VAR_5))
   VAR_4 = VAR_5;
 }
 FUNC_2(VAR_1, VAR_4);
}
