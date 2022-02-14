
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmask {unsigned int size; unsigned long* maskp; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct bitmask *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 if (VAR_2 < VAR_1->size) {
  if (VAR_3)
   VAR_1->maskp[VAR_2/VAR_0] |= 1UL << (VAR_2 % VAR_0);
  else
   VAR_1->maskp[VAR_2/VAR_0] &=
    ~(1UL << (VAR_2 % VAR_0));
 }
}
