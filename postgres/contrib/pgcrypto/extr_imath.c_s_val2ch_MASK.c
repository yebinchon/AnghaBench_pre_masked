
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char FUNC_1 (unsigned char) ;

__attribute__((used)) static char
FUNC_2(int VAR_0, int VAR_1)
{
 FUNC_0(VAR_0 >= 0);

 if (VAR_0 < 10)
 {
  return VAR_0 + '0';
 }
 else
 {
  char VAR_2 = (VAR_0 - 10) + 'a';

  if (VAR_1)
  {
   return FUNC_1((unsigned char) VAR_2);
  }
  else
  {
   return VAR_2;
  }
 }
}
