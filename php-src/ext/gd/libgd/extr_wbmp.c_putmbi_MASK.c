
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void
FUNC_0 (int VAR_0, void (*VAR_1) (int VAR_2, void *VAR_3), void *VAR_4)
{
  int VAR_5, VAR_6, VAR_7;


  VAR_5 = 0;
  VAR_7 = 0;
  while (VAR_7 != VAR_0)
    VAR_7 += VAR_0 & 0x7f << 7 * VAR_5++;


  for (VAR_6 = VAR_5 - 1; VAR_6 > 0; VAR_6--)
    VAR_1 (0x80 | (VAR_0 & 0x7f << 7 * VAR_6) >> 7 * VAR_6, VAR_4);

  VAR_1 (VAR_0 & 0x7f, VAR_4);

}
