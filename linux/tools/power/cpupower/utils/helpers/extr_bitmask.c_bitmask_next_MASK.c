
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmask {unsigned int size; } ;


 scalar_t__ FUNC_0 (struct bitmask const*,unsigned int) ;

unsigned int FUNC_1(const struct bitmask *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;
 for (VAR_2 = VAR_1; VAR_2 < VAR_0->size; VAR_2++)
  if (FUNC_0(VAR_0, VAR_2))
   break;
 return VAR_2;
}
