
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char const*,int) ;
 int FUNC_5 (int ,size_t) ;

__attribute__((used)) static int FUNC_6(lua_State*VAR_0){
size_t VAR_1;
const char*VAR_2=FUNC_1(VAR_0,1,&VAR_1);
ptrdiff_t VAR_3=FUNC_5(FUNC_0(VAR_0,2),VAR_1);
ptrdiff_t VAR_4=FUNC_5(FUNC_2(VAR_0,3,-1),VAR_1);
if(VAR_3<1)VAR_3=1;
if(VAR_4>(ptrdiff_t)VAR_1)VAR_4=(ptrdiff_t)VAR_1;
if(VAR_3<=VAR_4)
FUNC_4(VAR_0,VAR_2+VAR_3-1,VAR_4-VAR_3+1);
else FUNC_3(VAR_0,"");
return 1;
}
