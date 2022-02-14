
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DIGIT_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static DIGIT_T
FUNC_1(DIGIT_T VAR_1, DIGIT_T* VAR_2, DIGIT_T* VAR_3, DIGIT_T VAR_4, unsigned int VAR_5)
{


  DIGIT_T VAR_6;
  DIGIT_T VAR_7[2];
  unsigned int VAR_8;

  if (VAR_4 == 0)
  {
    return VAR_1;
  }
  VAR_6 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
  {
    FUNC_0(VAR_7, VAR_4, VAR_3[VAR_8]);
    VAR_2[VAR_8] -= VAR_6;
    if (VAR_2[VAR_8] > VAR_0 - VAR_6)
    {
      VAR_6 = 1;
    }
    else
    {
      VAR_6 = 0;
    }
    VAR_2[VAR_8] -= VAR_7[0];
    if (VAR_2[VAR_8] > VAR_0 - VAR_7[0])
    {
      VAR_6++;
    }
    VAR_6 += VAR_7[1];
  }

  VAR_1 -= VAR_6;
  return VAR_1;
}
