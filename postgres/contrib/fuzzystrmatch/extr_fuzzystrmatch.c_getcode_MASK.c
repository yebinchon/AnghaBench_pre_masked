
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 char FUNC_1 (unsigned char) ;

__attribute__((used)) static int
FUNC_2(char VAR_1)
{
 if (FUNC_0((unsigned char) VAR_1))
 {
  VAR_1 = FUNC_1((unsigned char) VAR_1);

  if (VAR_1 >= 'A' && VAR_1 <= 'Z')
   return VAR_0[VAR_1 - 'A'];
 }
 return 0;
}
