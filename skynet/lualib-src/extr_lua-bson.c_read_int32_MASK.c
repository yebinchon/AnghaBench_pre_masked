
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bson_reader {int* ptr; int size; } ;
typedef int lua_State ;
typedef int int32_t ;


 int FUNC_0 (int *,struct bson_reader*,int) ;

__attribute__((used)) static inline int32_t
FUNC_1(lua_State *VAR_0, struct bson_reader *VAR_1) {
 FUNC_0(VAR_0, VAR_1, 4);
 const uint8_t * VAR_2 = VAR_1->ptr;
 uint32_t VAR_3 = VAR_2[0] | VAR_2[1]<<8 | VAR_2[2]<<16 | VAR_2[3]<<24;
 VAR_1->ptr+=4;
 VAR_1->size-=4;
 return (int32_t)VAR_3;
}
