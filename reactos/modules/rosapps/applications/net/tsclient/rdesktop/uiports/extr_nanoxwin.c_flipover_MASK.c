
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(uint8 * VAR_0)
{
  uint8 VAR_1[128];
  int VAR_2;

  if (VAR_0 == 0)
  {
    return;
  }
  FUNC_0(VAR_1, VAR_0, 128);
  for (VAR_2 = 0; VAR_2 <= 31; VAR_2++)
  {
    VAR_0[127 - (VAR_2 * 4 + 3)] = VAR_1[VAR_2 * 4];
    VAR_0[127 - (VAR_2 * 4 + 2)] = VAR_1[VAR_2 * 4 + 1];
    VAR_0[127 - (VAR_2 * 4 + 1)] = VAR_1[VAR_2 * 4 + 2];
    VAR_0[127 - VAR_2 * 4] = VAR_1[VAR_2 * 4 + 3];
  }
}
