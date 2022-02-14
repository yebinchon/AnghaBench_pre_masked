
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0 (unsigned VAR_0)
{
  int VAR_1;

  if (VAR_0 == 0)
    return -1;

  for (VAR_1 = 0; (VAR_0 & 1) == 0; VAR_1++)
    VAR_0 >>= 1;

  if (VAR_0 != 1)
    return -1;

  return VAR_1;
}
