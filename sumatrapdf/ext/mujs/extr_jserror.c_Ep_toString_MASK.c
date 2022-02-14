
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char const*) ;
 char* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static void FUNC_6(js_State *VAR_0)
{
 const char *VAR_1 = "Error";
 const char *VAR_2 = "";

 if (!FUNC_2(VAR_0, -1))
  FUNC_5(VAR_0, "not an object");

 if (FUNC_1(VAR_0, 0, "name"))
  VAR_1 = FUNC_4(VAR_0, -1);
 if (FUNC_1(VAR_0, 0, "message"))
  VAR_2 = FUNC_4(VAR_0, -1);

 if (VAR_1[0] == 0)
  FUNC_3(VAR_0, VAR_2);
 else if (VAR_2[0] == 0)
  FUNC_3(VAR_0, VAR_1);
 else {
  FUNC_3(VAR_0, VAR_1);
  FUNC_3(VAR_0, ": ");
  FUNC_0(VAR_0);
  FUNC_3(VAR_0, VAR_2);
  FUNC_0(VAR_0);
 }
}
