
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpv_format ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int,char*,char const**) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static mpv_format FUNC_3(lua_State *VAR_5, int VAR_6)
{
    if (FUNC_2(VAR_5, VAR_6))
        return VAR_3;
    const char *VAR_7[] = {"none", "native", "bool", "string", "number", ((void*)0)};
    switch (FUNC_1(VAR_5, VAR_6, "none", VAR_7)) {
    case 0: return VAR_3;
    case 1: return VAR_2;
    case 2: return VAR_1;
    case 3: return VAR_4;
    case 4: return VAR_0;
    }
    FUNC_0();
}
