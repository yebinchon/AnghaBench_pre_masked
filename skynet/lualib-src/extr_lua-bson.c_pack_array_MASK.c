
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bson {scalar_t__ size; } ;
typedef int lua_State ;


 int FUNC_0 (struct bson*,int *,char const*,size_t,int) ;
 size_t FUNC_1 (char*,size_t) ;
 int FUNC_2 (int *,int,size_t) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct bson*) ;
 int FUNC_5 (struct bson*,int ) ;
 int FUNC_6 (struct bson*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_7(lua_State *VAR_0, struct bson *VAR_1, int VAR_2, size_t VAR_3) {
 int VAR_4 = FUNC_4(VAR_1);
 size_t VAR_5;
 for (VAR_5=1;VAR_5<=VAR_3;VAR_5++) {
  char VAR_6[32];
  size_t VAR_7 = FUNC_1(VAR_6, VAR_5 - 1);
  const char * VAR_8 = VAR_6;
  FUNC_2(VAR_0, -1, VAR_5);
  FUNC_0(VAR_1, VAR_0, VAR_8, VAR_7, VAR_2);
  FUNC_3(VAR_0, 1);
 }
 FUNC_5(VAR_1,0);
 FUNC_6(VAR_1, VAR_1->size - VAR_4, VAR_4);
}
