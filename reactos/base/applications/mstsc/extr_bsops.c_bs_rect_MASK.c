
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int,int,int ) ;
 scalar_t__ FUNC_1 (int*,int*,int*,int*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int,int) ;

void
FUNC_3(int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
  int VAR_7;
  int VAR_8;
  unsigned char * VAR_9;
  unsigned short * VAR_10;
  unsigned int * VAR_11;

  if (FUNC_1(&VAR_1, &VAR_2, &VAR_3, &VAR_4, 0, 0))
  {
    if (VAR_6 == 0)
    {
      VAR_6 = 12;
      VAR_5 = 0;
    }
    else if (VAR_6 == 15)
    {
      VAR_6 = 12;
      VAR_5 = 0xffffff;
    }
    if (VAR_6 == 12)
    {
      if (VAR_0 == 1)
      {
        for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
        {
          VAR_9 = (unsigned char *) FUNC_2(VAR_1, VAR_2 + VAR_7);
          if (VAR_9 != 0)
          {
            for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
            {
              *VAR_9 = VAR_5;
              VAR_9++;
            }
          }
        }
      }
      else if (VAR_0 == 2)
      {
        for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
        {
          VAR_10 = (unsigned short *) FUNC_2(VAR_1, VAR_2 + VAR_7);
          if (VAR_10 != 0)
          {
            for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
            {
              *VAR_10 = VAR_5;
              VAR_10++;
            }
          }
        }
      }
      else
      {
        for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
        {
          VAR_11 = (unsigned int *) FUNC_2(VAR_1, VAR_2 + VAR_7);
          if (VAR_11 != 0)
          {
            for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
            {
              *VAR_11 = VAR_5;
              VAR_11++;
            }
          }
        }
      }
    }
    else
    {
      for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
      {
        for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
        {
          FUNC_0(VAR_8 + VAR_1, VAR_7 + VAR_2, VAR_5, VAR_6, 0);
        }
      }
    }
  }
}
