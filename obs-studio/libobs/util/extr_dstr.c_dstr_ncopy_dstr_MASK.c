
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {size_t len; size_t capacity; scalar_t__* array; } ;


 scalar_t__* FUNC_0 (scalar_t__*,size_t) ;
 int FUNC_1 (struct dstr*) ;
 size_t FUNC_2 (size_t const,size_t) ;

void FUNC_3(struct dstr *VAR_0, const struct dstr *VAR_1, const size_t VAR_2)
{
 size_t VAR_3;

 if (VAR_0->array)
  FUNC_1(VAR_0);

 if (!VAR_2)
  return;

 VAR_3 = FUNC_2(VAR_2, VAR_1->len);
 VAR_0->array = FUNC_0(VAR_1->array, VAR_3 + 1);
 VAR_0->len = VAR_3;
 VAR_0->capacity = VAR_3 + 1;

 VAR_0->array[VAR_3] = 0;
}
