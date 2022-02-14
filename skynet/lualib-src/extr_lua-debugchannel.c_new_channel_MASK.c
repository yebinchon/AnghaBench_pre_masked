
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct channel_box {struct channel* c; } ;
struct channel {int dummy; } ;
typedef int lua_State ;
struct TYPE_3__ {char* member_0; int * member_1; } ;
typedef TYPE_1__ luaL_Reg ;


 int VAR_0 ;
 struct channel* FUNC_0 (struct channel*) ;
 struct channel* FUNC_1 () ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 struct channel_box* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int,char*) ;
 int FUNC_8 (int *,int) ;
 int * VAR_3 ;

__attribute__((used)) static struct channel *
FUNC_9(lua_State *VAR_4, struct channel *VAR_5) {
 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_1();
 } else {
  VAR_5 = FUNC_0(VAR_5);
 }
 if (VAR_5 == ((void*)0)) {
  FUNC_2(VAR_4, "new channel failed");

 }
 struct channel_box * VAR_6 = FUNC_5(VAR_4, sizeof(*VAR_6));
 VAR_6->c = VAR_5;
 if (FUNC_4(VAR_4, VAR_0)) {
  luaL_Reg VAR_7[]={
   { "read", VAR_1 },
   { "write", VAR_3 },
   { ((void*)0), ((void*)0) },
  };
  FUNC_3(VAR_4,VAR_7);
  FUNC_7(VAR_4, -2, "__index");
  FUNC_6(VAR_4, VAR_2);
  FUNC_7(VAR_4, -2, "__gc");
 }
 FUNC_8(VAR_4, -2);
 return VAR_5;
}
