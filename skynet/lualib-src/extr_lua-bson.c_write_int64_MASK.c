
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct bson {int* ptr; int size; } ;
typedef int int64_t ;


 int FUNC_0 (struct bson*,int) ;

__attribute__((used)) static inline void
FUNC_1(struct bson *VAR_0, int64_t VAR_1) {
 uint64_t VAR_2 = (uint64_t)VAR_1;
 int VAR_3;
 FUNC_0(VAR_0,8);
 for (VAR_3=0;VAR_3<64;VAR_3+=8) {
  VAR_0->ptr[VAR_0->size++] = (VAR_2>>VAR_3) & 0xff;
 }
}
