
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *,char*) ;

__attribute__((used)) static void FUNC_11(js_State *VAR_1)
{
 FUNC_2(VAR_1, 0);
 FUNC_9(VAR_1, -1, VAR_0);
 if (FUNC_5(VAR_1, -1) && !FUNC_0(FUNC_8(VAR_1, -1))) {
  FUNC_7(VAR_1);
  return;
 }
 FUNC_6(VAR_1, 1);

 FUNC_3(VAR_1, 0, "toISOString");
 if (!FUNC_4(VAR_1, -1))
  FUNC_10(VAR_1, "this.toISOString is not a function");
 FUNC_2(VAR_1, 0);
 FUNC_1(VAR_1, 0);
}
