
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_0) {
 int VAR_1 = -1;
 char *VAR_2, *VAR_3, *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = FUNC_2 (VAR_0);
 VAR_2 = FUNC_4 (VAR_4, ":");

 if (!VAR_2 || FUNC_3 (VAR_2) < 2) {
  FUNC_1 (VAR_4);
  return -1;
 }

 VAR_3 = FUNC_4 (((void*)0), ":");






 if (VAR_3 && FUNC_3 (VAR_3) < 2) {



  if (VAR_2[0] == 'r' && VAR_3[0] == 'r') {
   VAR_5 = FUNC_0(VAR_2+1);
   VAR_6 = FUNC_0(VAR_3+1);
   if (VAR_5 > VAR_6 && VAR_6 >= 0 && VAR_6 <= 30) {
    VAR_1 = VAR_6 / 2;
   }
  } else if (VAR_2[0] >= 'x' && VAR_2[0] <= 'z'
    && VAR_3[0] >= 'x' && VAR_3[0] <= 'z'
    && VAR_2[1] == 'h' && VAR_3[1] == 'l') {

   VAR_1 = (2 - ('z' - VAR_2[0])) + 12;
  }
 } else {

  if (VAR_2[0] == 'r') {
   VAR_6 = FUNC_0(VAR_2+1);
   if (VAR_6 >= 0 && VAR_6 <= 30) {
    VAR_1 = VAR_6 / 2;
   }
  } else if (VAR_2[0] >= 'x' && VAR_2[0] <= 'z') {
   VAR_1 = (2 - ('z' - VAR_2[0])) + 12;
  }
 }
 FUNC_1 (VAR_4);
 return VAR_1;
}
