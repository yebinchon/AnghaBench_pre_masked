
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;
typedef int Rune ;


 int FUNC_0 (int *,char const*) ;
 char* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 char* FUNC_5 (int *,int) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char const*,char const*,int) ;

__attribute__((used)) static void FUNC_8(js_State *VAR_0)
{
 const char *VAR_1 = FUNC_1(VAR_0, 0);
 const char *VAR_2 = FUNC_5(VAR_0, 1);
 int VAR_3 = FUNC_2(VAR_0, 2) ? FUNC_4(VAR_0, 2) : (int)FUNC_6(VAR_1);
 int VAR_4 = FUNC_6(VAR_2);
 int VAR_5 = 0, VAR_6 = -1;
 Rune VAR_7;
 while (*VAR_1 && VAR_5 <= VAR_3) {
  if (!FUNC_7(VAR_1, VAR_2, VAR_4))
   VAR_6 = VAR_5;
  VAR_1 += FUNC_0(&VAR_7, VAR_1);
  ++VAR_5;
 }
 FUNC_3(VAR_0, VAR_6);
}
