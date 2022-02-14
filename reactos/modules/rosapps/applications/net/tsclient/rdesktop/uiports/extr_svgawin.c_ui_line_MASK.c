
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {int colour; } ;
typedef TYPE_1__ PEN ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int,int ) ;
 scalar_t__ FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,int,int ,int ) ;

void FUNC_4(uint8 VAR_3, int VAR_4, int VAR_5, int VAR_6,
             int VAR_7, PEN* VAR_8)
{
  int VAR_9;
  int VAR_10;
  int VAR_11;
  int VAR_12;
  int VAR_13;
  int VAR_14;
  int VAR_15;
  int VAR_16;
  int VAR_17;
  int VAR_18;
  int VAR_19;

  if (VAR_4 > VAR_6)
  {
    VAR_9 = VAR_4 - VAR_6;
    VAR_11 = -1;
    VAR_16 = VAR_6;
    VAR_18 = VAR_4;
  }
  else
  {
    VAR_9 = VAR_6 - VAR_4;
    VAR_11 = 1;
    VAR_16 = VAR_4;
    VAR_18 = VAR_6;
  }
  if (VAR_5 > VAR_7)
  {
    VAR_10 = VAR_5 - VAR_7;
    VAR_12 = -1;
    VAR_17 = VAR_7;
    VAR_19 = VAR_5;
  }
  else
  {
    VAR_10 = VAR_7 - VAR_5;
    VAR_12 = 1;
    VAR_17 = VAR_5;
    VAR_19 = VAR_7;
  }
  if (FUNC_1(VAR_16, VAR_17, (VAR_18 - VAR_16) + 1, (VAR_19 - VAR_17) + 1))
    FUNC_2(VAR_1, VAR_2);
  if (VAR_9 >= VAR_10)
  {
    VAR_13 = VAR_10 << 1;
    VAR_14 = VAR_13 - (VAR_9 << 1);
    VAR_15 = VAR_13 - VAR_9;
    for (; VAR_9 >= 0; VAR_9--)
    {
      FUNC_3(VAR_4, VAR_5, VAR_8->colour, VAR_3);
      if (VAR_15 > 0)
      {
        VAR_4 += VAR_11;
        VAR_5 += VAR_12;
        VAR_15 += VAR_14;
      }
      else
      {
        VAR_4 += VAR_11;
        VAR_15 += VAR_13;
      }
    }
  }
  else
  {
    VAR_13 = VAR_9 << 1;
    VAR_14 = VAR_13 - (VAR_10 << 1);
    VAR_15 = VAR_13 - VAR_10;
    for (; VAR_10 >= 0; VAR_10--)
    {
      FUNC_3(VAR_4, VAR_5, VAR_8->colour, VAR_3);
      if (VAR_15 > 0)
      {
        VAR_4 += VAR_11;
        VAR_5 += VAR_12;
        VAR_15 += VAR_14;
      }
      else
      {
        VAR_5 += VAR_12;
        VAR_15 += VAR_13;
      }
    }
  }
  FUNC_0(VAR_16, VAR_17, (VAR_18 - VAR_16) + 1, (VAR_19 - VAR_17) + 1, VAR_0);
}
