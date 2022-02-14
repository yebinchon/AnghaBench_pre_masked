
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (char) ;

int FUNC_1(char VAR_0)
{
 if ((VAR_0 >= '0') && (VAR_0 <= '9'))
  return VAR_0 - '0';
 VAR_0 = FUNC_0(VAR_0);
 if ((VAR_0 >= 'a') && (VAR_0 <= 'f'))
  return VAR_0 - 'a' + 10;
 return -1;
}
