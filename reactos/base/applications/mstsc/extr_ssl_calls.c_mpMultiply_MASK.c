
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DIGIT_T ;


 int FUNC_0 (scalar_t__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(DIGIT_T* VAR_0, DIGIT_T* VAR_1, DIGIT_T* VAR_2, unsigned int VAR_3)
{




  DIGIT_T VAR_4;
  DIGIT_T VAR_5[2];
  unsigned int VAR_6;
  unsigned int VAR_7;
  unsigned int VAR_8;
  unsigned int VAR_9;

  VAR_9 = VAR_3;
  VAR_8 = VAR_9;

  for (VAR_6 = 0; VAR_6 < 2 * VAR_8; VAR_6++)
  {
    VAR_0[VAR_6] = 0;
  }
  for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
  {

    if (VAR_2[VAR_7] == 0)
    {
      VAR_0[VAR_7 + VAR_8] = 0;
    }
    else
    {

      VAR_4 = 0;
      for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++)
      {


        FUNC_0(VAR_5, VAR_1[VAR_6], VAR_2[VAR_7]);
        VAR_5[0] += VAR_4;
        if (VAR_5[0] < VAR_4)
        {
          VAR_5[1]++;
        }
        VAR_5[0] += VAR_0[VAR_6 + VAR_7];
        if (VAR_5[0] < VAR_0[VAR_6+VAR_7])
        {
          VAR_5[1]++;
        }
        VAR_0[VAR_6 + VAR_7] = VAR_5[0];
        VAR_4 = VAR_5[1];
      }

      VAR_0[VAR_7 + VAR_8] = VAR_4;
    }
  }
  return 0;
}
