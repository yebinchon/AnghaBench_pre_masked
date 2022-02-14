
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,int ,long*) ;
 int FUNC_2 (char*,int ,unsigned long*) ;

__attribute__((used)) static int FUNC_3(char *VAR_1, unsigned long *VAR_2)
{
 if (FUNC_0(VAR_1[0]))
  return FUNC_2(VAR_1, 0, VAR_2);
 else if (VAR_1[0] == '-')
  return FUNC_1(VAR_1, 0, (long *)VAR_2);
 else if (VAR_1[0] == '+')
  return FUNC_1(VAR_1 + 1, 0, (long *)VAR_2);
 return -VAR_0;
}
