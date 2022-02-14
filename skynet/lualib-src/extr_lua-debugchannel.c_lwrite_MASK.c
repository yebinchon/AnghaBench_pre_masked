
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel_box {int c; } ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,size_t) ;
 char* FUNC_1 (int *,int,size_t*) ;
 struct channel_box* FUNC_2 (int *,int,int ) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_1) {
 struct channel_box *VAR_2 = FUNC_2(VAR_1,1, VAR_0);
 size_t VAR_3;
 const char * VAR_4 = FUNC_1(VAR_1, 2, &VAR_3);
 FUNC_0(VAR_2->c, VAR_4, VAR_3);
 return 0;
}
