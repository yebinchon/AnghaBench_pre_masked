
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut8 ;
typedef scalar_t__ unichar ;



__attribute__((used)) static int FUNC_0(const ut8 *VAR_0, const unichar *VAR_1, size_t VAR_2) {
 size_t VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_0[VAR_3] != VAR_1[VAR_3]) {
   return 0;
  }
 }
 return VAR_0[VAR_3]? 0: 1;
}
