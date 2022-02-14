
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_int ;
typedef int mrb_bool ;


 int VAR_0 ;
 int VAR_1 ;
 char const* FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (char const*,char const*,char const*,char const*) ;

__attribute__((used)) static mrb_bool
FUNC_2(const char *VAR_2, mrb_int VAR_3,
                     const char *VAR_4, mrb_int VAR_5)
{
  const char *VAR_6 = VAR_2, *VAR_7 = VAR_4;
  const char *VAR_8 = VAR_2 + VAR_3, *VAR_9 = VAR_4 + VAR_5;
  const char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);

  for (;;) {
    if (VAR_6 == VAR_8) return VAR_7 == VAR_9;
    switch (*VAR_6) {
      case '*':
        do { ++VAR_6; } while (VAR_6 != VAR_8 && *VAR_6 == '*');
        if (FUNC_0(VAR_6, VAR_8) == VAR_8) return VAR_1;
        if (VAR_7 == VAR_9) return VAR_0;
        VAR_10 = VAR_6;
        VAR_11 = VAR_7;
        continue;
      case '?':
        if (VAR_7 == VAR_9) return VAR_0;
        ++VAR_6;
        ++VAR_7;
        continue;
      case '[': {
        const char *VAR_12;
        if (VAR_7 == VAR_9) return VAR_0;
        if ((VAR_12 = FUNC_1(VAR_6+1, VAR_8, VAR_7, VAR_9))) {
          VAR_6 = VAR_12;
          ++VAR_7;
          continue;
        }
        goto L_failed;
      }
    }


    VAR_6 = FUNC_0(VAR_6, VAR_8);
    if (VAR_7 == VAR_9) return VAR_6 == VAR_8;
    if (VAR_6 == VAR_8) goto L_failed;
    if (*VAR_6++ != *VAR_7++) goto L_failed;
    continue;

    L_failed:
    if (VAR_10 && VAR_11) {

      VAR_6 = VAR_10;
      VAR_7 = ++VAR_11;
      continue;
    }

    return VAR_0;
  }
}
