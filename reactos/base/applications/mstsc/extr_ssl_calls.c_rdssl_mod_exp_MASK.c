
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DIGIT_T ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int*,int*,int*,int*,int) ;
 int FUNC_4 (int,unsigned int) ;
 int FUNC_5 (int*,int*,int) ;
 unsigned int FUNC_6 (int*,int) ;

int
FUNC_7(char* VAR_1, int VAR_2, char* VAR_3, int VAR_4,
              char* VAR_5, int VAR_6, char* VAR_7, int VAR_8)
{


  DIGIT_T VAR_9;
  DIGIT_T* VAR_10;
  DIGIT_T* VAR_11;
  DIGIT_T* VAR_12;
  DIGIT_T* VAR_13;
  unsigned int VAR_14;
  int VAR_15;
  char* VAR_16;
  char* VAR_17;
  char* VAR_18;
  char* VAR_19;

  if (VAR_4 > VAR_2 || VAR_4 == 0 ||
      VAR_2 == 0 || VAR_6 == 0 || VAR_8 == 0)
  {
    return 0;
  }
  VAR_15 = VAR_2;
  if (VAR_4 > VAR_15)
  {
    VAR_15 = VAR_4;
  }
  if (VAR_6 > VAR_15)
  {
    VAR_15 = VAR_6;
  }
  if (VAR_8 > VAR_15)
  {
    VAR_15 = VAR_8;
  }
  VAR_16 = (char*)FUNC_1(VAR_15, 1);
  VAR_17 = (char*)FUNC_1(VAR_15, 1);
  VAR_18 = (char*)FUNC_1(VAR_15, 1);
  VAR_19 = (char*)FUNC_1(VAR_15, 1);
  FUNC_2(VAR_17, VAR_3, VAR_4);
  FUNC_2(VAR_18, VAR_5, VAR_6);
  FUNC_2(VAR_19, VAR_7, VAR_8);
  VAR_10 = (DIGIT_T*)VAR_19;
  VAR_11 = (DIGIT_T*)VAR_17;
  VAR_12 = (DIGIT_T*)VAR_16;
  VAR_13 = (DIGIT_T*)VAR_18;

  VAR_14 = FUNC_6(VAR_10, VAR_15 / 4);
  for (VAR_9 = VAR_0; VAR_9 > 0; VAR_9 >>= 1)
  {
    if (VAR_10[VAR_14 - 1] & VAR_9)
    {
      break;
    }
  }
  FUNC_4(VAR_9, VAR_14);

  FUNC_5(VAR_12, VAR_11, VAR_15 / 4);

  while (VAR_14)
  {
    FUNC_3(VAR_12, VAR_12, VAR_12, VAR_13, VAR_15 / 4);
    if (VAR_10[VAR_14 - 1] & VAR_9)
    {
      FUNC_3(VAR_12, VAR_12, VAR_11, VAR_13, VAR_15 / 4);
    }

    FUNC_4(VAR_9, VAR_14);
  }
  FUNC_2(VAR_1, VAR_16, VAR_2);
  FUNC_0(VAR_16);
  FUNC_0(VAR_17);
  FUNC_0(VAR_18);
  FUNC_0(VAR_19);
  return VAR_2;
}
