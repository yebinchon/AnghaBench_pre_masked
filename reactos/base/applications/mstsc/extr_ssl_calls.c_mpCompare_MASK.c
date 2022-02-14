
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DIGIT_T ;



__attribute__((used)) static int
FUNC_0(DIGIT_T* VAR_0, DIGIT_T* VAR_1, unsigned int VAR_2)
{

  if (VAR_2 == 0)
  {
    return 0;
  }
  while (VAR_2--)
  {
    if (VAR_0[VAR_2] > VAR_1[VAR_2])
    {
      return 1;
    }
    if (VAR_0[VAR_2] < VAR_1[VAR_2])
    {
      return -1;
    }
  }
  return 0;
}
