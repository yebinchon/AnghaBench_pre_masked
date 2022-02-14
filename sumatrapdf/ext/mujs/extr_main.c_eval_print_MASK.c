
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,char*,char const*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *,int,char*) ;
 char* FUNC_7 (int *,int,char*) ;
 int FUNC_8 (char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_9(js_State *VAR_1, const char *VAR_2)
{
 if (FUNC_3(VAR_1, "[stdin]", VAR_2)) {
  FUNC_0(VAR_0, "%s\n", FUNC_7(VAR_1, -1, "Error"));
  FUNC_4(VAR_1, 1);
  return 1;
 }
 FUNC_5(VAR_1);
 if (FUNC_2(VAR_1, 0)) {
  FUNC_0(VAR_0, "%s\n", FUNC_7(VAR_1, -1, "Error"));
  FUNC_4(VAR_1, 1);
  return 1;
 }
 if (FUNC_1(VAR_1, -1)) {
  FUNC_8("%s\n", FUNC_6(VAR_1, -1, "can't convert to string"));
 }
 FUNC_4(VAR_1, 1);
 return 0;
}
