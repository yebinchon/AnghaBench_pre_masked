
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DIGIT_T ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(DIGIT_T* VAR_0, DIGIT_T VAR_1, DIGIT_T VAR_2)
{
  DIGIT_T VAR_3;
  DIGIT_T VAR_4;
  DIGIT_T VAR_5;
  DIGIT_T VAR_6;
  DIGIT_T VAR_7;
  DIGIT_T VAR_8;
  DIGIT_T VAR_9;
  VAR_3 = FUNC_1(VAR_1);
  VAR_5 = FUNC_0(VAR_1);
  VAR_4 = FUNC_1(VAR_2);
  VAR_6 = FUNC_0(VAR_2);


  VAR_0[0] = VAR_3 * VAR_4;


  VAR_7 = VAR_3 * VAR_6;
  VAR_8 = VAR_5 * VAR_4;
  VAR_7 += VAR_8;
  if (VAR_7 < VAR_8)
  {
    VAR_9 = 1;
  }
  else
  {
    VAR_9 = 0;
  }


  VAR_9 = FUNC_2(VAR_9) + FUNC_0(VAR_7);


  VAR_7 = FUNC_2(VAR_7);
  VAR_0[0] += VAR_7;
  if (VAR_0[0] < VAR_7)
  {
    VAR_9++;
  }

  VAR_0[1] = VAR_5 * VAR_6;
  VAR_0[1] += VAR_9;

  return 0;
}
