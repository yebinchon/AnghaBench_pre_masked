
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RBuffer ;


 int VAR_0 ;
 char FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(char* VAR_1, RBuffer *VAR_2, int VAR_3) {
 int VAR_4 = 0;
 while (VAR_4 < VAR_0) {
  char VAR_5 = FUNC_0 (VAR_2, VAR_4);
  VAR_1[VAR_4] = VAR_5;
  if (VAR_5 == '\0') {
   VAR_4 += 1;
   break;
  }
  VAR_4++;
 }
 while (VAR_4 % 4 != 0) { VAR_4++; }
 return VAR_4;
}
