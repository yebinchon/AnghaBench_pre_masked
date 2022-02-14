
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ut8 ;
typedef size_t unichar ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_0(const ut8 *VAR_4, size_t VAR_5, unichar *VAR_6, size_t *VAR_7) {
 size_t VAR_8;
 *VAR_7 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  int VAR_9 = VAR_3[VAR_4[VAR_8]];
  if (VAR_9 != VAR_1 && VAR_9 != VAR_0 && VAR_9 != VAR_2) {
   return 0;
  }
  VAR_6[(*VAR_7)++] = VAR_4[VAR_8];
 }
 return 1;
}
