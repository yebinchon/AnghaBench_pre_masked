
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int,int,int,int,int ) ;
 scalar_t__ FUNC_2 (int*,int*,int*,int*,int*,int*) ;
 int VAR_0 ;
 char* FUNC_3 (int,int) ;

void
FUNC_4(int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5,
          void * VAR_6, int VAR_7, int VAR_8,
          int VAR_9, int VAR_10)
{
  int VAR_11;
  int VAR_12;
  int VAR_13;
  char * VAR_14;
  char * VAR_15;

  if (FUNC_2(&VAR_2, &VAR_3, &VAR_4, &VAR_5, &VAR_9, &VAR_10))
  {
    if (VAR_1 == 12)
    {
      if (VAR_0 == 1)
      {
        VAR_15 = (char *) (((unsigned char *) VAR_6) + VAR_10 * VAR_7 + VAR_9);
      }
      else if (VAR_0 == 2)
      {
        VAR_15 = (char *) (((unsigned short *) VAR_6) + VAR_10 * VAR_7 + VAR_9);
      }
      else
      {
        VAR_15 = (char *) (((unsigned int *) VAR_6) + VAR_10 * VAR_7 + VAR_9);
      }
      for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
      {
        VAR_14 = FUNC_3(VAR_2, VAR_3 + VAR_11);
        if (VAR_14 != 0)
        {
          FUNC_0(VAR_14, VAR_15, VAR_4 * VAR_0);
          VAR_15 += VAR_7 * VAR_0;
        }
      }
    }
    else
    {
      if (VAR_0 == 1)
      {
        for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
        {
          for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
          {
            VAR_13 = *(((unsigned char *) VAR_6) +
                         ((VAR_11 + VAR_10) * VAR_7 + (VAR_12 + VAR_9)));
            FUNC_1(VAR_2 + VAR_12, VAR_3 + VAR_11, VAR_13, VAR_1, 0);
          }
        }
      }
      else if (VAR_0 == 2)
      {
        for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
        {
          for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
          {
            VAR_13 = *(((unsigned short *) VAR_6) +
                         ((VAR_11 + VAR_10) * VAR_7 + (VAR_12 + VAR_9)));
            FUNC_1(VAR_2 + VAR_12, VAR_3 + VAR_11, VAR_13, VAR_1, 0);
          }
        }
      }
      else
      {
        for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
        {
          for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
          {
            VAR_13 = *(((unsigned int *) VAR_6) +
                         ((VAR_11 + VAR_10) * VAR_7 + (VAR_12 + VAR_9)));
            FUNC_1(VAR_2 + VAR_12, VAR_3 + VAR_11, VAR_13, VAR_1, 0);
          }
        }
      }
    }
  }
}
