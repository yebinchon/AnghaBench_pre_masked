
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;

char *FUNC_4(char *VAR_0, char *VAR_1, st32 VAR_2) {
 char *VAR_3;
 ut32 VAR_4 = VAR_0? FUNC_3 (VAR_0) : 0;
 ut32 VAR_5 = VAR_1? FUNC_3 (VAR_1) : 0;

 if (!(VAR_3 = (char *)FUNC_1 (VAR_4 + VAR_5 + 1))) {
  return ((void*)0);
 }
 if (VAR_4 > 0) {
  FUNC_2 (VAR_3, VAR_0, VAR_4);
 }
 if (VAR_5 > 0) {
  FUNC_2 (VAR_3 + VAR_4, VAR_1, VAR_5);
 }
 VAR_3[VAR_4 + VAR_5] = '\0';
 if (VAR_2 == 1) {
  FUNC_0 (VAR_0);
 } else if (VAR_2 == 2) {
  FUNC_0 (VAR_1);
 } else if (VAR_2 == 3) {
  FUNC_0 (VAR_0);
  FUNC_0 (VAR_1);
 }
 return VAR_3;
}
