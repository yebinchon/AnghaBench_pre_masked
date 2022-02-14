
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_state ;
typedef int mrb_int ;
typedef int mrb_bool ;


 int FUNC_0 (char*,char const*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (char const*,int,char const*,int) ;

__attribute__((used)) static mrb_bool
FUNC_4(mrb_state *VAR_1,
            const char *VAR_2, mrb_int VAR_3,
            const char *VAR_4, mrb_int VAR_5)
{
  const char *VAR_6 = VAR_2, *VAR_7 = VAR_2 + VAR_3;
  const char *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
  int VAR_10 = 0;
  mrb_bool VAR_11 = VAR_0;

  for (; VAR_6 != VAR_7; ++VAR_6) {
    if (*VAR_6 == '{' && VAR_10++ == 0) VAR_8 = VAR_6;
    else if (*VAR_6 == '}' && VAR_8 && --VAR_10 == 0) { VAR_9 = VAR_6; break; }
    else if (*VAR_6 == '\\' && ++VAR_6 == VAR_7) break;
  }

  if (VAR_8 && VAR_9) {

    char *VAR_12 = (char *)FUNC_2(VAR_1, VAR_3-2);
    char *VAR_13 = VAR_12;

    FUNC_0(VAR_13, VAR_2, VAR_8-VAR_2);
    VAR_6 = VAR_8;
    while (VAR_6 < VAR_9) {
      char *VAR_14 = VAR_13;
      const char *VAR_15 = ++VAR_6;
      for (VAR_10 = 0; VAR_6 < VAR_9 && !(*VAR_6 == ',' && VAR_10 == 0); ++VAR_6) {
        if (*VAR_6 == '{') ++VAR_10;
        else if (*VAR_6 == '}') --VAR_10;
        else if (*VAR_6 == '\\' && ++VAR_6 == VAR_9) break;
      }
      FUNC_0(VAR_13, VAR_15, VAR_6-VAR_15);
      FUNC_0(VAR_13, VAR_9+1, VAR_7-VAR_9-1);
      if ((VAR_11 = FUNC_4(VAR_1, VAR_12, VAR_13-VAR_12, VAR_4, VAR_5))) break;
      VAR_13 = VAR_14;
    }
    FUNC_1(VAR_1, VAR_12);
  }
  else if (!VAR_8 && !VAR_9) {
    VAR_11 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
  }

  return VAR_11;
}
