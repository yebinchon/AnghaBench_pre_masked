
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct calldata {size_t capacity; int fixed; scalar_t__ size; int * stack; } ;


 int FUNC_0 (struct calldata*) ;

__attribute__((used)) static inline void FUNC_1(struct calldata *VAR_0, uint8_t *VAR_1,
           size_t VAR_2)
{
 VAR_0->stack = VAR_1;
 VAR_0->capacity = VAR_2;
 VAR_0->fixed = 1;
 VAR_0->size = 0;
 FUNC_0(VAR_0);
}
