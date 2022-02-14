
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {size_t len; scalar_t__ array; } ;


 int FUNC_0 (struct dstr*,size_t) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;

void FUNC_2(struct dstr *VAR_0, const struct dstr *VAR_1)
{
 size_t VAR_2;
 if (!VAR_1->len)
  return;

 VAR_2 = VAR_0->len + VAR_1->len;

 FUNC_0(VAR_0, VAR_2 + 1);
 FUNC_1(VAR_0->array + VAR_0->len, VAR_1->array, VAR_1->len + 1);
 VAR_0->len = VAR_2;
}
