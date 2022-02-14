
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DIGIT_T ;


 unsigned int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static DIGIT_T
FUNC_0(DIGIT_T* VAR_2, DIGIT_T* VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
  unsigned int VAR_6;
  unsigned int VAR_7;
  DIGIT_T VAR_8;
  DIGIT_T VAR_9;
  DIGIT_T VAR_10;


  if (VAR_4 >= VAR_0)
  {
    return 0;
  }

  VAR_8 = VAR_1;
  for (VAR_6 = 1; VAR_6 < VAR_4; VAR_6++)
  {
    VAR_8 = (VAR_8 >> 1) | VAR_8;
  }
  if (VAR_4 == 0)
  {
    VAR_8 = 0x0;
  }
  VAR_7 = VAR_0 - VAR_4;
  VAR_9 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  {
    VAR_10 = (VAR_3[VAR_6] & VAR_8) >> VAR_7;
    VAR_2[VAR_6] = VAR_3[VAR_6] << VAR_4 | VAR_9;
    VAR_9 = VAR_10;
  }
  return VAR_9;
}
