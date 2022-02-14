
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_uint64_t ;
typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;



__attribute__((used)) static inline bfd_uint64_t
FUNC_0 (const void *VAR_0, int VAR_1, bfd_boolean VAR_2)
{
  const bfd_byte *VAR_3 = (const bfd_byte *) VAR_0;
  bfd_uint64_t VAR_4;
  int VAR_5;
  int VAR_6;

  if (VAR_1 % 8 != 0)
    return 0;

  VAR_4 = 0;
  VAR_6 = VAR_1 / 8;
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
    {
      int VAR_7 = VAR_2 ? VAR_5 : VAR_6 - VAR_5 - 1;

      VAR_4 = (VAR_4 << 8) | VAR_3[VAR_7];
    }

  return VAR_4;
}
