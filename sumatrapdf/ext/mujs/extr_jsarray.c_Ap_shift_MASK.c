
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static void FUNC_7(js_State *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_2 = FUNC_2(VAR_0, 0);

 if (VAR_2 == 0) {
  FUNC_6(VAR_0, 0, 0);
  FUNC_4(VAR_0);
  return;
 }

 FUNC_1(VAR_0, 0, 0);

 for (VAR_1 = 1; VAR_1 < VAR_2; ++VAR_1) {
  if (FUNC_3(VAR_0, 0, VAR_1))
   FUNC_5(VAR_0, 0, VAR_1 - 1);
  else
   FUNC_0(VAR_0, 0, VAR_1 - 1);
 }

 FUNC_0(VAR_0, 0, VAR_2 - 1);
 FUNC_6(VAR_0, 0, VAR_2 - 1);
}
