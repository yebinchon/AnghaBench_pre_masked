
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {scalar_t__ keytype; int key; } ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char const*,size_t) ;
 char* FUNC_2 (int *,int ,size_t*) ;

__attribute__((used)) static void
FUNC_3(lua_State *VAR_1, lua_State *VAR_2, struct node *VAR_3) {
 if (VAR_3->keytype == VAR_0) {
  FUNC_0(VAR_1, VAR_3->key);
 } else {
  size_t VAR_4 = 0;
  const char * VAR_5 = FUNC_2(VAR_2, VAR_3->key, &VAR_4);
  FUNC_1(VAR_1, VAR_5, VAR_4);
 }
}
