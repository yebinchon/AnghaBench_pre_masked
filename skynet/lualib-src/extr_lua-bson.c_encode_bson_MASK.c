
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bson {int size; int ptr; } ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,char*) ;
 void* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 struct bson* FUNC_3 (int *,int) ;
 int FUNC_4 (void*,int ,int ) ;
 int FUNC_5 (int *,struct bson*,int ) ;
 int FUNC_6 (int *,struct bson*,int ) ;

__attribute__((used)) static int
FUNC_7(lua_State *VAR_1) {
 struct bson *VAR_2 = FUNC_3(VAR_1, 2);
 FUNC_2(VAR_1, 1);
 if (FUNC_0(VAR_1, -1, "__pairs") != VAR_0) {
  FUNC_5(VAR_1, VAR_2, 0);
 } else {
  FUNC_6(VAR_1, VAR_2, 0);
 }
 void * VAR_3 = FUNC_1(VAR_1, VAR_2->size);
 FUNC_4(VAR_3, VAR_2->ptr, VAR_2->size);
 return 1;
}
