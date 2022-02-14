
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int,int,int ) ;
 scalar_t__ FUNC_4 (int*,int*,int*,int*,int*,int*) ;
 int VAR_0 ;
 char* FUNC_5 (int,int) ;

void
FUNC_6(int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5,
             int VAR_6, int VAR_7)
{
  int VAR_8;
  int VAR_9;
  int VAR_10;
  char * VAR_11;
  char * VAR_12;

  if (FUNC_4(&VAR_2, &VAR_3, &VAR_4, &VAR_5, &VAR_6, &VAR_7))
  {
    if (VAR_1 == 12)
    {
      if (VAR_7 < VAR_3)
      {
        for (VAR_9 = VAR_5 - 1; VAR_9 >= 0; VAR_9--)
        {
          VAR_11 = FUNC_5(VAR_6, VAR_7 + VAR_9);
          VAR_12 = FUNC_5(VAR_2, VAR_3 + VAR_9);
          if (VAR_11 != 0 && VAR_12 != 0)
          {
            FUNC_0(VAR_12, VAR_11, VAR_4 * VAR_0);
          }
        }
      }
      else if (VAR_7 > VAR_3 || VAR_6 > VAR_2)
      {
        for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
        {
          VAR_11 = FUNC_5(VAR_6, VAR_7 + VAR_9);
          VAR_12 = FUNC_5(VAR_2, VAR_3 + VAR_9);
          if (VAR_11 != 0 && VAR_12 != 0)
          {
            FUNC_0(VAR_12, VAR_11, VAR_4 * VAR_0);
          }
        }
      }
      else
      {
        for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
        {
          VAR_11 = FUNC_5(VAR_6, VAR_7 + VAR_9);
          VAR_12 = FUNC_5(VAR_2, VAR_3 + VAR_9);
          if (VAR_11 != 0 && VAR_12 != 0)
          {
            FUNC_1(VAR_12, VAR_11, VAR_4 * VAR_0);
          }
        }
      }
    }
    else
    {
      if (VAR_7 < VAR_3)
      {
        for (VAR_9 = VAR_5 - 1; VAR_9 >= 0; VAR_9--)
        {
          for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
          {
            VAR_8 = FUNC_2(VAR_6 + VAR_10, VAR_7 + VAR_9);
            FUNC_3(VAR_2 + VAR_10, VAR_3 + VAR_9, VAR_8, VAR_1, 0);
          }
        }
      }
      else if (VAR_7 > VAR_3 || VAR_6 > VAR_2)
      {
        for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
        {
          for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
          {
            VAR_8 = FUNC_2(VAR_6 + VAR_10, VAR_7 + VAR_9);
            FUNC_3(VAR_2 + VAR_10, VAR_3 + VAR_9, VAR_8, VAR_1, 0);
          }
        }
      }
      else
      {
        for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
        {
          for (VAR_10 = VAR_4 - 1; VAR_10 >= 0; VAR_10--)
          {
            VAR_8 = FUNC_2(VAR_6 + VAR_10, VAR_7 + VAR_9);
            FUNC_3(VAR_2 + VAR_10, VAR_3 + VAR_9, VAR_8, VAR_1, 0);
          }
        }
      }
    }
  }
}
