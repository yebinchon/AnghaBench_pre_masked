
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmask {unsigned int size; unsigned int* maskp; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(const struct bitmask *VAR_1, unsigned int VAR_2)
{
 if (VAR_2 < VAR_1->size)
  return (VAR_1->maskp[VAR_2/VAR_0] >> (VAR_2 % VAR_0)) & 1;
 else
  return 0;
}
