
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 double* VAR_0 ;

long double
FUNC_1(const char *VAR_1, char **VAR_2)
{
  double VAR_3;
  int VAR_4, VAR_5;
  int VAR_6;
  int VAR_7;
  int VAR_8=0;
  int VAR_9;

  VAR_3 = 0.0L;
  VAR_6 = 1;
  VAR_4 = VAR_5 = 0;
  VAR_7 = 1;

  while(*VAR_1 && FUNC_0(*VAR_1))
    VAR_1++;

  if (*VAR_1 == '+')
    VAR_1++;
  else if (*VAR_1 == '-')
  {
    VAR_6 = -1;
    VAR_1++;
  }

  while ((*VAR_1 >= '0') && (*VAR_1 <= '9'))
  {
    VAR_8 |= 1;
    VAR_3 *= 10.0L;
    VAR_3 += *VAR_1 - '0';
    VAR_1++;
  }

  if (*VAR_1 == '.')
  {
    VAR_1++;
    while ((*VAR_1 >= '0') && (*VAR_1 <= '9'))
    {
      VAR_8 |= 2;
      VAR_3 *= 10.0L;
      VAR_3 += *VAR_1 - '0';
      VAR_1++;
      VAR_5++;
    }
  }
  if (VAR_8 == 0)
  {
    if (VAR_2)
      *VAR_2 = (char *)VAR_1;
    return 0.0L;
  }

  if ((*VAR_1 == 'e') || (*VAR_1 == 'E'))
  {
    VAR_1++;
    if (*VAR_1 == '+')
      VAR_1++;
    else if (*VAR_1 == '-')
    {
      VAR_1++;
      VAR_7 = -1;
    }
    while ((*VAR_1 >= '0') && (*VAR_1 <= '9'))
    {
      VAR_4 *= 10;
      VAR_4 += *VAR_1 - '0';
      VAR_1++;
    }
  }
  if (VAR_7 < 0)
  {
    VAR_7 = -VAR_7;
    VAR_4 = -VAR_4;
  }
  VAR_4 = VAR_4 - VAR_5;
  if (VAR_4 < -4096)
  {

    VAR_3 *= 1.0e-2048L;
    VAR_4 += 2048;
  }
  if (VAR_4 < 0)
  {
    VAR_4 = -VAR_4;
    VAR_7 = -VAR_7;
  }
  if (VAR_4 >= 8192)
    VAR_4 = 8191;
  if (VAR_4)
  {
    double VAR_10 = 1.0L;
    VAR_9 = 0;
    while (VAR_4)
    {
      if (VAR_4 & 1)
 VAR_10 *= VAR_0[VAR_9];
      VAR_4 >>= 1;
      VAR_9++;
    }
    if (VAR_7 > 0)
      VAR_3 *= VAR_10;
    else
      VAR_3 /= VAR_10;
  }
  if (VAR_2)
    *VAR_2 = (char *)VAR_1;
  return VAR_3 * VAR_6;

  return 0;
}
