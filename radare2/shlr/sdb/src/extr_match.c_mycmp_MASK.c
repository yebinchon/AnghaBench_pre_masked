
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 scalar_t__ FUNC_0 (int const) ;

__attribute__((used)) static inline int FUNC_1(const char *VAR_0, const char *VAR_1, int VAR_2, int VAR_3) {
 int VAR_4, VAR_5;
 for (VAR_4 = VAR_5 = 0; VAR_0[VAR_4] && VAR_1[VAR_5] && VAR_5 < VAR_2; VAR_4++) {
  if (FUNC_0 ((const ut8)VAR_0[VAR_4]) == FUNC_0 ((const ut8)VAR_1[VAR_5])) {
   VAR_5++;
  } else {
   if (!VAR_3) {
    return 0;
   }
   VAR_5 = 0;
  }
 }
 return VAR_3? VAR_5 != VAR_2: 1;
}
