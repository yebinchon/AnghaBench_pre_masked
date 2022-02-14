
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {char* member_0; int * member_1; } ;
typedef TYPE_1__ luaL_Reg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static void
FUNC_6(lua_State *VAR_7) {
 FUNC_5(VAR_7, "kv");
 FUNC_4(VAR_7, VAR_0, VAR_1);

 FUNC_5(VAR_7, "k");
 FUNC_4(VAR_7, VAR_0, VAR_2);

 FUNC_2(VAR_7);
 FUNC_4(VAR_7, VAR_0, VAR_3);

 FUNC_1(VAR_7, 0, 1);

 FUNC_1(VAR_7, 0, 2);
 luaL_Reg VAR_8[] = {
  { "__index", VAR_4 },
  { "__pairs", VAR_6 },
  { "__len", VAR_5 },
  { ((void*)0), ((void*)0) },
 };
 FUNC_3(VAR_7, -1);
 FUNC_0(VAR_7, VAR_8, 1);
}
