
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int grub_uint64_t ;
typedef int grub_uint32_t ;



grub_uint64_t
FUNC_0 (grub_uint64_t VAR_0, grub_uint32_t VAR_1, grub_uint32_t *VAR_2)
{




  unsigned VAR_3 = 64;
  unsigned long long VAR_4 = 0;
  unsigned VAR_5 = 0;


  if (VAR_0 < 0xffffffff)
    {
      if (VAR_2)
 *VAR_2 = ((grub_uint32_t) VAR_0) % VAR_1;

      return ((grub_uint32_t) VAR_0) / VAR_1;
    }

  while (VAR_3--)
    {
      VAR_5 <<= 1;

      if (VAR_0 & (1ULL << 63))
 VAR_5 |= 1;

      VAR_4 <<= 1;
      VAR_0 <<= 1;

      if (VAR_5 >= VAR_1)
 {
   VAR_4 |= 1;
   VAR_5 -= VAR_1;
 }
    }

  if (VAR_2)
    *VAR_2 = VAR_5;

  return VAR_4;
}
