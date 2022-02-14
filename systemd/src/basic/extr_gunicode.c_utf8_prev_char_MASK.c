
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0 (const char *VAR_0)
{
  for (;;)
    {
      VAR_0--;
      if ((*VAR_0 & 0xc0) != 0x80)
        return (char *)VAR_0;
    }
}
