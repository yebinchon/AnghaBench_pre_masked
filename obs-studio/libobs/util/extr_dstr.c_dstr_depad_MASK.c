
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {scalar_t__* array; int len; } ;


 int FUNC_0 (struct dstr*) ;
 scalar_t__* FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;

void FUNC_3(struct dstr *VAR_0)
{
 if (VAR_0->array) {
  VAR_0->array = FUNC_1(VAR_0->array);
  if (*VAR_0->array)
   VAR_0->len = FUNC_2(VAR_0->array);
  else
   FUNC_0(VAR_0);
 }
}
