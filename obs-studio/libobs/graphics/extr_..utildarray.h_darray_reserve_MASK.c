
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct darray {size_t const num; size_t capacity; void* array; } ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (size_t const) ;
 int FUNC_2 (void*,void*,size_t const) ;

__attribute__((used)) static inline void FUNC_3(const size_t VAR_0, struct darray *VAR_1,
      const size_t VAR_2)
{
 void *VAR_3;
 if (VAR_2 == 0 || VAR_2 <= VAR_1->num)
  return;

 VAR_3 = FUNC_1(VAR_0 * VAR_2);
 if (VAR_1->num)
  FUNC_2(VAR_3, VAR_1->array, VAR_0 * VAR_1->num);
 if (VAR_1->array)
  FUNC_0(VAR_1->array);
 VAR_1->array = VAR_3;
 VAR_1->capacity = VAR_2;
}
