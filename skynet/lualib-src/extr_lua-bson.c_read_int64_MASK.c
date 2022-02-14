
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct bson_reader {int* ptr; int size; } ;
typedef int lua_State ;
typedef int int64_t ;


 int FUNC_0 (int *,struct bson_reader*,int) ;

__attribute__((used)) static inline int64_t
FUNC_1(lua_State *VAR_0, struct bson_reader *VAR_1) {
 FUNC_0(VAR_0, VAR_1, 8);
 const uint8_t * VAR_2 = VAR_1->ptr;
 uint32_t VAR_3 = VAR_2[0] | VAR_2[1]<<8 | VAR_2[2]<<16 | VAR_2[3]<<24;
 uint32_t VAR_4 = VAR_2[4] | VAR_2[5]<<8 | VAR_2[6]<<16 | VAR_2[7]<<24;
 uint64_t VAR_5 = (uint64_t)VAR_3 | (uint64_t)VAR_4<<32;
 VAR_1->ptr+=8;
 VAR_1->size-=8;
 return (int64_t)VAR_5;
}
