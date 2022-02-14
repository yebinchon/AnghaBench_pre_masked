
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int,int ) ;

__attribute__((used)) static void FUNC_8(js_State *VAR_0)
{
 int VAR_1, VAR_2 = FUNC_2(VAR_0);
 int VAR_3, VAR_4, VAR_5;

 FUNC_5(VAR_0);
 VAR_3 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_2; ++VAR_1) {
  FUNC_0(VAR_0, VAR_1);
  if (FUNC_4(VAR_0, -1)) {
   VAR_5 = FUNC_1(VAR_0, -1);
   for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4)
    if (FUNC_3(VAR_0, -1, VAR_4))
     FUNC_7(VAR_0, -3, VAR_3++);
   FUNC_6(VAR_0, 1);
  } else {
   FUNC_7(VAR_0, -2, VAR_3++);
  }
 }
}
