
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int iso_path_table_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int const) ;

void
FUNC_2 (const void *VAR_0,
                                unsigned int *VAR_1,
                                unsigned int *VAR_2)
{
  const uint8_t *VAR_3 = VAR_0;
  unsigned int VAR_4 = 0;
  unsigned int VAR_5 = 0;

  FUNC_0 (VAR_0 != ((void*)0));

  while (FUNC_1 (*VAR_3))
    {
      VAR_4 += sizeof (iso_path_table_t);
      VAR_4 += FUNC_1 (*VAR_3);
      if (VAR_4 % 2)
        VAR_4++;
      VAR_3 = (uint8_t *)VAR_0 + VAR_4;
      VAR_5++;
    }

  if (VAR_1)
    *VAR_1 = VAR_4;

  if (VAR_2)
    *VAR_2 = VAR_5;
}
