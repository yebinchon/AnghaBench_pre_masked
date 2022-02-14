
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bson {int* ptr; } ;
typedef int int32_t ;



__attribute__((used)) static inline void
FUNC_0(struct bson *VAR_0, int32_t VAR_1, int VAR_2) {
 uint32_t VAR_3 = (uint32_t)VAR_1;
 VAR_0->ptr[VAR_2++] = VAR_3 & 0xff;
 VAR_0->ptr[VAR_2++] = (VAR_3 >> 8)&0xff;
 VAR_0->ptr[VAR_2++] = (VAR_3 >> 16)&0xff;
 VAR_0->ptr[VAR_2++] = (VAR_3 >> 24)&0xff;
}
