
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char* VAR_0) {
 size_t VAR_1 = 0, VAR_2 = 0, VAR_3 = 0;
 int VAR_4 = 0;
 while(1) {
  switch(VAR_0[VAR_1]) {
   case 0: goto done;
   case '.':
    if(!VAR_2 || VAR_4) return 0;
    VAR_3++;
    VAR_4 = 1;
    break;
   case '0': case '1': case '2': case '3': case '4':
   case '5': case '6': case '7': case '8': case '9':
    VAR_2++;
    VAR_4 = 0;
    break;
   default:
    return 0;
  }
  VAR_1++;
 }
 done:
 if(VAR_3 == 3 && VAR_2 >= 4 && VAR_2 <= 12) return 1;
 return 0;
}
