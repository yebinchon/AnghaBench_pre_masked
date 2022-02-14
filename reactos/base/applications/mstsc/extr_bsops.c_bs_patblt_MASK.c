
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (int,int,int,int,int,int) ;
 int FUNC_2 (int,int,int,int,int) ;
 int VAR_0 ;

void
FUNC_3(int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5,
          int VAR_6, char * VAR_7,
          int VAR_8, int VAR_9,
          int VAR_10, int VAR_11)
{
  int VAR_12;
  int VAR_13;
  char VAR_14[8];
  char * VAR_15;

  VAR_15 = 0;
  switch (VAR_6)
  {
    case 0:
      FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_11, VAR_1);
      break;
    case 2:
      VAR_15 = VAR_0 + VAR_7[0] * 8;
      break;
    case 3:
      for (VAR_12 = 0; VAR_12 < 8; VAR_12++)
      {
        VAR_14[VAR_12] = ~VAR_7[7 - VAR_12];
      }
      VAR_15 = VAR_14;
      break;
  }
  if (VAR_15 != 0)
  {
    for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++)
    {
      for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++)
      {
        if (FUNC_0(VAR_15, (VAR_2 + VAR_13 + VAR_8) % 8,
                           (VAR_3 + VAR_12 + VAR_9) % 8, 8, 1))
        {
          FUNC_2(VAR_2 + VAR_13, VAR_3 + VAR_12, VAR_11, VAR_1, 1);
        }
        else
        {
          FUNC_2(VAR_2 + VAR_13, VAR_3 + VAR_12, VAR_10, VAR_1, 1);
        }
      }
    }
  }
}
