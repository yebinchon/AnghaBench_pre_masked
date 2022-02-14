
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {size_t len; int array; } ;


 int FUNC_0 (struct dstr*,size_t) ;
 int FUNC_1 (struct dstr*) ;
 int FUNC_2 (int ,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;

void FUNC_4(struct dstr *VAR_0, const char *VAR_1)
{
 size_t VAR_2;

 if (!VAR_1 || !*VAR_1) {
  FUNC_1(VAR_0);
  return;
 }

 VAR_2 = FUNC_3(VAR_1);
 FUNC_0(VAR_0, VAR_2 + 1);
 FUNC_2(VAR_0->array, VAR_1, VAR_2 + 1);
 VAR_0->len = VAR_2;
}
