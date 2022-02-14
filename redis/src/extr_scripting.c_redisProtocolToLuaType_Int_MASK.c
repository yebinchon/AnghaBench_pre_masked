
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Number ;


 int FUNC_0 (int *,int ) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,int,long long*) ;

char *FUNC_3(lua_State *VAR_0, char *VAR_1) {
    char *VAR_2 = FUNC_1(VAR_1+1,'\r');
    long long VAR_3;

    FUNC_2(VAR_1+1,VAR_2-VAR_1-1,&VAR_3);
    FUNC_0(VAR_0,(lua_Number)VAR_3);
    return VAR_2+2;
}
