
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DIGIT_T ;


 int FUNC_0 (scalar_t__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(DIGIT_T VAR_0, DIGIT_T VAR_1, DIGIT_T VAR_2, DIGIT_T VAR_3)
{

  DIGIT_T VAR_4[2];

  FUNC_0(VAR_4, VAR_0, VAR_2);
  if (VAR_4[1] < VAR_1)
  {
    return 0;
  }
  else if (VAR_4[1] > VAR_1)
  {
    return 1;
  }
  else if (VAR_4[0] > VAR_3)
  {
    return 1;
  }
  return 0;
}
