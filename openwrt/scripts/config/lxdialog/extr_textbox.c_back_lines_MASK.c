
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;

__attribute__((used)) static void FUNC_0(int VAR_4)
{
 int VAR_5;

 VAR_0 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (*VAR_3 == '\0') {
   if (VAR_2) {
    VAR_2 = 0;
    continue;
   }
  }
  if (VAR_3 == VAR_1) {
   VAR_0 = 1;
   return;
  }
  VAR_3--;
  do {
   if (VAR_3 == VAR_1) {
    VAR_0 = 1;
    return;
   }
   VAR_3--;
  } while (*VAR_3 != '\n');
  VAR_3++;
 }
}
