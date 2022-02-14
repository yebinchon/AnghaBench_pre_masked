
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;

__attribute__((used)) static char FUNC_2(char VAR_0)
{
 if (FUNC_1(VAR_0))
  return VAR_0 - '0';

 VAR_0 = FUNC_0(VAR_0);
 if (VAR_0 >= 'A' && VAR_0 <= 'F')
  return VAR_0 - 'A' + 10;

 return VAR_0;
}
