
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char ut8 ;



__attribute__((used)) static int FUNC_0 (const ut8 *VAR_0, int VAR_1, char VAR_2) {
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3] != VAR_2) {
   break;
  }
 }
 return VAR_3;
}
