
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,char*,int ) ;
 char* FUNC_5 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_6(void)
{
 lua_State *VAR_2=FUNC_3();
 FUNC_4(VAR_2,"print",VAR_0);
 if (FUNC_1(VAR_2,((void*)0))!=0) FUNC_0(VAR_1,"%s\n",FUNC_5(VAR_2,-1));
 FUNC_2(VAR_2);
 return 0;
}
