
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {size_t len; scalar_t__* array; } ;


 int FUNC_0 (struct dstr*,size_t) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,size_t) ;
 size_t FUNC_2 (size_t const,size_t) ;

void FUNC_3(struct dstr *VAR_0, const struct dstr *VAR_1, const size_t VAR_2)
{
 size_t VAR_3, VAR_4;
 if (!VAR_1->array || !*VAR_1->array || !VAR_2)
  return;

 VAR_4 = FUNC_2(VAR_2, VAR_1->len);
 VAR_3 = VAR_0->len + VAR_4;

 FUNC_0(VAR_0, VAR_3 + 1);
 FUNC_1(VAR_0->array + VAR_0->len, VAR_1->array, VAR_4);

 VAR_0->len = VAR_3;
 VAR_0->array[VAR_3] = 0;
}
