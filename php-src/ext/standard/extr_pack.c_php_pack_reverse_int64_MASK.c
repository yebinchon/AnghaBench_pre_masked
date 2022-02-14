
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef void* uint32_t ;
struct Swap64 {int i; void** ul; } ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static inline uint64_t FUNC_1(uint64_t VAR_0)
{
 union Swap64 {
  uint64_t i;
  uint32_t ul[2];
 } VAR_1, VAR_2;
 VAR_1.i = VAR_0;
 VAR_2.ul[0] = FUNC_0(VAR_1.ul[1]);
 VAR_2.ul[1] = FUNC_0(VAR_1.ul[0]);

 return VAR_2.i;
}
