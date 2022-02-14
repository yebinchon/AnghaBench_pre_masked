
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 double VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,double) ;
 int FUNC_4 (int *,int) ;
 char* FUNC_5 (int *,int) ;
 double FUNC_6 (char const*,char**,int) ;

__attribute__((used)) static void FUNC_7(js_State *VAR_1)
{
 const char *VAR_2 = FUNC_5(VAR_1, 1);
 int VAR_3 = FUNC_2(VAR_1, 2) ? FUNC_4(VAR_1, 2) : 10;
 double VAR_4 = 1;
 double VAR_5;
 char *VAR_6;

 while (FUNC_1(*VAR_2) || FUNC_0(*VAR_2))
  ++VAR_2;
 if (*VAR_2 == '-') {
  ++VAR_2;
  VAR_4 = -1;
 } else if (*VAR_2 == '+') {
  ++VAR_2;
 }
 if (VAR_3 == 0) {
  VAR_3 = 10;
  if (VAR_2[0] == '0' && (VAR_2[1] == 'x' || VAR_2[1] == 'X')) {
   VAR_2 += 2;
   VAR_3 = 16;
  }
 } else if (VAR_3 < 2 || VAR_3 > 36) {
  FUNC_3(VAR_1, VAR_0);
  return;
 }
 VAR_5 = FUNC_6(VAR_2, &VAR_6, VAR_3);
 if (VAR_2 == VAR_6)
  FUNC_3(VAR_1, VAR_0);
 else
  FUNC_3(VAR_1, VAR_5 * VAR_4);
}
