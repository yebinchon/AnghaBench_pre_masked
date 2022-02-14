
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 char* FUNC_4 (char*,char) ;

char *FUNC_5(lua_State *VAR_0, char *VAR_1) {
    char *VAR_2 = FUNC_4(VAR_1+1,'\r');

    FUNC_0(VAR_0);
    FUNC_2(VAR_0,"ok");
    FUNC_1(VAR_0,VAR_1+1,VAR_2-VAR_1-1);
    FUNC_3(VAR_0,-3);
    return VAR_2+2;
}
