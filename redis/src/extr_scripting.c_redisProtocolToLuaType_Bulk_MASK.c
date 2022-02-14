
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,long long) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,int,long long*) ;

char *FUNC_4(lua_State *VAR_0, char *VAR_1) {
    char *VAR_2 = FUNC_2(VAR_1+1,'\r');
    long long VAR_3;

    FUNC_3(VAR_1+1,VAR_2-VAR_1-1,&VAR_3);
    if (VAR_3 == -1) {
        FUNC_0(VAR_0,0);
        return VAR_2+2;
    } else {
        FUNC_1(VAR_0,VAR_2+2,VAR_3);
        return VAR_2+2+VAR_3+2;
    }
}
