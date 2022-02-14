
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mrb_bool ;


 scalar_t__ FUNC_0 (char const,char const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_1 (char const*,char const*) ;

__attribute__((used)) static const char *
FUNC_2(const char *VAR_2, const char *VAR_3,
                  const char *VAR_4, const char *VAR_5)
{
  mrb_bool VAR_6 = VAR_0, VAR_7 = VAR_0;

  if (VAR_2 == VAR_3) return ((void*)0);
  if (*VAR_2 == '!' || *VAR_2 == '^') {
    VAR_7 = VAR_1;
    ++VAR_2;
  }

  while (*VAR_2 != ']') {
    const char *VAR_8 = VAR_2;
    if ((VAR_8 = FUNC_1(VAR_8, VAR_3)) == VAR_3) return ((void*)0);
    if ((VAR_2 = VAR_8 + 1) == VAR_3) return ((void*)0);
    if (VAR_2[0] == '-' && VAR_2[1] != ']') {
      const char *VAR_9 = VAR_2 + 1;
      if ((VAR_9 = FUNC_1(VAR_9, VAR_3)) == VAR_3) return ((void*)0);
      VAR_2 = VAR_9 + 1;
      if (!VAR_6 && FUNC_0(*VAR_8, *VAR_4) <= 0 && FUNC_0(*VAR_4, *VAR_9) <= 0) VAR_6 = VAR_1;
    }
    else {
      if (!VAR_6 && FUNC_0(*VAR_8, *VAR_4) == 0) VAR_6 = VAR_1;
    }
  }

  return VAR_6 == VAR_7 ? ((void*)0) : VAR_2 + 1;
}
