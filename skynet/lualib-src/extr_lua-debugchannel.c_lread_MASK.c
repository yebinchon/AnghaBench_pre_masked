
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {int sz; } ;
struct channel_box {int c; } ;
typedef int lua_State ;


 int VAR_0 ;
 struct command* FUNC_0 (int ,double) ;
 int FUNC_1 (struct command*) ;
 struct channel_box* FUNC_2 (int *,int,int ) ;
 double FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,char const*,int ) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_1) {
 struct channel_box *VAR_2 = FUNC_2(VAR_1,1, VAR_0);
 double VAR_3 = FUNC_3(VAR_1, 2, 0);
 struct command * VAR_4 = FUNC_0(VAR_2->c, VAR_3);
 if (VAR_4 == ((void*)0))
  return 0;
 FUNC_4(VAR_1, (const char *)(VAR_4+1), VAR_4->sz);
 FUNC_1(VAR_4);
 return 1;
}
