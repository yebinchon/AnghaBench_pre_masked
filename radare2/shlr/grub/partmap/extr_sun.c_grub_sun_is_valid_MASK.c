
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_sun_block {int dummy; } ;
typedef int grub_uint16_t ;



__attribute__((used)) static int
FUNC_0 (struct grub_sun_block *VAR_0)
{
  grub_uint16_t *VAR_1;
  grub_uint16_t VAR_2 = 0;

  for (VAR_1 = (grub_uint16_t *) VAR_0;
       VAR_1 < (grub_uint16_t *) (VAR_0 + 1);
       VAR_1++)
    VAR_2 ^= *VAR_1;

  return ! VAR_2;
}
