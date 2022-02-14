
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {size_t len; scalar_t__* array; } ;


 int FUNC_0 (struct dstr*,size_t const) ;
 int FUNC_1 (struct dstr*) ;

__attribute__((used)) static inline void FUNC_2(struct dstr *VAR_0, const size_t VAR_1)
{
 if (!VAR_1) {
  FUNC_1(VAR_0);
  return;
 }

 FUNC_0(VAR_0, VAR_1 + 1);
 VAR_0->array[VAR_1] = 0;
 VAR_0->len = VAR_1;
}
