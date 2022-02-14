
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bson {int* ptr; int size; } ;
typedef int int32_t ;


 int FUNC_0 (struct bson*,int) ;

__attribute__((used)) static inline void
FUNC_1(struct bson *VAR_0, int32_t VAR_1) {
 uint32_t VAR_2 = (uint32_t)VAR_1;
 FUNC_0(VAR_0,4);
 VAR_0->ptr[VAR_0->size++] = VAR_2 & 0xff;
 VAR_0->ptr[VAR_0->size++] = (VAR_2 >> 8)&0xff;
 VAR_0->ptr[VAR_0->size++] = (VAR_2 >> 16)&0xff;
 VAR_0->ptr[VAR_0->size++] = (VAR_2 >> 24)&0xff;
}
