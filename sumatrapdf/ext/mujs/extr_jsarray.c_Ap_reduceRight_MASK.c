
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,char*) ;

__attribute__((used)) static void FUNC_10(js_State *VAR_0)
{
 int VAR_1 = FUNC_3(VAR_0) >= 3;
 int VAR_2, VAR_3;

 if (!FUNC_5(VAR_0, 1))
  FUNC_9(VAR_0, "callback is not a function");

 VAR_3 = FUNC_2(VAR_0, 0);
 VAR_2 = VAR_3 - 1;

 if (VAR_3 == 0 && !VAR_1)
  FUNC_9(VAR_0, "no initial value");


 if (VAR_1)
  FUNC_1(VAR_0, 2);
 else {
  while (VAR_2 >= 0)
   if (FUNC_4(VAR_0, 0, VAR_2--))
    break;
  if (VAR_2 < 0)
   FUNC_9(VAR_0, "no initial value");
 }

 while (VAR_2 >= 0) {
  if (FUNC_4(VAR_0, 0, VAR_2)) {
   FUNC_1(VAR_0, 1);
   FUNC_7(VAR_0);
   FUNC_8(VAR_0, 4);
   FUNC_8(VAR_0, 4);
   FUNC_6(VAR_0, VAR_2);
   FUNC_1(VAR_0, 0);
   FUNC_0(VAR_0, 4);
  }
  --VAR_2;
 }


}
