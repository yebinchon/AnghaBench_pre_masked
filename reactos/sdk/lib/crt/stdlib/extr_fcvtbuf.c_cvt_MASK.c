
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 double FUNC_0 (double,double*) ;

__attribute__((used)) static char *FUNC_1(double VAR_1, int VAR_2, int *VAR_3, int *VAR_4, char *VAR_5, int VAR_6)
{
  int VAR_7;
  double VAR_8, VAR_9;
  char *VAR_10, *VAR_11;

  if (VAR_2 >= VAR_0 - 1) VAR_2 = VAR_0 - 2;
  VAR_7 = 0;
  *VAR_4 = 0;
  VAR_10 = &VAR_5[0];
  if (VAR_1 < 0)
  {
    *VAR_4 = 1;
    VAR_1 = -VAR_1;
  }
  VAR_1 = FUNC_0(VAR_1, &VAR_8);
  VAR_11 = &VAR_5[VAR_0];

  if (VAR_8 != 0)
  {
    VAR_11 = &VAR_5[VAR_0];
    while (VAR_8 != 0)
    {
      VAR_9 = FUNC_0(VAR_8 / 10, &VAR_8);
      *--VAR_11 = (int)((VAR_9 + .03) * 10) + '0';
      VAR_7++;
    }
    while (VAR_11 < &VAR_5[VAR_0]) *VAR_10++ = *VAR_11++;
  }
  else if (VAR_1 > 0)
  {
    while ((VAR_9 = VAR_1 * 10) < 1)
    {
      VAR_1 = VAR_9;
      VAR_7--;
    }
  }
  VAR_11 = &VAR_5[VAR_2];
  if (VAR_6 == 0) VAR_11 += VAR_7;
  *VAR_3 = VAR_7;
  if (VAR_11 < &VAR_5[0])
  {
    VAR_5[0] = '\0';
    return VAR_5;
  }
  while (VAR_10 <= VAR_11 && VAR_10 < &VAR_5[VAR_0])
  {
    VAR_1 *= 10;
    VAR_1 = FUNC_0(VAR_1, &VAR_9);
    *VAR_10++ = (int) VAR_9 + '0';
  }
  if (VAR_11 >= &VAR_5[VAR_0])
  {
    VAR_5[VAR_0 - 1] = '\0';
    return VAR_5;
  }
  VAR_10 = VAR_11;
  *VAR_11 += 5;
  while (*VAR_11 > '9')
  {
    *VAR_11 = '0';
    if (VAR_11 > VAR_5)
      ++*--VAR_11;
    else
    {
      *VAR_11 = '1';
      (*VAR_3)++;
      if (VAR_6 == 0)
      {
        if (VAR_10 > VAR_5) *VAR_10 = '0';
        VAR_10++;
      }
    }
  }
  *VAR_10 = '\0';
  return VAR_5;
}
