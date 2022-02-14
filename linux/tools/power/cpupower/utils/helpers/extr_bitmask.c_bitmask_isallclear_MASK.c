
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmask {unsigned int size; } ;


 scalar_t__ FUNC_0 (struct bitmask const*,unsigned int) ;

int FUNC_1(const struct bitmask *VAR_0)
{
 unsigned int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->size; VAR_1++)
  if (FUNC_0(VAR_0, VAR_1))
   return 0;
 return 1;
}
