
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;

__attribute__((used)) static bool
FUNC_2(const char *VAR_0, const char *VAR_1,
    const char *VAR_2, const char *VAR_3) {
 FUNC_0(VAR_0 <= VAR_1);
 FUNC_0(VAR_2 < VAR_3);

 ptrdiff_t VAR_4 = VAR_1 - VAR_0;
 ptrdiff_t VAR_5 = VAR_3 - VAR_2;

 if (VAR_4 == 1 && *VAR_0 == '.') {
  return 1;
 }
        if (VAR_4 == VAR_5) {
  return FUNC_1(VAR_0, VAR_2, VAR_4) == 0;
 } else if (VAR_4 < VAR_5) {
  return FUNC_1(VAR_0, VAR_2, VAR_4) == 0
      && VAR_2[VAR_4] == '.';
        } else {
  return 0;
 }
}
