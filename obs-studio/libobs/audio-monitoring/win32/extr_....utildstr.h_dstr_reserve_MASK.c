
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {size_t const len; char* array; size_t capacity; } ;


 scalar_t__ FUNC_0 (char*,size_t const) ;

__attribute__((used)) static inline void FUNC_1(struct dstr *VAR_0, const size_t VAR_1)
{
 if (VAR_1 == 0 || VAR_1 <= VAR_0->len)
  return;

 VAR_0->array = (char *)FUNC_0(VAR_0->array, VAR_1);
 VAR_0->capacity = VAR_1;
}
