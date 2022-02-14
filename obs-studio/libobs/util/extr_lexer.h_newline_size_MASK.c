
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static inline int FUNC_1(const char *VAR_0)
{
 if (FUNC_0(VAR_0, "\r\n", 2) == 0 || FUNC_0(VAR_0, "\n\r", 2) == 0)
  return 2;
 else if (*VAR_0 == '\r' || *VAR_0 == '\n')
  return 1;

 return 0;
}
