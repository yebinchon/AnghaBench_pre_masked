
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 char* FUNC_7 (int *,int) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static int FUNC_9(lua_State *VAR_0)
{
 int VAR_1=FUNC_1(VAR_0);
 int VAR_2;
 for (VAR_2=1; VAR_2<=VAR_1; VAR_2++)
 {
  if (VAR_2>1) FUNC_8("\t");
  if (FUNC_4(VAR_0,VAR_2))
   FUNC_8("%s",FUNC_7(VAR_0,VAR_2));
  else if (FUNC_3(VAR_0,VAR_2))
   FUNC_8("%s","nil");
  else if (FUNC_2(VAR_0,VAR_2))
   FUNC_8("%s",FUNC_5(VAR_0,VAR_2) ? "true" : "false");
  else
   FUNC_8("%s:%p",FUNC_0(VAR_0,VAR_2),FUNC_6(VAR_0,VAR_2));
 }
 FUNC_8("\n");
 return 0;
}
