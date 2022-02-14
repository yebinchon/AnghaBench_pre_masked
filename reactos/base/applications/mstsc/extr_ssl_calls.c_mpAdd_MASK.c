
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DIGIT_T ;



__attribute__((used)) static DIGIT_T
FUNC_0(DIGIT_T* VAR_0, DIGIT_T* VAR_1, DIGIT_T* VAR_2, unsigned int VAR_3)
{





  DIGIT_T VAR_4;
  unsigned int VAR_5;


  VAR_4 = 0;
  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  {


    VAR_0[VAR_5] = VAR_1[VAR_5] + VAR_4;
    if (VAR_0[VAR_5] < VAR_4)
    {
      VAR_4 = 1;
    }
    else
    {
      VAR_4 = 0;
    }
    VAR_0[VAR_5] += VAR_2[VAR_5];
    if (VAR_0[VAR_5] < VAR_2[VAR_5])
    {
      VAR_4++;
    }
  }
  return VAR_4;
}
