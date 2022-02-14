
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
double
FUNC_0(const char *VAR_0, char **VAR_1)
{
  long double VAR_2;
  int VAR_3;
  long double VAR_4;
  int VAR_5;
  int VAR_6;
  int VAR_7;
  int VAR_8=0;

  VAR_2 = 0.0;
  VAR_5 = 1;
  VAR_3 = 0;
  VAR_6 = 1;

  if (VAR_0 == ((void*)0))
     return VAR_2;


  while ((*VAR_0 == ' ') || (*VAR_0 == '\t'))
    VAR_0++;

  if (*VAR_0 == '+')
    VAR_0++;
  else if (*VAR_0 == '-')
  {
    VAR_5 = -1;
    VAR_0++;
  }

  while ((*VAR_0 >= '0') && (*VAR_0 <= '9'))
  {
    VAR_8 |= 1;
    VAR_2 *= 10.0;
    VAR_2 += *VAR_0 - '0';
    VAR_0++;
  }

  if (*VAR_0 == '.')
  {
    VAR_4 = 0.1L;
    VAR_0++;
    while ((*VAR_0 >= '0') && (*VAR_0 <= '9'))
    {
      VAR_8 |= 2;
      VAR_2 += VAR_4 * (*VAR_0 - '0');
      VAR_0++;
      VAR_4 *= 0.1L;
    }
  }

  if (VAR_8 == 0)
  {
    if (VAR_1)
      *VAR_1 = (char *)VAR_0;
    return 0;
  }

  if ((*VAR_0 == 'e') || (*VAR_0 == 'E'))
  {
    VAR_0++;
    if (*VAR_0 == '+')
      VAR_0++;
    else if (*VAR_0 == '-')
    {
      VAR_0++;
      VAR_6 = -1;
    }
    if ((*VAR_0 < '0') || (*VAR_0 > '9'))
    {
      if (VAR_1)
 *VAR_1 = (char *)VAR_0;
      return VAR_2;
    }

    while ((*VAR_0 >= '0') && (*VAR_0 <= '9'))
    {
      VAR_3 *= 10;
      VAR_3 += *VAR_0 - '0';
      VAR_0++;
    }
  }

  if (VAR_6 < 0)
    for (VAR_7 = 1; VAR_7 <= VAR_3; VAR_7++)
      VAR_2 *= 0.1L;
  else
    for (VAR_7 = 1; VAR_7 <= VAR_3; VAR_7++)
      VAR_2 *= 10.0;

  if (VAR_1)
    *VAR_1 = (char *)VAR_0;
  return VAR_2 * VAR_5;
}
