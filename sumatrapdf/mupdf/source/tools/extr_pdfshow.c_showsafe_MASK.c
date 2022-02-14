
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_1, size_t VAR_2)
{
 size_t VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_1[VAR_3] == '\r' || VAR_1[VAR_3] == '\n') {
   FUNC_0('\n');
   VAR_0 = 0;
  }
  else if (VAR_1[VAR_3] < 32 || VAR_1[VAR_3] > 126) {
   FUNC_0('.');
   VAR_0 ++;
  }
  else {
   FUNC_0(VAR_1[VAR_3]);
   VAR_0 ++;
  }
  if (VAR_0 == 79) {
   FUNC_0('\n');
   VAR_0 = 0;
  }
 }
}
