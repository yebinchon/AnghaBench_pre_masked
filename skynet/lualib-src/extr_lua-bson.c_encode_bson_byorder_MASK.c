
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bson {int size; int ptr; } ;
typedef int lua_State ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 struct bson* FUNC_3 (int *,int) ;
 int FUNC_4 (void*,int ,int ) ;
 int FUNC_5 (int *,struct bson*,int,int ) ;

__attribute__((used)) static int
FUNC_6(lua_State *VAR_0) {
 int VAR_1 = FUNC_0(VAR_0);
 struct bson *VAR_2 = FUNC_3(VAR_0, VAR_1);
 FUNC_2(VAR_0, --VAR_1);
 FUNC_5(VAR_0, VAR_2, VAR_1, 0);
 FUNC_2(VAR_0,0);
 void * VAR_3 = FUNC_1(VAR_0, VAR_2->size);
 FUNC_4(VAR_3, VAR_2->ptr, VAR_2->size);
 return 1;
}
