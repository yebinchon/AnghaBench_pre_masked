
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(char *VAR_0, int VAR_1)
{
 unsigned int VAR_2 = 0;
 while (VAR_1--)
  VAR_2 = (VAR_2 << 8) | *(unsigned char *)VAR_0++;
 return VAR_2;
}
