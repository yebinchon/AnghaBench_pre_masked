
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;
typedef int lua_State ;


 int FUNC_0 (int *,int ,int ,char*) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

void FUNC_7(lua_State *VAR_0) {
    char *VAR_1[32];
    sds VAR_2 = FUNC_3();
    int VAR_3 = 0;



    VAR_1[VAR_3++]="local dbg=debug\n";
    VAR_1[VAR_3++]="local mt = {}\n";
    VAR_1[VAR_3++]="setmetatable(_G, mt)\n";
    VAR_1[VAR_3++]="mt.__newindex = function (t, n, v)\n";
    VAR_1[VAR_3++]="  if dbg.getinfo(2) then\n";
    VAR_1[VAR_3++]="    local w = dbg.getinfo(2, \"S\").what\n";
    VAR_1[VAR_3++]="    if w ~= \"main\" and w ~= \"C\" then\n";
    VAR_1[VAR_3++]="      error(\"Script attempted to create global variable '\"..tostring(n)..\"'\", 2)\n";
    VAR_1[VAR_3++]="    end\n";
    VAR_1[VAR_3++]="  end\n";
    VAR_1[VAR_3++]="  rawset(t, n, v)\n";
    VAR_1[VAR_3++]="end\n";
    VAR_1[VAR_3++]="mt.__index = function (t, n)\n";
    VAR_1[VAR_3++]="  if dbg.getinfo(2) and dbg.getinfo(2, \"S\").what ~= \"C\" then\n";
    VAR_1[VAR_3++]="    error(\"Script attempted to access nonexistent global variable '\"..tostring(n)..\"'\", 2)\n";
    VAR_1[VAR_3++]="  end\n";
    VAR_1[VAR_3++]="  return rawget(t, n)\n";
    VAR_1[VAR_3++]="end\n";
    VAR_1[VAR_3++]="debug = nil\n";
    VAR_1[VAR_3++]=((void*)0);

    for (VAR_3 = 0; VAR_1[VAR_3] != ((void*)0); VAR_3++) VAR_2 = FUNC_2(VAR_2,VAR_1[VAR_3],FUNC_6(VAR_1[VAR_3]));
    FUNC_0(VAR_0,VAR_2,FUNC_5(VAR_2),"@enable_strict_lua");
    FUNC_1(VAR_0,0,0,0);
    FUNC_4(VAR_2);
}
