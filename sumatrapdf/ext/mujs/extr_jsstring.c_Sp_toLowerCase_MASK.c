
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;
typedef int Rune ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*) ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (char*,int *) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(js_State *VAR_1)
{
 const char *VAR_2 = FUNC_1(VAR_1, 0);
 char *VAR_3 = FUNC_4(VAR_1, VAR_0 * FUNC_9(VAR_2) + 1);
 const char *VAR_4 = VAR_2;
 char *VAR_5 = VAR_3;
 Rune VAR_6;
 while (*VAR_4) {
  VAR_4 += FUNC_0(&VAR_6, VAR_4);
  VAR_6 = FUNC_10(VAR_6);
  VAR_5 += FUNC_8(VAR_5, &VAR_6);
 }
 *VAR_5 = 0;
 if (FUNC_7(VAR_1)) {
  FUNC_3(VAR_1, VAR_3);
  FUNC_6(VAR_1);
 }
 FUNC_5(VAR_1, VAR_3);
 FUNC_2(VAR_1);
 FUNC_3(VAR_1, VAR_3);
}
