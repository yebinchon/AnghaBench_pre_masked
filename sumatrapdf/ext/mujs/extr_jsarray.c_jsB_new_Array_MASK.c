
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int,char*) ;

__attribute__((used)) static void FUNC_6(js_State *VAR_0)
{
 int VAR_1, VAR_2 = FUNC_1(VAR_0);

 FUNC_3(VAR_0);

 if (VAR_2 == 2) {
  if (FUNC_2(VAR_0, 1)) {
   FUNC_0(VAR_0, 1);
   FUNC_5(VAR_0, -2, "length");
  } else {
   FUNC_0(VAR_0, 1);
   FUNC_4(VAR_0, -2, 0);
  }
 } else {
  for (VAR_1 = 1; VAR_1 < VAR_2; ++VAR_1) {
   FUNC_0(VAR_0, VAR_1);
   FUNC_4(VAR_0, -2, VAR_1 - 1);
  }
 }
}
