
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DIGIT_T ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int*,int*,int*,unsigned int) ;
 int FUNC_2 (int*,int*,unsigned int) ;
 int FUNC_3 (int,int*,int*,int,unsigned int) ;
 int FUNC_4 (int*,int,unsigned int) ;
 int FUNC_5 (int*,int*,unsigned int) ;
 int FUNC_6 (int*,unsigned int) ;
 int FUNC_7 (int*,int*,unsigned int,int) ;
 int FUNC_8 (int*,int*,unsigned int,int) ;
 int FUNC_9 (int*,int*,int,unsigned int) ;
 scalar_t__ FUNC_10 (int*,unsigned int) ;
 int FUNC_11 (int*,int*,int*,int) ;

__attribute__((used)) static int
FUNC_12(DIGIT_T* VAR_3, DIGIT_T* VAR_4, DIGIT_T* VAR_5, unsigned int VAR_6,
         DIGIT_T* VAR_7, unsigned int VAR_8)
{
  unsigned int VAR_9;
  int VAR_10;
  int VAR_11;
  int VAR_12;
  int VAR_13;
  int VAR_14;
  DIGIT_T VAR_15;
  DIGIT_T VAR_16;
  DIGIT_T VAR_17;
  DIGIT_T VAR_18;
  DIGIT_T VAR_19[2];
  DIGIT_T* VAR_20;
  DIGIT_T* VAR_21;


  FUNC_6(VAR_3, VAR_6);
  FUNC_6(VAR_4, VAR_6);

  VAR_10 = (int)FUNC_10(VAR_7, VAR_8);
  VAR_11 = (int)FUNC_10(VAR_5, VAR_6);
  VAR_11 -= VAR_10;

  if (VAR_10 == 0)
  {
    return -1;
  }
  if (VAR_10 == 1)
  {
    VAR_4[0] = FUNC_9(VAR_3, VAR_5, VAR_7[0], VAR_6);
    return 0;
  }
  if (VAR_11 < 0)
  {
    FUNC_5(VAR_4, VAR_5, VAR_6);
    return 0;
  }
  if (VAR_11 == 0)
  {
    VAR_14 = FUNC_2(VAR_5, VAR_7, (unsigned int)VAR_10);
    if (VAR_14 < 0)
    {
      FUNC_5(VAR_4, VAR_5, VAR_6);
      return 0;
    }
    else if (VAR_14 == 0)
    {
      FUNC_4(VAR_3, 1, VAR_6);
      return 0;
    }
  }
  VAR_15 = VAR_1;
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  {
    if (VAR_7[VAR_10 - 1] & VAR_15)
    {
      break;
    }
    VAR_15 >>= 1;
  }

  VAR_16 = FUNC_7(VAR_7, VAR_7, VAR_9, VAR_10);

  VAR_16 = FUNC_7(VAR_4, VAR_5, VAR_9, VAR_10 + VAR_11);
  VAR_20 = VAR_4;
  VAR_19[0] = VAR_16;

  for (VAR_12 = VAR_11; VAR_12 >= 0; VAR_12--)
  {

    VAR_13 = 0;
    VAR_19[1] = VAR_19[0];
    VAR_19[0] = VAR_20[VAR_12+VAR_10-1];
    VAR_16 = FUNC_11(&VAR_17, &VAR_18, VAR_19, VAR_7[VAR_10 - 1]);

    if (VAR_16)
    {
      VAR_17 = VAR_2;
      VAR_18 = VAR_20[VAR_12 + VAR_10 - 1];
      VAR_18 += VAR_7[VAR_10 - 1];
      if (VAR_18 < VAR_7[VAR_10 - 1])
      {
        VAR_13 = 1;
      }
    }
    if (!VAR_13 && FUNC_0(VAR_17, VAR_18, VAR_7[VAR_10 - 2], VAR_20[VAR_12 + VAR_10 - 2]))
    {
      VAR_17--;
      VAR_18 += VAR_7[VAR_10 - 1];
      if (!(VAR_18 < VAR_7[VAR_10 - 1]))
      {
        if (FUNC_0(VAR_17, VAR_18, VAR_7[VAR_10 - 2], VAR_20[VAR_12 + VAR_10 - 2]))
        {
          VAR_17--;
        }
      }
    }

    VAR_21 = &VAR_20[VAR_12];
    VAR_16 = FUNC_3(VAR_19[1], VAR_21, VAR_7, VAR_17, (unsigned int)VAR_10);

    VAR_3[VAR_12] = VAR_17;
    if (VAR_16)
    {
      VAR_3[VAR_12]--;
      VAR_16 = FUNC_1(VAR_21, VAR_21, VAR_7, (unsigned int)VAR_10);
    }
    VAR_19[0] = VAR_20[VAR_12 + VAR_10 - 1];
  }

  for (VAR_12 = VAR_10; VAR_12 < VAR_11+VAR_10; VAR_12++)
  {
    VAR_20[VAR_12] = 0;
  }

  FUNC_8(VAR_4, VAR_4, VAR_9, VAR_10);
  FUNC_8(VAR_7, VAR_7, VAR_9, VAR_10);
  return 0;
}
