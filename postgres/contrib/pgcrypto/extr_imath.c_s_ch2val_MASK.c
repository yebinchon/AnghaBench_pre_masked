
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 char FUNC_2 (unsigned char) ;

__attribute__((used)) static int
FUNC_3(char VAR_0, int VAR_1)
{
 int VAR_2;







 if (FUNC_1((unsigned char) VAR_0))
  VAR_2 = VAR_0 - '0';
 else if (VAR_1 > 10 && FUNC_0((unsigned char) VAR_0))
  VAR_2 = FUNC_2((unsigned char) VAR_0) - 'A' + 10;
 else
  return -1;

 return (VAR_2 >= VAR_1) ? -1 : VAR_2;
}
