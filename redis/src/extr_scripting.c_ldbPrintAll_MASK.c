
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;
typedef int lua_State ;
typedef int lua_Debug ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 char* FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,char*,char const*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char const*,char*) ;

void FUNC_10(lua_State *VAR_0) {
    lua_Debug VAR_1;
    int VAR_2 = 0;

    if (FUNC_3(VAR_0,0,&VAR_1) != 0) {
        const char *VAR_3;
        int VAR_4 = 1;
        while((VAR_3 = FUNC_2(VAR_0,&VAR_1,VAR_4)) != ((void*)0)) {
            VAR_4++;
            if (!FUNC_9(VAR_3,"(*temporary)")) {
                sds VAR_5 = FUNC_5(FUNC_6(),"<value> %s = ",VAR_3);
                FUNC_1(VAR_0,VAR_5);
                FUNC_7(VAR_5);
                VAR_2++;
            }
            FUNC_4(VAR_0,1);
        }
    }

    if (VAR_2 == 0) {
        FUNC_0(FUNC_8("No local variables in the current context."));
    }
}
