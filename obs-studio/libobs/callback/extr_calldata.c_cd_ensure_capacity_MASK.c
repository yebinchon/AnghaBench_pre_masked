
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t capacity; int * stack; scalar_t__ fixed; } ;
typedef TYPE_1__ calldata_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int *,size_t) ;

__attribute__((used)) static inline bool FUNC_2(calldata_t *VAR_1, uint8_t **VAR_2,
          size_t VAR_3)
{
 size_t VAR_4;
 size_t VAR_5;

 if (VAR_3 < VAR_1->capacity)
  return 1;
 if (VAR_1->fixed) {
  FUNC_0(VAR_0, "Tried to go above fixed calldata stack size!");
  return 0;
 }

 VAR_4 = *VAR_2 - VAR_1->stack;

 VAR_5 = VAR_1->capacity * 2;
 if (VAR_5 < VAR_3)
  VAR_5 = VAR_3;

 VAR_1->stack = FUNC_1(VAR_1->stack, VAR_5);
 VAR_1->capacity = VAR_5;

 *VAR_2 = VAR_1->stack + VAR_4;
 return 1;
}
