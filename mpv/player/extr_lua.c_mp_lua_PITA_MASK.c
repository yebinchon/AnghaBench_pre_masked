
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 void** FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,char*) ;
 int FUNC_5 (int *,int) ;
 void* FUNC_6 (int *) ;

__attribute__((used)) static void *FUNC_7(lua_State *VAR_1)
{
    void **VAR_2 = FUNC_1(VAR_1, sizeof(void *));
    if (FUNC_0(VAR_1, "ohthispain")) {
        FUNC_3(VAR_1, -1);
        FUNC_4(VAR_1, -2, "__index");
        FUNC_2(VAR_1, VAR_0);
        FUNC_4(VAR_1, -2, "__gc");
    }
    FUNC_5(VAR_1, -2);
    *VAR_2 = FUNC_6(((void*)0));
    return *VAR_2;
}
