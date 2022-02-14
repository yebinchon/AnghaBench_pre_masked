
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DIGIT_T ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(DIGIT_T* VAR_1, DIGIT_T VAR_2, DIGIT_T VAR_3, DIGIT_T VAR_4)
{




  DIGIT_T VAR_5;
  DIGIT_T VAR_6;
  DIGIT_T VAR_7;

  VAR_5 = VAR_2 * VAR_4;
  VAR_6 = VAR_2 * VAR_3;
  VAR_7 = VAR_5 + FUNC_2(FUNC_1(VAR_6));
  VAR_1[0] -= VAR_7;
  if (VAR_1[0] > VAR_0 - VAR_7)
  {
    VAR_1[1]--;
  }
  VAR_1[1] -= FUNC_0(VAR_6);
}
