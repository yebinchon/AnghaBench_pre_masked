
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (char*,char*,char const) ;

__attribute__((used)) static char *FUNC_3(const char *VAR_0, size_t VAR_1) {
  size_t VAR_2, VAR_3;
  char *VAR_4 = (char *) FUNC_1(VAR_1 * 4 + 1);
  for (VAR_2 = VAR_3 = 0; VAR_0[VAR_2] != '\0' && VAR_2 < VAR_1; VAR_2++) {
    if (!FUNC_0((int) VAR_0[VAR_2])) {
      VAR_4[VAR_3++] = VAR_0[VAR_2];
    } else {
      VAR_3 += FUNC_2(VAR_4 + VAR_3, "\\x%02x", VAR_0[VAR_2]);
    }
  }
  VAR_4[VAR_3] = '\0';
  return VAR_4;
}
