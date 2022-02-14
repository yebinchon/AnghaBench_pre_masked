
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef void iso_path_table_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const) ;

__attribute__((used)) static const iso_path_table_t *
FUNC_2 (const void *VAR_0, unsigned int VAR_1)
{
  const uint8_t *VAR_2 = VAR_0;
  unsigned int VAR_3 = 0;
  unsigned int VAR_4 = 0;

  FUNC_0 (VAR_0 != ((void*)0));

  while (FUNC_1 (*VAR_2))
    {
      if (VAR_4 == VAR_1)
        break;

      FUNC_0 (VAR_4 < VAR_1);

      VAR_3 += sizeof (iso_path_table_t);
      VAR_3 += FUNC_1 (*VAR_2);
      if (VAR_3 % 2)
        VAR_3++;
      VAR_2 = (uint8_t *)VAR_0 + VAR_3;
      VAR_4++;
    }

  if (!FUNC_1 (*VAR_2))
    return ((void*)0);

  return (const void *) VAR_2;
}
