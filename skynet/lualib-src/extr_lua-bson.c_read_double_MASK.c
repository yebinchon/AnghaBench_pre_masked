
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct bson_reader {int* ptr; int size; } ;
typedef int lua_State ;
typedef double lua_Number ;


 int FUNC_0 (int *,struct bson_reader*,int) ;

__attribute__((used)) static inline lua_Number
FUNC_1(lua_State *VAR_0, struct bson_reader *VAR_1) {
 FUNC_0(VAR_0, VAR_1, 8);
 union {
  uint64_t i;
  double d;
 } VAR_2;
 const uint8_t * VAR_3 = VAR_1->ptr;
 uint32_t VAR_4 = VAR_3[0] | VAR_3[1]<<8 | VAR_3[2]<<16 | VAR_3[3]<<24;
 uint32_t VAR_5 = VAR_3[4] | VAR_3[5]<<8 | VAR_3[6]<<16 | VAR_3[7]<<24;
 VAR_2.i = (uint64_t)VAR_4 | (uint64_t)VAR_5<<32;
 VAR_1->ptr+=8;
 VAR_1->size-=8;
 return VAR_2.d;
}
