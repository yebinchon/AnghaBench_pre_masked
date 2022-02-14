
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;



__attribute__((used)) static const WCHAR *FUNC_0(
    const WCHAR *VAR_0, WCHAR VAR_1)
{
  const WCHAR *VAR_2;
  for (VAR_2 = VAR_0; *VAR_2; VAR_2++) {
    if (*VAR_2 == '\\') {
      VAR_2++;
      continue;
    }
    if (*VAR_2 == VAR_1)
      return VAR_2;
  }
  return ((void*)0);
}
