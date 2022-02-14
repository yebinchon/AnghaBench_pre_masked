
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,int,size_t*) ;
 int FUNC_4 (char*,char*,size_t) ;

int FUNC_5(lua_State *VAR_0) {
    int VAR_1 = FUNC_1(VAR_0);
    char VAR_2[41];
    size_t VAR_3;
    char *VAR_4;

    if (VAR_1 != 1) {
        FUNC_2(VAR_0, "wrong number of arguments");
        return FUNC_0(VAR_0);
    }

    VAR_4 = (char*)FUNC_3(VAR_0,1,&VAR_3);
    FUNC_4(VAR_2,VAR_4,VAR_3);
    FUNC_2(VAR_0,VAR_2);
    return 1;
}
