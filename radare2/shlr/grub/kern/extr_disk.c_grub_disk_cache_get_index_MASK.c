
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int grub_disk_addr_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static unsigned
FUNC_0 (unsigned long VAR_2, unsigned long VAR_3,
      grub_disk_addr_t VAR_4)
{
  return ((VAR_2 * 524287UL + VAR_3 * 2606459UL
    + ((unsigned) (VAR_4 >> VAR_0)))
   % VAR_1);
}
