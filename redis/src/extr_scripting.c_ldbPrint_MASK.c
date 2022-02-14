
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Debug ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,int *,int) ;
 scalar_t__ FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char const*) ;

void FUNC_8(lua_State *VAR_0, char *VAR_1) {
    lua_Debug VAR_2;

    int VAR_3 = 0;
    while (FUNC_4(VAR_0,VAR_3,&VAR_2) != 0) {
        VAR_3++;
        const char *VAR_4;
        int VAR_5 = 1;
        while((VAR_4 = FUNC_3(VAR_0,&VAR_2,VAR_5)) != ((void*)0)) {
            VAR_5++;
            if (FUNC_7(VAR_1,VAR_4) == 0) {
                FUNC_1(VAR_0,"<value> ");
                FUNC_5(VAR_0,1);
                return;
            } else {
                FUNC_5(VAR_0,1);
            }
        }
    }


    if (!FUNC_7(VAR_1,"ARGV") || !FUNC_7(VAR_1,"KEYS")) {
        FUNC_2(VAR_0, VAR_1);
        FUNC_1(VAR_0,"<value> ");
        FUNC_5(VAR_0,1);
    } else {
        FUNC_0(FUNC_6("No such variable."));
    }
}
