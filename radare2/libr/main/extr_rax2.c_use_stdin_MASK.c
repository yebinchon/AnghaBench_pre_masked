
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int FUNC_4() {
 char *VAR_2 = FUNC_0 (1, VAR_0 + 1);
 int VAR_3;
 if (!VAR_2) {
  return 0;
 }
 if (!(VAR_1 & (1<<14))) {
  for (VAR_3 = 0; VAR_3 >= 0 && VAR_3 < VAR_0; VAR_3++) {

   int VAR_4 = FUNC_3 (0, VAR_2 + VAR_3, VAR_0 - VAR_3);
   if (VAR_4 < 1) {
    break;
   }
   VAR_3 += VAR_4;
   if (VAR_2[VAR_3 - 1] == 0) {
    VAR_3--;
    continue;
   }
   VAR_2[VAR_4] = 0;

   VAR_2[VAR_0] = '\0';
   if (!FUNC_2 (VAR_2, VAR_3, 0)) {
    break;
   }
   VAR_3 = -1;
  }
 } else {
  VAR_3 = 1;
 }
 if (VAR_3 > 0) {
  FUNC_2 (VAR_2, VAR_3, 0);
 }
 FUNC_1 (VAR_2);
 return 0;
}
