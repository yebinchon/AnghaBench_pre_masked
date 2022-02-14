
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 unsigned int FUNC_2 (char const*,unsigned int) ;

int FUNC_3(const char *VAR_2, unsigned int VAR_3)
{
 if (VAR_2[0] == '\0')
  return -VAR_0;

 if (FUNC_2(VAR_2, VAR_3) == VAR_3)
  return -VAR_1;

 if (FUNC_1(VAR_2, ".") == 0 ||
     FUNC_1(VAR_2, "..") == 0 ||
     FUNC_0(VAR_2, '/'))
  return -VAR_0;

 return 0;
}
