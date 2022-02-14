
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static inline char *
FUNC_3 (const char *VAR_0)
{
  char *VAR_1, *VAR_2;

  FUNC_0 (0 == FUNC_2 (VAR_0, "test_", 5));
  VAR_0 += 4;

  VAR_1 = FUNC_1 (VAR_0);
  for (VAR_2 = VAR_1; *VAR_2; VAR_2++)
    if (*VAR_2 == '_')
      *VAR_2 = '/';

  return VAR_1;
}
