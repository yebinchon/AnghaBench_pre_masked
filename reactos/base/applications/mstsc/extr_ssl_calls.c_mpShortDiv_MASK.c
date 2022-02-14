
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DIGIT_T ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*,unsigned int,unsigned int) ;
 int FUNC_1 (int*,int*,int*,int) ;

__attribute__((used)) static DIGIT_T
FUNC_2(DIGIT_T* VAR_2, DIGIT_T* VAR_3, DIGIT_T VAR_4, unsigned int VAR_5)
{
  unsigned int VAR_6;
  unsigned int VAR_7;
  DIGIT_T VAR_8[2];
  DIGIT_T VAR_9;
  DIGIT_T VAR_10;
  DIGIT_T VAR_11;
  DIGIT_T* VAR_12;

  if (VAR_5 == 0)
  {
    return 0;
  }
  if (VAR_4 == 0)
  {
    return 0;
  }




  VAR_10 = VAR_1;
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  {
    if (VAR_4 & VAR_10)
    {
      break;
    }
    VAR_10 >>= 1;
  }
  VAR_4 <<= VAR_7;
  VAR_11 = FUNC_0(VAR_2, VAR_3, VAR_7, VAR_5);
  VAR_12 = VAR_2;

  VAR_9 = VAR_11;
  VAR_6 = VAR_5;
  while (VAR_6--)
  {

    VAR_8[1] = VAR_9;
    VAR_8[0] = VAR_12[VAR_6];
    VAR_11 = FUNC_1(&VAR_2[VAR_6], &VAR_9, VAR_8, VAR_4);
  }

  VAR_9 >>= VAR_7;
  return VAR_9;
}
