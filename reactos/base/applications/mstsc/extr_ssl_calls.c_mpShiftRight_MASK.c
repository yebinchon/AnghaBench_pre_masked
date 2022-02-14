
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DIGIT_T ;


 unsigned int VAR_0 ;

__attribute__((used)) static DIGIT_T
FUNC_0(DIGIT_T* VAR_1, DIGIT_T* VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
  unsigned int VAR_5;
  unsigned int VAR_6;
  DIGIT_T VAR_7;
  DIGIT_T VAR_8;
  DIGIT_T VAR_9;


  if (VAR_3 >= VAR_0)
  {
    return 0;
  }

  VAR_7 = 0x1;
  for (VAR_5 = 1; VAR_5 < VAR_3; VAR_5++)
  {
    VAR_7 = (VAR_7 << 1) | VAR_7;
  }
  if (VAR_3 == 0)
  {
    VAR_7 = 0x0;
  }
  VAR_6 = VAR_0 - VAR_3;
  VAR_8 = 0;
  VAR_5 = VAR_4;
  while (VAR_5--)
  {
    VAR_9 = (VAR_2[VAR_5] & VAR_7) << VAR_6;
    VAR_1[VAR_5] = VAR_2[VAR_5] >> VAR_3 | VAR_8;
    VAR_8 = VAR_9;
  }
  return VAR_8;
}
