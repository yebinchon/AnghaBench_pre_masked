
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iso9660_dir_t ;



unsigned int
FUNC_0(unsigned int VAR_0, unsigned int VAR_1)
{
  unsigned int VAR_2;

  VAR_2 = sizeof(iso9660_dir_t);
  VAR_2 += VAR_0;
  if (VAR_2 % 2)
    VAR_2++;
  VAR_2 += VAR_1;
  if (VAR_2 % 2)
    VAR_2++;

  return VAR_2;
}
