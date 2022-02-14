
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char FUNC_0 (unsigned char) ;

__attribute__((used)) static char
FUNC_1(char VAR_1)
{
 VAR_1 = FUNC_0((unsigned char) VAR_1);

 if (VAR_1 >= 'A' && VAR_1 <= 'Z')
  return VAR_0[VAR_1 - 'A'];
 return VAR_1;
}
