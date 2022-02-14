
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int conc ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

void FUNC_4(char *VAR_0[]) {
 if (VAR_0[0] == ((void*)0)) {
  return;
 }
 char *VAR_1 = FUNC_1 (500);
 if (!VAR_1) {
  return;
 }
 VAR_1[0] = 0;
 int VAR_2;
 int VAR_3 = 0;
 int VAR_4, VAR_5 = 0;
 int VAR_6;
 for (VAR_6 = 1; VAR_0[VAR_6] != ((void*)0); VAR_6++) {
  ;
 }

 for (VAR_2 = 0; VAR_0[VAR_2]; VAR_2++) {
  if (VAR_3) {
   FUNC_2 (VAR_1, ", ");
   FUNC_2 (VAR_1, VAR_0[VAR_2]);
  }
  if (VAR_0[VAR_2][0] == '{') {
   VAR_3 = 1;
   FUNC_2 (VAR_1, VAR_0[VAR_2]);
   VAR_4 = VAR_2;
  }
  if ((VAR_3) & (VAR_0[VAR_2][FUNC_3 (VAR_0[VAR_2]) - 1] == '}')) {
   VAR_3 = 0;
   VAR_5 = VAR_2;
  }
 }
 if (VAR_5 == 0) {
  FUNC_0 (VAR_1);
  return;
 }
 VAR_0[VAR_4] = VAR_1;
 for (VAR_2 = VAR_4 + 1; VAR_2 < VAR_6; VAR_2++) {
  VAR_0[VAR_2] = VAR_0[(VAR_5-VAR_4) + VAR_2];
 }
 VAR_0[VAR_2] = ((void*)0);
}
