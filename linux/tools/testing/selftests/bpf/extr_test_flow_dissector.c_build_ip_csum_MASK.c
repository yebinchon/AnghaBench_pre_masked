
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint16_t ;


 scalar_t__ FUNC_0 (unsigned long const*,int) ;

__attribute__((used)) static uint16_t FUNC_1(const uint16_t *VAR_0, int VAR_1,
         unsigned long VAR_2)
{
 VAR_2 += FUNC_0(VAR_0, VAR_1);

 while (VAR_2 >> 16)
  VAR_2 = (VAR_2 & 0xffff) + (VAR_2 >> 16);

 return ~VAR_2;
}
