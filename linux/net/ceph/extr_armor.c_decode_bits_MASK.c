
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(char VAR_1)
{
 if (VAR_1 >= 'A' && VAR_1 <= 'Z')
  return VAR_1 - 'A';
 if (VAR_1 >= 'a' && VAR_1 <= 'z')
  return VAR_1 - 'a' + 26;
 if (VAR_1 >= '0' && VAR_1 <= '9')
  return VAR_1 - '0' + 52;
 if (VAR_1 == '+')
  return 62;
 if (VAR_1 == '/')
  return 63;
 if (VAR_1 == '=')
  return 0;
 return -VAR_0;
}
