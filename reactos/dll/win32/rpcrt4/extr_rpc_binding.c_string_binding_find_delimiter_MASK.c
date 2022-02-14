
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const unsigned char *FUNC_0(
    const unsigned char *VAR_0, unsigned char VAR_1)
{
  const unsigned char *VAR_2;
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
