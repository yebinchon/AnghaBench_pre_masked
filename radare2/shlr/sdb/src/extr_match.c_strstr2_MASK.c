
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(const char *VAR_0, const char *VAR_1, int VAR_2) {
 int VAR_3, VAR_4;
 for (VAR_3 = VAR_4 = 0; VAR_0[VAR_3] && VAR_1[VAR_4] && VAR_4 < VAR_2; VAR_3++) {
  if (VAR_0[VAR_3] == VAR_1[VAR_4]) {
   VAR_4++;
  } else {
   VAR_4 = 0;
  }
 }
 return VAR_4 == VAR_2;
}
