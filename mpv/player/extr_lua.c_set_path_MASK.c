
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {int global; } ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int,char*) ;
 char* FUNC_6 (int *,int) ;
 char** FUNC_7 (void*,int ,char*) ;
 int FUNC_8 (void*,char*,char*) ;
 char* FUNC_9 (char*,char*,int ) ;
 int FUNC_10 (void*) ;
 void* FUNC_11 (int *) ;
 char* FUNC_12 (void*,char const*) ;

__attribute__((used)) static void FUNC_13(lua_State *VAR_0)
{
    void *VAR_1 = FUNC_11(((void*)0));

    FUNC_2(VAR_0, "package");
    FUNC_1(VAR_0, -1, "path");
    const char *VAR_2 = FUNC_6(VAR_0, -1);

    char *VAR_3 = FUNC_12(VAR_1, VAR_2 ? VAR_2 : "");
    char **VAR_4 = FUNC_7(VAR_1, FUNC_0(VAR_0)->global, "scripts");
    for (int VAR_5 = 0; VAR_4 && VAR_4[VAR_5]; VAR_5++) {
        VAR_3 = FUNC_9(VAR_3, ";%s",
                        FUNC_8(VAR_1, VAR_4[VAR_5], "?.lua"));
    }

    FUNC_4(VAR_0, VAR_3);
    FUNC_5(VAR_0, -3, "path");
    FUNC_3(VAR_0, 2);

    FUNC_10(VAR_1);
}
