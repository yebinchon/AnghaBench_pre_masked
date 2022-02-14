
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct dstr {int dummy; } ;
typedef int HWND ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct dstr*,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int) ;

void FUNC_5(struct dstr *VAR_0, HWND VAR_1)
{
 wchar_t *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return;

 VAR_2 = FUNC_4(sizeof(wchar_t) * (VAR_3 + 1));
 if (FUNC_1(VAR_1, VAR_2, VAR_3 + 1))
  FUNC_2(VAR_0, VAR_2);
 FUNC_3(VAR_2);
}
