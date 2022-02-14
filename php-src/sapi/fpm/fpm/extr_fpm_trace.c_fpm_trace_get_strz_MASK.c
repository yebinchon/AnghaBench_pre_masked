
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 scalar_t__ FUNC_0 (long,long*) ;

int FUNC_1(char *VAR_1, size_t VAR_2, long VAR_3)
{
 int VAR_4;
 long VAR_5 = VAR_3;
 char *VAR_6 = (char *) &VAR_5;

 VAR_4 = VAR_5 % VAR_0;
 VAR_5 -= VAR_4;
 for (VAR_3 = VAR_5; ; VAR_3 += VAR_0) {
  if (0 > FUNC_0(VAR_3, &VAR_5)) {
   return -1;
  }
  for ( ; VAR_4 < VAR_0; VAR_4++) {
   --VAR_2;
   if (VAR_2 && VAR_6[VAR_4]) {
    *VAR_1++ = VAR_6[VAR_4];
    continue;
   }
   *VAR_1 = '\0';
   return 0;
  }
  VAR_4 = 0;
 }
}
