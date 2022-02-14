
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int,int,int) ;

void
FUNC_1(int VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4,
        int VAR_5, int VAR_6, int VAR_7)
{
  int VAR_8;
  int VAR_9;
  int VAR_10;
  int VAR_11;
  int VAR_12;
  int VAR_13;
  int VAR_14;

  if (VAR_1 > VAR_3)
  {
    VAR_8 = VAR_1 - VAR_3;
    VAR_10 = -1;
  }
  else
  {
    VAR_8 = VAR_3 - VAR_1;
    VAR_10 = 1;
  }
  if (VAR_2 > VAR_4)
  {
    VAR_9 = VAR_2 - VAR_4;
    VAR_11 = -1;
  }
  else
  {
    VAR_9 = VAR_4 - VAR_2;
    VAR_11 = 1;
  }
  if (VAR_8 >= VAR_9)
  {
    VAR_12 = VAR_9 << 1;
    VAR_13 = VAR_12 - (VAR_8 << 1);
    VAR_14 = VAR_12 - VAR_8;
    for (; VAR_8 >= 0; VAR_8--)
    {
      if (VAR_1 != VAR_3 || VAR_2 != VAR_4)
      {
        FUNC_0(VAR_1, VAR_2, VAR_7, VAR_0, 1);
      }
      if (VAR_14 > 0)
      {
        VAR_1 += VAR_10;
        VAR_2 += VAR_11;
        VAR_14 += VAR_13;
      }
      else
      {
        VAR_1 += VAR_10;
        VAR_14 += VAR_12;
      }
    }
  }
  else
  {
    VAR_12 = VAR_8 << 1;
    VAR_13 = VAR_12 - (VAR_9 << 1);
    VAR_14 = VAR_12 - VAR_9;
    for (; VAR_9 >= 0; VAR_9--)
    {
      if (VAR_1 != VAR_3 || VAR_2 != VAR_4)
      {
        FUNC_0(VAR_1, VAR_2, VAR_7, VAR_0, 1);
      }
      if (VAR_14 > 0)
      {
        VAR_1 += VAR_10;
        VAR_2 += VAR_11;
        VAR_14 += VAR_13;
      }
      else
      {
        VAR_2 += VAR_11;
        VAR_14 += VAR_12;
      }
    }
  }
}
