
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;
typedef int Rune ;


 int FUNC_0 (int *,char const*) ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 char* FUNC_4 (int *,int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*,char const*,int) ;

__attribute__((used)) static void FUNC_7(js_State *VAR_0)
{
 const char *VAR_1 = FUNC_1(VAR_0, 0);
 const char *VAR_2 = FUNC_4(VAR_0, 1);
 int VAR_3 = FUNC_3(VAR_0, 2);
 int VAR_4 = FUNC_5(VAR_2);
 int VAR_5 = 0;
 Rune VAR_6;
 while (*VAR_1) {
  if (VAR_5 >= VAR_3 && !FUNC_6(VAR_1, VAR_2, VAR_4)) {
   FUNC_2(VAR_0, VAR_5);
   return;
  }
  VAR_1 += FUNC_0(&VAR_6, VAR_1);
  ++VAR_5;
 }
 FUNC_2(VAR_0, -1);
}
