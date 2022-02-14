
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef int temp ;
struct dstr {int dummy; } ;
typedef int HWND ;


 scalar_t__ FUNC_0 (int ,scalar_t__*,int) ;
 int FUNC_1 (struct dstr*,scalar_t__*) ;

void FUNC_2(struct dstr *VAR_0, HWND VAR_1)
{
 wchar_t VAR_2[256];

 VAR_2[0] = 0;
 if (FUNC_0(VAR_1, VAR_2, sizeof(VAR_2) / sizeof(wchar_t)))
  FUNC_1(VAR_0, VAR_2);
}
