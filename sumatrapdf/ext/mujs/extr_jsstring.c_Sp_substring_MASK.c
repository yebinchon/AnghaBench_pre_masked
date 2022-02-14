
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 char* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (int *,int) ;
 char* FUNC_4 (char const*,int) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(js_State *VAR_0)
{
 const char *VAR_1 = FUNC_0(VAR_0, 0);
 const char *VAR_2, *VAR_3;
 int VAR_4 = FUNC_5(VAR_1);
 int VAR_5 = FUNC_3(VAR_0, 1);
 int VAR_6 = FUNC_1(VAR_0, 2) ? FUNC_3(VAR_0, 2) : VAR_4;

 VAR_5 = VAR_5 < 0 ? 0 : VAR_5 > VAR_4 ? VAR_4 : VAR_5;
 VAR_6 = VAR_6 < 0 ? 0 : VAR_6 > VAR_4 ? VAR_4 : VAR_6;

 if (VAR_5 < VAR_6) {
  VAR_2 = FUNC_4(VAR_1, VAR_5);
  VAR_3 = FUNC_4(VAR_2, VAR_6 - VAR_5);
 } else {
  VAR_2 = FUNC_4(VAR_1, VAR_6);
  VAR_3 = FUNC_4(VAR_2, VAR_5 - VAR_6);
 }

 FUNC_2(VAR_0, VAR_2, VAR_3 - VAR_2);
}
