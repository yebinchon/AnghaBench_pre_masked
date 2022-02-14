
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DIGIT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,int,int,int) ;

__attribute__((used)) static DIGIT_T
FUNC_4(DIGIT_T* VAR_3, DIGIT_T* VAR_4, DIGIT_T* VAR_5, DIGIT_T VAR_6)
{
  DIGIT_T VAR_7;
  DIGIT_T VAR_8;
  DIGIT_T VAR_9;
  DIGIT_T VAR_10;
  DIGIT_T VAR_11;
  DIGIT_T VAR_12;
  DIGIT_T VAR_13;
  DIGIT_T VAR_14;
  DIGIT_T VAR_15;
  DIGIT_T VAR_16[2];
  DIGIT_T VAR_17;


  if (!(VAR_6 & VAR_1))
  {
    *VAR_3 = *VAR_4 = 0;
    return VAR_2;
  }


  VAR_10 = FUNC_1(VAR_6);
  VAR_11 = FUNC_0(VAR_6);
  VAR_12 = FUNC_1(VAR_5[0]);
  VAR_13 = FUNC_0(VAR_5[0]);
  VAR_14 = FUNC_1(VAR_5[1]);
  VAR_15 = FUNC_0(VAR_5[1]);







  VAR_7 = VAR_15 / VAR_11;
  if (VAR_7 > 0)
  {
    VAR_8 = VAR_15 - VAR_7 * VAR_11;
    VAR_9 = FUNC_2(VAR_8) | VAR_14;
    if (VAR_7 * VAR_10 > VAR_9)
    {
      VAR_7--;
    }
  }
  VAR_16[1] = 0;
  VAR_16[0] = VAR_5[1];
  if (VAR_7 > 0)
  {

    FUNC_3(VAR_16, VAR_7, VAR_11, VAR_10);
    if (FUNC_0(VAR_16[1]) != 0)
    {
      VAR_7--;
      VAR_16[0] += VAR_6;
      VAR_16[1] = 0;
    }
  }
  VAR_17 = VAR_7;



  VAR_9 = VAR_16[0];
  VAR_7 = VAR_9 / VAR_11;
  VAR_8 = VAR_9 - VAR_7 * VAR_11;

  VAR_9 = FUNC_2(VAR_8) | VAR_13;
  if ((VAR_7 == VAR_0) || (VAR_7 * VAR_10 > VAR_9))
  {
    VAR_7--;
    VAR_8 += VAR_11;
    VAR_9 = FUNC_2(VAR_8) | VAR_13;
    if ((VAR_8 < VAR_0) && (VAR_7 * VAR_10 > VAR_9))
    {
      VAR_7--;
    }
  }


  VAR_16[1] = FUNC_0(VAR_16[0]);
  VAR_16[0] = FUNC_2(FUNC_1(VAR_16[0])) | VAR_13;
  FUNC_3(VAR_16, VAR_7, VAR_11, VAR_10);
  if (FUNC_0(VAR_16[1]) != 0)
  {
    VAR_7--;
    VAR_16[0] += VAR_6;
    VAR_16[1] = 0;
  }

  *VAR_3 = FUNC_2(VAR_7);



  VAR_9 = VAR_16[0];
  VAR_7 = VAR_9 / VAR_11;
  VAR_8 = VAR_9 - VAR_7 * VAR_11;

  VAR_9 = FUNC_2(VAR_8) | VAR_12;
  if ((VAR_7 == VAR_0) || (VAR_7 * VAR_10 > VAR_9))
  {
    VAR_7--;
    VAR_8 += VAR_11;
    VAR_9 = FUNC_2(VAR_8) | VAR_12;
    if ((VAR_8 < VAR_0) && (VAR_7 * VAR_10 > VAR_9))
    {
      VAR_7--;
    }
  }


  VAR_16[1] = FUNC_0(VAR_16[0]);
  VAR_16[0] = FUNC_2(FUNC_1(VAR_16[0])) | VAR_12;
  FUNC_3(VAR_16, VAR_7, VAR_11, VAR_10);
  if (FUNC_0(VAR_16[1]) != 0)
  {
    VAR_7--;
    VAR_16[0] += VAR_6;
    VAR_16[1] = 0;
  }

  *VAR_3 |= FUNC_1(VAR_7);

  *VAR_4 = VAR_16[0];
  return VAR_17;
}
