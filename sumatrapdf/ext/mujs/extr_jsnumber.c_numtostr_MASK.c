
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,char const*,int,...) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static void FUNC_4(js_State *VAR_0, const char *VAR_1, int VAR_2, double VAR_3)
{

 char VAR_4[50], *VAR_5;
 FUNC_2(VAR_4, VAR_1, VAR_2, VAR_3);
 VAR_5 = FUNC_3(VAR_4, 'e');
 if (VAR_5) {
  int VAR_6 = FUNC_0(VAR_5+1);
  FUNC_2(VAR_5, "e%+d", VAR_6);
 }
 FUNC_1(VAR_0, VAR_4);
}
