
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0, const char *VAR_1)
{
  const char *VAR_2 = VAR_0;
  size_t VAR_3 = FUNC_1(VAR_1);


  while (*VAR_2 && FUNC_0(*VAR_2)) {
    VAR_2++;
  }

  if (FUNC_2(VAR_2, VAR_1, VAR_3) != 0) {
    return 0;
  }
  VAR_2 += VAR_3;

  while (*VAR_2) {
    if (!FUNC_0(*VAR_2)) return 0;
    VAR_2++;
  }
  return 1;
}
