
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bson {int dummy; } ;
typedef int lua_State ;




 int FUNC_0 (struct bson*,int *,char const*,size_t,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int,size_t*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void
FUNC_5(lua_State *VAR_0, struct bson *VAR_1, int VAR_2, int VAR_3) {
 const char * VAR_4 = ((void*)0);
 size_t VAR_5;
 switch(VAR_3) {
 case 129:
  FUNC_1(VAR_0, "Bson dictionary's key can't be number");
  break;
 case 128:
  VAR_4 = FUNC_3(VAR_0,-2,&VAR_5);
  FUNC_0(VAR_1, VAR_0, VAR_4, VAR_5, VAR_2);
  FUNC_2(VAR_0,1);
  break;
 default:
  FUNC_1(VAR_0, "Invalid key type : %s", FUNC_4(VAR_0, VAR_3));
  return;
 }
}
