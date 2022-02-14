
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
struct dstr {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct dstr*,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct dstr*) ;
 scalar_t__* FUNC_3 (struct dstr*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

void FUNC_5(struct dstr *VAR_0)
{
 wchar_t *VAR_1;
 wchar_t *VAR_2;

 if (FUNC_2(VAR_0))
  return;

 VAR_1 = FUNC_3(VAR_0);
 VAR_2 = VAR_1;

 if (!VAR_1)
  return;

 while (*VAR_2) {
  *VAR_2 = (wchar_t)FUNC_4(*VAR_2);
  VAR_2++;
 }

 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_1);
}
