
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DIGIT_T ;



__attribute__((used)) static unsigned int
FUNC_0(DIGIT_T* VAR_0, unsigned int VAR_1)
{
  while (VAR_1--)
  {
    if (VAR_0[VAR_1] != 0)
    {
      return (++VAR_1);
    }
  }
  return 0;
}
