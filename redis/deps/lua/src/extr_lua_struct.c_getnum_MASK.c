
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1 (const char **VAR_0, int VAR_1) {
  if (!FUNC_0(**VAR_0))
    return VAR_1;
  else {
    int VAR_2 = 0;
    do {
      VAR_2 = VAR_2*10 + *((*VAR_0)++) - '0';
    } while (FUNC_0(**VAR_0));
    return VAR_2;
  }
}
