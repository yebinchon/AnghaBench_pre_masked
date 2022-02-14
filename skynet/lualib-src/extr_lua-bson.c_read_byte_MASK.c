
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bson_reader {int* ptr; int size; } ;
typedef int lua_State ;


 int FUNC_0 (int *,struct bson_reader*,int) ;

__attribute__((used)) static inline int
FUNC_1(lua_State *VAR_0, struct bson_reader *VAR_1) {
 FUNC_0(VAR_0, VAR_1, 1);
 const uint8_t * VAR_2 = VAR_1->ptr;
 int VAR_3 = VAR_2[0];
 ++VAR_1->ptr;
 --VAR_1->size;

 return VAR_3;
}
