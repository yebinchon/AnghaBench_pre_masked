
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0)
{




 if (FUNC_0(VAR_0, "UTC") == 0)
  return 50;
 if (FUNC_0(VAR_0, "Etc/UTC") == 0)
  return 40;





 if (FUNC_0(VAR_0, "localtime") == 0 ||
  FUNC_0(VAR_0, "posixrules") == 0)
  return -50;

 return 0;
}
