
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct bson {int* ptr; int size; } ;
typedef int lua_Number ;


 int FUNC_0 (struct bson*,int) ;

__attribute__((used)) static inline void
FUNC_1(struct bson *VAR_0, lua_Number VAR_1) {
 union {
  double d;
  uint64_t i;
 } VAR_2;
 VAR_2.d = VAR_1;
 int VAR_3;
 FUNC_0(VAR_0,8);
 for (VAR_3=0;VAR_3<64;VAR_3+=8) {
  VAR_0->ptr[VAR_0->size++] = (VAR_2.i>>VAR_3) & 0xff;
 }
}
