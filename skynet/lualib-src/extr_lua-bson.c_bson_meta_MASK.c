
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {char* member_0; int * member_1; } ;
typedef TYPE_1__ luaL_Reg ;


 int * VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void
FUNC_5(lua_State *VAR_5) {
 if (FUNC_1(VAR_5, "bson")) {
  luaL_Reg VAR_6[] = {
   { "decode", VAR_0 },
   { "makeindex", VAR_2 },
   { ((void*)0), ((void*)0) },
  };
  FUNC_0(VAR_5,VAR_6);
  FUNC_3(VAR_5, -2, "__index");
  FUNC_2(VAR_5, VAR_4);
  FUNC_3(VAR_5, -2, "__tostring");
  FUNC_2(VAR_5, VAR_1);
  FUNC_3(VAR_5, -2, "__len");
  FUNC_2(VAR_5, VAR_3);
  FUNC_3(VAR_5, -2, "__newindex");
 }
 FUNC_4(VAR_5, -2);
}
