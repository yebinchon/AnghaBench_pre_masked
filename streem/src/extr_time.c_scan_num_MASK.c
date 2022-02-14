
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

__attribute__((used)) static int
FUNC_1(const char** VAR_0, const char* VAR_1)
{
  const char* VAR_2 = *VAR_0;
  int VAR_3 = 0;

  while (VAR_2 < VAR_1) {
    int VAR_4 = FUNC_0(*VAR_2);
    if (VAR_4>9) {
      if (VAR_2 == *VAR_0) return -1;
      *VAR_0 = VAR_2;
      return VAR_3;
    }
    VAR_2++;
    VAR_3 = 10*VAR_3 + VAR_4;
  }
  *VAR_0 = VAR_2;
  return VAR_3;
}
