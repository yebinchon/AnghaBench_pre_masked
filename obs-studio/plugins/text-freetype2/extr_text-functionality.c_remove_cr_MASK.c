
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;



__attribute__((used)) static void FUNC_0(wchar_t *VAR_0)
{
 int VAR_1 = 0;
 for (int VAR_2 = 0; VAR_0[VAR_2] != '\0'; ++VAR_2) {
  if (VAR_0[VAR_2] != L'\r') {
   VAR_0[VAR_1++] = VAR_0[VAR_2];
  }
 }
 VAR_0[VAR_1] = '\0';
}
