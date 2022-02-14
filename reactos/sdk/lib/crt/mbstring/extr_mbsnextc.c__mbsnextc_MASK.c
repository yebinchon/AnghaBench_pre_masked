
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char const) ;

unsigned int FUNC_1 (const unsigned char *VAR_0)
{
  if(FUNC_0(*VAR_0))
    return *VAR_0 << 8 | VAR_0[1];
  return *VAR_0;
}
