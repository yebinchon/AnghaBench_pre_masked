
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t size; size_t capacity; int * stack; } ;
typedef TYPE_1__ calldata_t ;


 int * FUNC_0 (size_t) ;
 int FUNC_1 (int **,void const*,size_t) ;
 int FUNC_2 (int **,char const*,size_t) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static inline void FUNC_5(calldata_t *VAR_0, const char *VAR_1,
          const void *VAR_2, size_t VAR_3)
{
 uint8_t *VAR_4;
 size_t VAR_5;
 size_t VAR_6 = FUNC_4(VAR_1) + 1;

 VAR_5 = sizeof(size_t) * 3 + VAR_6 + VAR_3;
 VAR_0->size = VAR_5;

 if (VAR_5 < 128)
  VAR_5 = 128;

 VAR_0->capacity = VAR_5;
 VAR_0->stack = FUNC_0(VAR_5);

 VAR_4 = VAR_0->stack;
 FUNC_2(&VAR_4, VAR_1, VAR_6);
 FUNC_1(&VAR_4, VAR_2, VAR_3);
 FUNC_3(VAR_4, 0, sizeof(size_t));
}
