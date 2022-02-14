
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char grub_disk_addr_t ;



__attribute__((used)) static char *
FUNC_0 (char *VAR_0, int VAR_1, grub_disk_addr_t * VAR_2, int VAR_3)
{
  grub_disk_addr_t VAR_4, VAR_5;

  VAR_4 = 0;
  VAR_5 = 1;

  while (VAR_1--)
    {
      VAR_4 += VAR_5 * (*(unsigned char *) (VAR_0++));
      VAR_5 <<= 8;
    }

  if ((VAR_3) && (VAR_4 & (VAR_5 >> 1)))
    VAR_4 -= VAR_5;

  *VAR_2 = VAR_4;
  return VAR_0;
}
