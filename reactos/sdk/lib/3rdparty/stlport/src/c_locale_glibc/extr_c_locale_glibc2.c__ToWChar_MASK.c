
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;



__attribute__((used)) static wchar_t* FUNC_0(const char* VAR_0, wchar_t *VAR_1, size_t VAR_2) {
  wchar_t *VAR_3 = VAR_1;
  wchar_t *VAR_4 = VAR_1 + VAR_2 - 1;
  for (; VAR_3 != VAR_4 && *VAR_0 != 0; ++VAR_0, ++VAR_3)
    *VAR_3 = *VAR_0;
  *VAR_3 = 0;
  return VAR_1;
}
