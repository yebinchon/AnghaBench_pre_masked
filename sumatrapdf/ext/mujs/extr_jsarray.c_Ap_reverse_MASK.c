
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static void FUNC_5(js_State *VAR_0)
{
 int VAR_1, VAR_2, VAR_3;

 VAR_1 = FUNC_2(VAR_0, 0);
 VAR_2 = VAR_1 / 2;
 VAR_3 = 0;

 while (VAR_3 != VAR_2) {
  int VAR_4 = VAR_1 - VAR_3 - 1;
  int VAR_5 = FUNC_3(VAR_0, 0, VAR_3);
  int VAR_6 = FUNC_3(VAR_0, 0, VAR_4);
  if (VAR_5 && VAR_6) {
   FUNC_4(VAR_0, 0, VAR_3);
   FUNC_4(VAR_0, 0, VAR_4);
  } else if (VAR_6) {
   FUNC_4(VAR_0, 0, VAR_3);
   FUNC_1(VAR_0, 0, VAR_4);
  } else if (VAR_5) {
   FUNC_4(VAR_0, 0, VAR_4);
   FUNC_1(VAR_0, 0, VAR_3);
  }
  ++VAR_3;
 }

 FUNC_0(VAR_0, 0);
}
