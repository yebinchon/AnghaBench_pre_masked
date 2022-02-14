
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8 ;



__attribute__((used)) static int FUNC_0(uint8 * VAR_0, int VAR_1, int VAR_2)
{
  uint8 VAR_3, VAR_4, VAR_5;
  int VAR_6;

  if (VAR_0 == 0)
  {
    return 0;
  }
  VAR_6 = VAR_2 * 32 * 3 + VAR_1 * 3;
  VAR_3 = VAR_0[VAR_6];
  VAR_4 = VAR_0[VAR_6 + 1];
  VAR_5 = VAR_0[VAR_6 + 2];
  return !((VAR_3 == 0) && (VAR_4 == 0) && (VAR_5 == 0));
}
