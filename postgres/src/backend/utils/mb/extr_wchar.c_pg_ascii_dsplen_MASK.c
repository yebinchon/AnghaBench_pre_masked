
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const unsigned char *VAR_0)
{
 if (*VAR_0 == '\0')
  return 0;
 if (*VAR_0 < 0x20 || *VAR_0 == 0x7f)
  return -1;

 return 1;
}
