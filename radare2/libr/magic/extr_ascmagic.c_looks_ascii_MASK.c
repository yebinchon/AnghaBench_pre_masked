
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ut8 ;
typedef size_t unichar ;


 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_0(const ut8 *VAR_2, size_t VAR_3, unichar *VAR_4, size_t *VAR_5) {
 size_t VAR_6;
 *VAR_5 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  int VAR_7 = VAR_1[VAR_2[VAR_6]];
  if (VAR_7 != VAR_0) {
   return 0;
  }
  VAR_4[(*VAR_5)++] = VAR_2[VAR_6];
 }
 return 1;
}
