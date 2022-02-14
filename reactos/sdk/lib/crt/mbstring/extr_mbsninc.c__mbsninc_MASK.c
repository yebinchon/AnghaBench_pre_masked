
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char const) ;

unsigned char * FUNC_1(const unsigned char *VAR_0, size_t VAR_1)
{
  if(!VAR_0)
    return ((void*)0);

  while (VAR_1 > 0 && *VAR_0)
  {
    if (FUNC_0(*VAR_0))
    {
      if (!*(VAR_0+1))
         break;
      VAR_0++;
    }
    VAR_0++;
    VAR_1--;
  }

  return (unsigned char*)VAR_0;
}
