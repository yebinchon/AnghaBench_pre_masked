
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bson_reader {void* ptr; int size; } ;
typedef int lua_State ;


 int FUNC_0 (int *,struct bson_reader*,int) ;

__attribute__((used)) static inline const void *
FUNC_1(lua_State *VAR_0, struct bson_reader *VAR_1, int VAR_2) {
 const void * VAR_3 = VAR_1->ptr;
 FUNC_0(VAR_0, VAR_1, VAR_2);
 VAR_1->ptr+=VAR_2;
 VAR_1->size-=VAR_2;
 return VAR_3;
}
