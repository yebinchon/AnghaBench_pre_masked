
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct dstr {int array; } const dstr ;


 int FUNC_0 (struct dstr const*,size_t const) ;
 int FUNC_1 (int ,int ,size_t const) ;

void FUNC_2(struct dstr *VAR_0, const struct dstr *VAR_1, const size_t VAR_2)
{
 FUNC_0(VAR_0, VAR_2);
 if (VAR_0 != VAR_1)
  FUNC_1(VAR_0->array, VAR_1->array, VAR_2);
}
