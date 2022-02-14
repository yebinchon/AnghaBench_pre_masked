
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 unsigned long long FUNC_1 (char const*,char**,int) ;

unsigned long
FUNC_2 (const char *VAR_1, char **VAR_2, int VAR_3)
{
  unsigned long long VAR_4;

  VAR_4 = FUNC_1 (VAR_1, VAR_2, VAR_3);
  if (VAR_4 > ~0UL)
    {
      FUNC_0 (VAR_0, "overflow is detected");
      return ~0UL;
    }

  return (unsigned long) VAR_4;
}
