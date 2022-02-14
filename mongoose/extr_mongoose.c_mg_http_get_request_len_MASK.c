
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, int VAR_1) {
  const unsigned char *VAR_2 = (unsigned char *) VAR_0;
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
    if (!FUNC_0(VAR_2[VAR_3]) && VAR_2[VAR_3] != '\r' && VAR_2[VAR_3] != '\n' && VAR_2[VAR_3] < 128) {
      return -1;
    } else if (VAR_2[VAR_3] == '\n' && VAR_3 + 1 < VAR_1 && VAR_2[VAR_3 + 1] == '\n') {
      return VAR_3 + 2;
    } else if (VAR_2[VAR_3] == '\n' && VAR_3 + 2 < VAR_1 && VAR_2[VAR_3 + 1] == '\r' &&
               VAR_2[VAR_3 + 2] == '\n') {
      return VAR_3 + 3;
    }
  }

  return 0;
}
