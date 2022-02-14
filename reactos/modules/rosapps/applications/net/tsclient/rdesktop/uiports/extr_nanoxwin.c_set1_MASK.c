
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;



__attribute__((used)) static void FUNC_0(uint8 * VAR_0, int VAR_1, int VAR_2)
{
  int VAR_3;
  int VAR_4;

  if (VAR_0 == 0)
  {
    return;
  }
  VAR_3 = (VAR_2 * 32) / 8 + VAR_1 / 8;
  VAR_4 = VAR_1 % 8;
  VAR_0[VAR_3] = VAR_0[VAR_3] | (0x80 >> VAR_4);
}
