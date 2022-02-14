
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(char *VAR_1, int VAR_2, int VAR_3)
{
 do {
  if (VAR_3 == '\n')
   return -1;
  VAR_3 = FUNC_0();
 } while (FUNC_1(VAR_3));


 if (VAR_3 != '"')
  return -1;
 VAR_1[VAR_2++] = '.';

 for (;;) {
  int VAR_4 = FUNC_0();

  if (VAR_4 == '\n')
   return -1;
  if (VAR_4 == '"')
   break;
  if (VAR_4 == '\\') {
   VAR_4 = FUNC_0();
   if (VAR_4 == '\n')
    return -1;
  }
  VAR_1[VAR_2++] = VAR_4;
  if (VAR_2 > VAR_0 / 2)
   return -1;
 }


 if (FUNC_0() != ']')
  return -1;
 return VAR_2;
}
