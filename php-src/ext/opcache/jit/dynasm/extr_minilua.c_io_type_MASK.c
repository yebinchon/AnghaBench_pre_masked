
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int) ;
 void* FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(lua_State*VAR_0){
void*VAR_1;
FUNC_0(VAR_0,1);
VAR_1=FUNC_6(VAR_0,1);
FUNC_1(VAR_0,(-10000),"FILE*");
if(VAR_1==((void*)0)||!FUNC_2(VAR_0,1)||!FUNC_5(VAR_0,-2,-1))
FUNC_4(VAR_0);
else if(*((FILE**)VAR_1)==((void*)0))
FUNC_3(VAR_0,"closed file");
else
FUNC_3(VAR_0,"file");
return 1;
}
