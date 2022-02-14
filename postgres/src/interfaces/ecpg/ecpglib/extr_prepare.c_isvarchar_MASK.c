
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static bool
FUNC_1(unsigned char VAR_0)
{
 if (FUNC_0(VAR_0))
  return 1;

 if (VAR_0 == '_' || VAR_0 == '>' || VAR_0 == '-' || VAR_0 == '.')
  return 1;

 if (VAR_0 >= 128)
  return 1;

 return 0;
}
