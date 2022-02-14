
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Number ;
typedef int lua_Integer ;
typedef int TValue ;


 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*,int *) ;

__attribute__((used)) static lua_Integer FUNC_4(lua_State*VAR_0,int VAR_1){
TValue VAR_2;
const TValue*VAR_3=FUNC_0(VAR_0,VAR_1);
if(FUNC_3(VAR_3,&VAR_2)){
lua_Integer VAR_4;
lua_Number VAR_5=FUNC_2(VAR_3);
FUNC_1(VAR_4,VAR_5);
return VAR_4;
}
else
return 0;
}
