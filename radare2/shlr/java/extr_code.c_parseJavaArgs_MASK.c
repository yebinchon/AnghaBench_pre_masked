
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;


 int FUNC_0 (int *,char*) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, ut64 *VAR_1, int VAR_2) {
 int VAR_3, VAR_4 = -1;
 char *VAR_5, *VAR_6 = FUNC_1 (VAR_0, ' ');
 if (VAR_6) {
  *VAR_6++ = 0;
  VAR_4 ++;
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
   VAR_4 ++;
   VAR_5 = FUNC_1 (VAR_6, ' ');
   if (VAR_5) {
    *VAR_5++ = 0;
   }
   VAR_1[VAR_3] = FUNC_0 (((void*)0), VAR_6);
   if (VAR_5) {
    VAR_6 = VAR_5;
   } else {
    break;
   }
  }
 }
 return VAR_4;
}
