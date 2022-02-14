
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void
FUNC_0(char * VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4,
                int VAR_5)
{
  int VAR_6;
  int VAR_7;

  if (VAR_4 == 1)
  {
    VAR_3 = (VAR_3 + 7) / 8;
    VAR_6 = (VAR_2 * VAR_3) + VAR_1 / 8;
    VAR_7 = VAR_1 % 8;
    if (VAR_5 != 0)
    {
      VAR_0[VAR_6] = VAR_0[VAR_6] | (0x80 >> VAR_7);
    }
    else
    {
      VAR_0[VAR_6] = VAR_0[VAR_6] & ~(0x80 >> VAR_7);
    }
  }
  else if (VAR_4 == 8)
  {
    VAR_0[VAR_2 * VAR_3 + VAR_1] = VAR_5;
  }
  else if (VAR_4 == 15 || VAR_4 == 16)
  {
    ((unsigned short *) VAR_0)[VAR_2 * VAR_3 + VAR_1] = VAR_5;
  }
  else if (VAR_4 == 24 || VAR_4 == 32)
  {
    ((unsigned int *) VAR_0)[VAR_2 * VAR_3 + VAR_1] = (unsigned int) VAR_5;
  }
}
