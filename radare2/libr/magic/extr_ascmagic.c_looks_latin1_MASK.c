
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ut8 ;
typedef size_t unichar ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_0(const ut8 *VAR_3, size_t VAR_4, unichar *VAR_5, size_t *VAR_6) {
 size_t VAR_7;
 *VAR_6 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  int VAR_8 = VAR_2[VAR_3[VAR_7]];
  if (VAR_8 != VAR_1 && VAR_8 != VAR_0) {
   return 0;
  }
  VAR_5[(*VAR_6)++] = VAR_3[VAR_7];
 }
 return 1;
}
