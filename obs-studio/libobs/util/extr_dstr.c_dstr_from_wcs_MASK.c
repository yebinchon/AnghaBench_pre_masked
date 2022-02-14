
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct dstr {int * array; } ;


 int FUNC_0 (struct dstr*) ;
 int FUNC_1 (struct dstr*,size_t) ;
 size_t FUNC_2 (int const*,int ,int *,size_t,int ) ;

void FUNC_3(struct dstr *VAR_0, const wchar_t *VAR_1)
{
 size_t VAR_2 = FUNC_2(VAR_1, 0, ((void*)0), 0, 0);

 if (VAR_2) {
  FUNC_1(VAR_0, VAR_2);
  FUNC_2(VAR_1, 0, VAR_0->array, VAR_2 + 1, 0);
 } else {
  FUNC_0(VAR_0);
 }
}
