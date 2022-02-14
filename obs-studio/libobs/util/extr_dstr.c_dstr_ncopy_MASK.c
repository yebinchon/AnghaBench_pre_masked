
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {size_t len; size_t capacity; scalar_t__* array; } ;


 scalar_t__* FUNC_0 (char const*,size_t const) ;
 int FUNC_1 (struct dstr*) ;

void FUNC_2(struct dstr *VAR_0, const char *VAR_1, const size_t VAR_2)
{
 if (VAR_0->array)
  FUNC_1(VAR_0);

 if (!VAR_2)
  return;

 VAR_0->array = FUNC_0(VAR_1, VAR_2 + 1);
 VAR_0->len = VAR_2;
 VAR_0->capacity = VAR_2 + 1;

 VAR_0->array[VAR_2] = 0;
}
