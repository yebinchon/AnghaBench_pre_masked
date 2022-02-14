
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const,size_t) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;

__attribute__((used)) static const char *FUNC_2 (const char *VAR_0, size_t VAR_1,
                               const char *VAR_2, size_t VAR_3) {
  if (VAR_3 == 0) return VAR_0;
  else if (VAR_3 > VAR_1) return ((void*)0);
  else {
    const char *VAR_4;
    VAR_3--;
    VAR_1 = VAR_1-VAR_3;
    while (VAR_1 > 0 && (VAR_4 = (const char *)FUNC_0(VAR_0, *VAR_2, VAR_1)) != ((void*)0)) {
      VAR_4++;
      if (FUNC_1(VAR_4, VAR_2+1, VAR_3) == 0)
        return VAR_4-1;
      else {
        VAR_1 -= VAR_4-VAR_0;
        VAR_0 = VAR_4;
      }
    }
    return ((void*)0);
  }
}
